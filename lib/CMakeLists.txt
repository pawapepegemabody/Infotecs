cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lib)

set(SOURCE_LIB lib.cpp)

add_library(lib SHARED ${SOURCE_LIB})