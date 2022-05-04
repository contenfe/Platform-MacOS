#CMake最低版本号要求
cmake_minimum_required(VERSION 3.10)

#指定项目名称
project(CMakeDemo)

#指定版本信息
#set(CMAKE_SYSTEM_VERSION 1)

#若是需要指定编译器路径
#set(CROSS_TOOLCHAIN_PREFIX "/path/arm-linux-")
#指定编译器
#set(CMAKE_C_COMPILER   "${CROSS_TOOLCHAIN_PREFIX}gcc")
#set(CMAKE_CXX_COMPILER "${CROSS_TOOLCHAIN_PREFIX}g++")

#使用默认路径的g++指定编译器  
#set(CMAKE_CXX_COMPILER "g++") 

#指定编译选项
set(CMAKE_BUILD_TYPE Debug )

#指定编译目录
set(PROJECT_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

#添加子目录,这样进入源码文件src目录可以继续构建  
add_subdirectory(${PROJECT_SOURCE_DIR}/src)  
 
# 在项目根目录新建目录build,进入build，执行cmake ..命令，若没有错误，在执行make命令。

# 在bin目录下产生可执行文件，lib中生成库文件。

# 另外：

# AUX_SOURCE_DIRECTORY(directory VAR)

# 将指定的directory目录下的所有源文件保存到VAR变量中，

# 例如：AUX_SOURCE_DIRECTORY(src SRC_CPP)将src目录下的源文件保存到SRC_CPP目录中。
