<!--
 * @Descripttion: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-11-21 17:09:41
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-11-21 19:55:10
-->
src外部：
CMAKELists.txt

cmake_minimum_required(VERSION 3.10) 
PROJECT(CMAKE_PROJECT_C)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)


src内部：
CMAKELists.txt
include_directories(${PROJECT_SOURCE_DIR}/include)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(exec main)