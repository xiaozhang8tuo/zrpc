set(SRC_LIST calluserservice.cpp ../proto/user.pb.cc ../proto/friend.pb.cc)

add_executable(consumer ${SRC_LIST})
target_link_libraries(consumer zrpc)