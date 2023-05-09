#include "test.pb.h"
#include <iostream>
#include <string>

// g++ -o test test.cpp test.pb.*  -lprotobuf -lpthread 
// pthread库 proto需要
int main()
{
    zrpc::LoginReq req;
    req.set_name("zyx");
}