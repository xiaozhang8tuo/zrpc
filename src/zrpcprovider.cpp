#include "zrpcprovider.h"


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


