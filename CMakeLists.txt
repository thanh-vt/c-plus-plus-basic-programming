cmake_minimum_required(VERSION 3.16)
project(cpp-basic-programming)

set(CMAKE_CXX_STANDARD 20)

set(JAVA_DIR "C:/Program\ Files/Java/jdk-11.0.9/include;C:/Program\ Files/Java/jdk-11.0.9/include/win32")

message(${JAVA_DIR})

include_directories(${JAVA_DIR})

set(CMAKE_EXE_LINKER_FLAGS  "-Wl,--add-stdcall-alias")

add_library(cpp-for-java SHARED src/utility-package/com_tutorial_HelloWorldJNI.cpp src/utility-package/com_tutorial_HelloWorldJNI.h)

#add_library(utility-package STATIC utility-package/com_tutorial_HelloWorldJNI.cpp utility-package/com_tutorial_HelloWorldJNI.h)


