set(SRC_LIST 
    zrpcapplication.cpp
    zrpcprovider.cpp
    zrpcconfig.cpp
    zrpcheader.pb.cc
    zrpcchannel.cpp
    zrpccontroller.cpp
    zookeeperutil.cpp
    util/logger.cpp
)

add_library(zrpc ${SRC_LIST})
target_link_libraries(zrpc muduo_net muduo_base protobuf pthread zookeeper_mt)