#include "zrpcheader.pb.h"
#include "zrpcprovider.h"
#include <string>
#include "zrpcapplication.h"
#include "zookeeperutil.h"

/*
service_name =>  service描述   
                        =》 service* 记录服务对象
                        method_name  =>  method方法对象
json   protobuf
*/
// 这里是框架提供给外部使用的，可以发布rpc方法的函数接口
void ZrpcProvider::PubService(google::protobuf::Service* service)
{
    ServiceInfo service_info;
    // 
    const google::protobuf::ServiceDescriptor * p_serviceDesc = service->GetDescriptor();

    std::string service_name = p_serviceDesc->name();
    int method_cnt = p_serviceDesc->method_count();


    for (int i=0; i<method_cnt; i++)
    {
        // 获取了服务对象指定下标的服务方法的描述（抽象描述） UserService   Login
        const google::protobuf::MethodDescriptor* p_methodDesc = p_serviceDesc->method(i);
        std::string method_name = p_methodDesc->name();
        service_info.m_methodMap.insert( {method_name, p_methodDesc} );
    }
    service_info.m_service = service;
    m_serviceMap.insert({service_name, service_info});
}


// 启动rpc服务节点，开始提供rpc远程网络调用服务
void ZrpcProvider::Run()
{
    std::string ip = ZrpcApplication::GetConfig().Load("rpcserverip");
    uint16_t port = atoi(ZrpcApplication::GetConfig().Load("rpcserverport").c_str());
    muduo::net::InetAddress address(ip, port);

    muduo::net::TcpServer server(&m_eventloop, address, "RpcProvider");

    server.setConnectionCallback(std::bind(&ZrpcProvider::OnConnection, this, std::placeholders::_1));
    server.setMessageCallback(std::bind(&ZrpcProvider::OnMessage, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));

    // 设置muduo库的线程数量
    server.setThreadNum(4);

    // rpc服务端准备启动，打印信息
    std::cout << "RpcProvider start service at ip:" << ip << " port:" << port << std::endl;

    // 把当前rpc节点上要发布的服务全部注册到zk上面，让rpc client可以从zk上发现服务
    // session timeout   30s     zkclient 网络I/O线程  1/3 * timeout 时间发送ping消息
    ZkClient zk_cli;
    zk_cli.Start();

    // service_name为永久性节点    method_name为临时性节点
    for (const auto& spair : m_serviceMap)
    {
        // /service_name   /UserServiceRpc
        std::string service_path = "/" + spair.first;
        zk_cli.Create(service_path.c_str(), nullptr, 0);
        for (const auto& mpair : spair.second.m_methodMap)
        {
            // /service_name/method_name   /UserServiceRpc/Login 存储当前这个rpc服务节点主机的ip和port
            std::string method_path = service_path + "/" + mpair.first;
            char method_path_data[128] = {0};
            sprintf(method_path_data, "%s:%d", ip.c_str(), port);

            // ZOO_EPHEMERAL表示znode是一个临时性节点
            zk_cli.Create(method_path.c_str(), method_path_data, strlen(method_path_data), ZOO_EPHEMERAL);
        }
    }


    // 启动网络服务
    server.start();
    m_eventloop.loop(); 
}

// 新的socket连接回调
void ZrpcProvider::OnConnection(const muduo::net::TcpConnectionPtr& conn)
{
    if (!conn->connected())
    {
        // 和rpc client的连接断开了
        conn->shutdown();
    }
}

/*
在框架内部，ZrpcProvider 和 ZrpcConsumer协商好之间通信用的protobuf数据类型
service_name method_name args    定义proto的message类型，进行数据头的序列化和反序列化
                                 service_name method_name args_size
16UserServiceLoginzhang san123456   

header_size(4个字节) + header_str + args_str
10 "10"
10000 "1000000"
std::string   insert和copy方法 
*/
// 已建立连接用户的读写事件回调 如果远程有一个rpc服务的调用请求，那么OnMessage方法就会响应
void ZrpcProvider::OnMessage(const muduo::net::TcpConnectionPtr& conn, muduo::net::Buffer* buffer, muduo::Timestamp ts)
{
    // 网络上接收的远程rpc调用请求的字符流    Login args
    std::string recv_buf = buffer->retrieveAllAsString();

    // 从字符流中读取前4个字节的内容
    uint32_t header_size = 0;
    recv_buf.copy((char*)&header_size, 4, 0);

    // 根据header_size读取数据头的原始字符流,反序列化数据，得到rpc请求的详细信息
    std::string rpc_head_str = recv_buf.substr(4, header_size);
    zrpc::RpcHeader rpcHeader;

    std::string service_name;
    std::string method_name;
    uint32_t args_size;
    if (rpcHeader.ParseFromString(rpc_head_str))
    {
        // 数据头反序列化成功
        service_name = rpcHeader.service_name();
        method_name = rpcHeader.method_name();
        args_size = rpcHeader.args_size();
    }
    else
    {
        // 数据头反序列化失败
        std::cout << "rpc_header_str:" << rpc_head_str << " parse error!" << std::endl;
        return;
    }

    // 获取rpc方法参数的字符流数据
    std::string args_str = recv_buf.substr(4 + header_size, args_size);

    // 打印调试信息
    std::cout << "============================================" << std::endl;
    std::cout << "header_size: " << header_size << std::endl; 
    std::cout << "rpc_header_str: " << rpc_head_str << std::endl; 
    std::cout << "service_name: " << service_name << std::endl; 
    std::cout << "method_name: " << method_name << std::endl; 
    std::cout << "args_str: " << args_str << std::endl; 
    std::cout << "============================================" << std::endl;

    // 获取service对象和method对象
    auto it = m_serviceMap.find(service_name);
    if (it == m_serviceMap.end())
    {
        std::cout << service_name << " is not exist!" << std::endl;
        return;
    }

    auto mit = it->second.m_methodMap.find(method_name);
    if (mit == it->second.m_methodMap.end())
    {
        std::cout << service_name << ":" << method_name << " is not exist!" << std::endl;
        return;
    }

    google::protobuf::Service * service = it->second.m_service;// 获取service对象  new UserService
    const google::protobuf::MethodDescriptor *method = mit->second; // 获取method对象  Login

    google::protobuf::Message * req = service->GetRequestPrototype(method).New();
    if (!req->ParseFromString(args_str))
    {
        std::cout << "request parse error, content:" << args_str << std::endl;
        return;
    }

    google::protobuf::Message* ack = service->GetResponsePrototype(method).New();
    google::protobuf::Closure* done = google::protobuf::NewCallback<ZrpcProvider, 
                                                                    const muduo::net::TcpConnectionPtr&,
                                                                    google::protobuf::Message *>
                                                                    (this, 
                                                                    &ZrpcProvider::OnSendAck, 
                                                                    conn, ack);

    service->CallMethod(method, nullptr, req, ack, done);
}

void ZrpcProvider::OnSendAck(const muduo::net::TcpConnectionPtr& conn, google::protobuf::Message *response)
{
    std::string response_str;
    if (response->SerializeToString(&response_str) )
    {
        conn->send(response_str);
    }
    else
    {
        std::cout << "serialize response_str error!" << std::endl; 
    }
    conn->shutdown(); // 模拟http的短链接服务，由rpcprovider主动断开连接
}


