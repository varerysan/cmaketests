cmake_minimum_required(VERSION 3.5)
set(PROJECT_NAME_STR maths)
project(${PROJECT_NAME_STR} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(GTest REQUIRED)
#find_package(Threads REQUIRED)

#include_directories(${GTEST_INCLUDE_DIRS})

add_library(maths src/mathfuncs.cpp)
target_link_libraries(maths core)

TARGET_INCLUDE_DIRECTORIES(maths PRIVATE "include")
TARGET_INCLUDE_DIRECTORIES(maths PRIVATE "..")
