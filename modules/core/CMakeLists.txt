cmake_minimum_required(VERSION 3.8)
set(PROJECT_NAME_STR core)
project(${PROJECT_NAME_STR} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(GTest REQUIRED)
#find_package(Threads REQUIRED)

#include_directories(${GTEST_INCLUDE_DIRS})

ADD_LIBRARY(core src/corefuncs.cpp)

IF(USEPARAMS)
    TARGET_COMPILE_DEFINITIONS(core PRIVATE PARAM)
ENDIF()

TARGET_INCLUDE_DIRECTORIES(core PRIVATE "include")

#target_link_libraries(executeTest ${GTEST_LIBRARIES} pthread)