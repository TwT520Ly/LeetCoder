cmake_minimum_required(VERSION 3.2)
project(C++)
include_directories()

set(MAIN_FILE 1.cpp)
message(STATUS "This is BINARY dir " ${C++_BINARY_DIR})
message(STATUS "This is SOURCE dir "${C++_SOURCE_DIR})

add_executable(test ${MAIN_FILE})
