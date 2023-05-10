#ifndef __ZRPC_APPLICATION_H__
#define __ZRPC_APPLICATION_H__
#include <string>
#include "zrpcconfig.h"


class ZrpcApplication
{
public:
    static void Init(int argc, char** argv);
    static ZrpcApplication& GetInstance();
    static ZprpcConfig& GetConfig();

private:
    static ZprpcConfig m_config;

    ZrpcApplication(){}
    ZrpcApplication(const ZrpcApplication&) = delete;
    ZrpcApplication(ZrpcApplication&&) = delete;
};

#endif