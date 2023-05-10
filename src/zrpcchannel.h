#ifndef __ZRPC_CHANNEL_H__
#define __ZRPC_CHANNEL_H__
#include <google/protobuf/service.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>


class ZrpcChannel : public google::protobuf::RpcChannel
{
public:

    void CallMethod(const google::protobuf::MethodDescriptor* method,
                  google::protobuf::RpcController* controller,
                  const google::protobuf::Message* request,
                  google::protobuf::Message* response,
                  google::protobuf::Closure* done) override;
};


#endif