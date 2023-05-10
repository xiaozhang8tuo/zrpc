#include <iostream>
#include <string>
#include "user.pb.h"
#include "zrpcapplication.h"
#include "zrpcprovider.h"


/*
UserService本地方法改造成一个rpc服务，供远程调用
*/
class UserService : public biz::UserServiceRpc
{
public:
    bool Login(std::string name, std::string pwd)
    {
        std::cout << "doing local service: Login" << std::endl;
        std::cout << "name:" << name << " pwd:" << pwd << std::endl;  
        return true;
    }

    /*
    重写基类UserServiceRpc的虚函数 下面这些方法都是框架直接调用的
    1. caller   ===>   Login(LoginReq)  => muduo =>   callee 
    2. callee   ===>    Login(LoginReq)  => 交到下面重写的这个Login方法上了
    */
    void Login(::google::protobuf::RpcController* controller,
                       const ::biz::LoginReq* request,
                       ::biz::LoginAck* response,
                       ::google::protobuf::Closure* done) override
    {
        //取参
        std::string name = request->name(); 
        std::string pwd = request->pwd();
        
        //调用本地方法
        bool result = Login(name, pwd);     

        //设置rsp
        response->set_success(result);      
        response->mutable_result()->set_result(0);
        response->mutable_result()->set_errmsg("");

        //回调，网络层发送rsp
        done->Run();                        
    }
};

int main(int argc, char** argv)
{
    // 调用框架的初始化操作
    ZrpcApplication::Init(argc, argv);

    // provider是一个rpc网络服务对象。把UserService对象发布到rpc节点上
    ZrpcProvider provider;
    provider.PubService(new UserService());

    //启动一个rpc服务发布节点   Run以后，进程进入阻塞状态，等待远程的rpc调用请求
    provider.Run();
    return 0;
}