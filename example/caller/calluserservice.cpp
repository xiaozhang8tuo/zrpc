#include "user.pb.h"
#include "zrpcapplication.h"
#include "zrpcchannel.h"

int main(int argc, char** argv)
{
    ZrpcApplication::Init(argc, argv);

    biz::UserServiceRpc_Stub service_stub(new ZrpcChannel());

    biz::LoginReq req;
    req.set_name("zyx");
    req.set_pwd("123");

    biz::LoginAck ack;

    service_stub.Login(nullptr, &req, &ack, nullptr);
    if (ack.result().result() == 0)
    {
        std::cout << "rpc login response success:" << ack.success() << std::endl;
    }
    else
    {
        std::cout << "rpc login response error : " << ack.result().errmsg() << std::endl;
    }


}