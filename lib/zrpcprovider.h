#ifndef __ZRPC_PROVIDER_H__
#define __ZRPC_PROVIDER_H__
#include "google/protobuf/service.h"
#include <google/protobuf/descriptor.h>
#include <unordered_map>
#include <string>
#include <muduo/net/EventLoop.h>
#include <muduo/net/TcpServer.h>
#include <muduo/net/TcpConnection.h>

class ZrpcProvider
{
public:
    void PubService(google::protobuf::Service*);
    void Run();
private:
    struct ServiceInfo
    {
        google::protobuf::Service *m_service;
        std::unordered_map<std::string, const google::protobuf::MethodDescriptor*> m_methodMap;
    };

    std::unordered_map<std::string, ServiceInfo> m_serviceMap;
    muduo::net::EventLoop m_eventloop;


    void OnConnection(const muduo::net::TcpConnectionPtr&);
    void OnMessage(const muduo::net::TcpConnectionPtr &, muduo::net::Buffer *, muduo::Timestamp);
    void OnSendAck(const muduo::net::TcpConnectionPtr&, google::protobuf::Message *response);
};

#endif