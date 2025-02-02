cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Program_1)

include_directories(sources)

set(SOURCES
    sources/main.cpp
    sources/server.cpp
    sources/inputhandler.cpp
    sources/bufferprocessor.cpp
)

set(HEADERS
    sources/safebuffer.h
    sources/server.h
    sources/inputhandler.h
    sources/bufferprocessor.h
)
set(PARENT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/..")
include_directories(${PARENT_DIR}/lib)
add_subdirectory(${PARENT_DIR}/lib ${CMAKE_CURRENT_SOURCE_DIR})
add_executable(Program_1 ${SOURCES} ${HEADERS})
target_link_libraries(Program_1 lib)

