#include "zrpcapplication.h"

void ZrpcApplication::Init(int argc, char** argv)
{

}
ZrpcApplication& ZrpcApplication::GetInstance()
{
    static ZrpcApplication app;
    return app;
}