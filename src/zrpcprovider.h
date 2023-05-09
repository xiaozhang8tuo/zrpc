#ifndef __ZRPC_PROVIDER_H__
#define __ZRPC_PROVIDER_H__
#include "google/protobuf/service.h"
#include <google/protobuf/descriptor.h>
#include <unordered_map>
#include <string>

class ZrpcProvider
{
public:
    void PubService(google::protobuf::Service*);
    
private:
    struct ServiceInfo
    {
        google::protobuf::Service *m_service;
        std::unordered_map<std::string, const google::protobuf::MethodDescriptor*> m_methodMap;
    };

    std::unordered_map<std::string, ServiceInfo> m_serviceMap;

};

#endif