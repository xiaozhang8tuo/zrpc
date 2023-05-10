#include <iostream>
#include <string>
#include "friend.pb.h"
#include "zrpcapplication.h"
#include "zrpcprovider.h"
#include <vector>
#include <string>

class FriendService : public biz::FriendServiceRpc
{
public:
    std::vector<std::string> getFriendLists(uint32_t uid)
    {
        std::vector<std::string> ret;
        ret.push_back("狐狸");
        ret.push_back("老黑");
        return ret;
    }
    void GetFriendLists(::google::protobuf::RpcController *controller,
                                const ::biz::GetFriendListsReq *request,
                                ::biz::GetFriendListsAck *response,
                                ::google::protobuf::Closure *done) override
    {
        uint32_t uid = request->uid();

        auto friend_lists = getFriendLists(uid); 

        response->set_result(0);
        for (const auto& i : friend_lists)
        {
            response->add_friends(i);
        }

        done->Run();
    }
};

int main(int argc, char** argv)
{
    // 调用框架的初始化操作
    ZrpcApplication::Init(argc, argv);

    // provider是一个rpc网络服务对象。把UserService对象发布到rpc节点上
    ZrpcProvider provider;
    provider.PubService(new FriendService());

    //启动一个rpc服务发布节点   Run以后，进程进入阻塞状态，等待远程的rpc调用请求
    provider.Run();
    return 0;
}