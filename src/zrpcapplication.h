#ifndef __ZRPC_APPLICATION_H__
#define __ZRPC_APPLICATION_H__


class ZrpcApplication
{
public:
    static void Init(int argc, char** argv);
    static ZrpcApplication& GetInstance();

private:
    ZrpcApplication(){}
    ZrpcApplication(const ZrpcApplication&) = delete;
    ZrpcApplication(ZrpcApplication&&) = delete;
};

#endif