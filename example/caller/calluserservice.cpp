#include "friend.pb.h"
#include "user.pb.h"
#include "zrpcapplication.h"
#include "zrpcchannel.h"

int main(int argc, char** argv)
{
    ZrpcApplication::Init(argc, argv);

    biz::UserServiceRpc_Stub user_service_stub(new ZrpcChannel());

    biz::LoginReq req;
    req.set_name("zyx");
    req.set_pwd("123");

    biz::LoginAck ack;

    user_service_stub.Login(nullptr, &req, &ack, nullptr);
    if (ack.result().result() == 0)
    {
        std::cout << "rpc login response success:" << ack.success() << std::endl;
    }
    else
    {
        std::cout << "rpc login response error : " << ack.result().errmsg() << std::endl;
    }

    biz::FriendServiceRpc_Stub friend_service_stub(new ZrpcChannel());

    biz::GetFriendListsReq friend_req;
    friend_req.set_uid(1);
    biz::GetFriendListsAck friend_ack;

    ZrpcController controller;
    friend_service_stub.GetFriendLists(&controller, &friend_req, &friend_ack, nullptr);

    if (controller.Failed())
    {
        std::cout << controller.ErrorText() << std::endl;
    } 
    else
    {
        if (0 == friend_ack.result())
        {
            std::cout << "rpc GetFriendsList response success!" << std::endl;
            int size = friend_ack.friends_size();
            for (int i=0; i < size; ++i)
            {
                std::cout << "index:" << (i+1) << " name:" << friend_ack.friends(i) << std::endl;
            }
        }
        else
        {
            std::cout << "rpc GetFriendsList response error " << std::endl;
        }
    }


}