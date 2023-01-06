# 1,设置工程名称，叫“learning-cpp”，在Linux下可以随便设置
project(learning-cpp)

# 2,设置 CMake 最低版本号，我电脑装的是3.5
CMAKE_MINIMUM_REQUIRED(VERSION 3.25.1)

# 3,设定编译参数
# C++11标准
set(CMAKE_CXX_STANDARD    11)
# 也可以是Debug
set(CMAKE_BUILD_TYPE "Release")
message("${PROJECT_SOURCE_DIR}=" ${PROJECT_SOURCE_DIR})

# 4,模块&源码定义
# 这里设置好路径后，进入子模块的cmake时不用再次设置
# 设置可执行文件的输出目录
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 设置库文件的输出目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# 编译add，生成静态库
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/add ADD_SRC_LIST)
add_library(add ${ADD_SRC_LIST})
# 修改库名
SET_TARGET_PROPERTIES(add PROPERTIES  OUTPUT_NAME "add")
SET_TARGET_PROPERTIES(add PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# 编译sub，生成静态库
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/sub SUB_SRC_LIST)
add_library(sub ${SUB_SRC_LIST})
# 修改库名
SET_TARGET_PROPERTIES(sub PROPERTIES  OUTPUT_NAME "sub")
SET_TARGET_PROPERTIES(sub PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# 编译mul，生成动态库
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/mul MUL_SRC_LIST)
add_library(mul SHARED ${MUL_SRC_LIST})
# 修改库名
SET_TARGET_PROPERTIES(mul PROPERTIES  OUTPUT_NAME "mul")
SET_TARGET_PROPERTIES(mul PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# 添加头文件路径，用于编译可执行文件
include_directories(./src/add
                    ./src/sub
                    ./src/mul)

# 5,指定可执行文件名及源码
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main/main.cpp)
# 链接所有库
target_link_libraries(main add sub mul)  


