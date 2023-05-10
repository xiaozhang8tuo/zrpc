#include "zrpcapplication.h"
#include <unistd.h>
#include <iostream>


ZprpcConfig ZrpcApplication::m_config;

void ShowArgsHelp()
{
    std::cout<<"format: command -i <configfile>" << std::endl;
}

void ZrpcApplication::Init(int argc, char** argv)
{
    if (argc < 2)
    {
        exit(EXIT_FAILURE);
    }

    int c = 0;
    std::string config_file;
    while( (c = getopt(argc, argv, "i:")) != -1)
    {
        switch (c)
        {
        case 'i':
            config_file = optarg;
            break;
        case '?':
            ShowArgsHelp();
            exit(EXIT_FAILURE);
            break;
        case ':':
            ShowArgsHelp();
            exit(EXIT_FAILURE);
            break;
        default:
            break;
        }
    }

    m_config.LoadConfigFile(config_file.c_str());

    std::cout << "rpcserverip:" << m_config.Load("rpcserverip") << std::endl;
    std::cout << "rpcserverport:" << m_config.Load("rpcserverport") << std::endl;
    std::cout << "zookeeperip:" << m_config.Load("zookeeperip") << std::endl;
    std::cout << "zookeeperport:" << m_config.Load("zookeeperport") << std::endl;
}

ZrpcApplication& ZrpcApplication::GetInstance()
{
    static ZrpcApplication app;
    return app;
}

ZprpcConfig& ZrpcApplication::GetConfig()
{
    return m_config;
}