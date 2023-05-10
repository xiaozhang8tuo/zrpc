set(USER_SRC_LIST userservice.cpp ../proto/user.pb.cc)
set(FRIEND_SRC_LIST friendservice.cpp ../proto/friend.pb.cc)

add_executable(user ${USER_SRC_LIST})
target_link_libraries(user zrpc)

add_executable(friend ${FRIEND_SRC_LIST})
target_link_libraries(friend zrpc)
