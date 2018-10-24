cmake_minimum_required(VERSION 3.8)
set(PROJECT_NAME_STR core)
project(${PROJECT_NAME_STR} CXX)
#set_property(TARGET tgt PROPERTY CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#TARGET_INCLUDE_DIRECTORIES(core PRIVATE "include" )


#INCLUDE_DIRECTORIES("include" )
#TARGET_INCLUDE_DIRECTORIES(core "include" )

#find_package(GTest REQUIRED)
#find_package(Threads REQUIRED)

#message(${GTEST_INCLUDE_DIRS} "--------")

#include_directories(${GTEST_INCLUDE_DIRS})

#MESSAGE("------------ 1 ------------")
#MESSAGE(${CMAKE_CURRENT_SOURCE_DIR})
#MESSAGE("------------- 2 -----------")

ADD_LIBRARY(core src/corefuncs.cpp)
#ADD_LIBRARY(core ${CMAKE_CURRENT_SOURCE_DIR}/src/corefuncs.cpp)

#ADD_EXECUTABLE(core src/corefuncs.cpp)

IF(USEPARAMS)
    TARGET_COMPILE_DEFINITIONS(core PRIVATE PARAM)
ENDIF()

TARGET_INCLUDE_DIRECTORIES(core PRIVATE "include")

#add_executable(executeTest main.cpp)

#target_link_libraries(executeTest ${GTEST_LIBRARIES} pthread)