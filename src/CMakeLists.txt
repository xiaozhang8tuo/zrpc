set(SRC_LIST 
    zrpcapplication.cpp
    zrpcprovider.cpp
)

add_library(zrpc ${SRC_LIST})
target_link_libraries(zrpc muduo_net muduo_base protobuf pthread)