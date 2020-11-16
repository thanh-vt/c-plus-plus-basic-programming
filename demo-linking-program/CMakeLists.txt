cmake_minimum_required(VERSION 3.16)
project(demo-linking-program)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

include_directories(demo-static demo-dynamic) # directory to search for header files

link_directories(lib)

add_executable(demo-linking-program main-program/main.cpp)

add_library(demo-static demo-static/demo_static.cpp demo-static/demo_static.h)

add_library(demo-dynamic SHARED demo-dynamic/demo_dynamic.cpp lib/demo_dynamic.h)

target_link_libraries(demo-linking-program libdemo-dynamic.dll.a libdemo-static.a)

