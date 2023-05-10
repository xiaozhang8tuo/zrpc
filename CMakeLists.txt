cmake_minimum_required(VERSION 3.0)
project(zrpc)

set(CMAKE_BUILD_TYPE "Debug")

# 设置可执行文件输出的路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 设置项目库文件的输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 设置头文件搜索路径 -I
include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/src/util)
include_directories(${PROJECT_SOURCE_DIR}/example/proto)
# 设置项目库文件搜索路径 -L
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(src)
add_subdirectory(example)




# 提取头文件
# 设置源文件夹路径
set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
# 查找源文件夹下的所有头文件
file(GLOB_RECURSE HEADER_FILES ${SOURCE_DIR}/*.h)
# 遍历每个头文件
foreach(HEADER ${HEADER_FILES})
    # message(STATUS ${HEADER})
    # 获取相对于源文件夹的路径
    file(RELATIVE_PATH RELATIVE_PATH ${SOURCE_DIR} ${HEADER})
    # 构建目标文件的路径
    set(DESTINATION ${LIBRARY_OUTPUT_PATH}/${RELATIVE_PATH})
    # 创建目标文件夹
    get_filename_component(DESTINATION_DIR_PATH ${DESTINATION} DIRECTORY)
    file(MAKE_DIRECTORY ${DESTINATION_DIR_PATH})
    # 复制头文件到目标文件夹
    configure_file(${HEADER} ${DESTINATION} COPYONLY)
endforeach()