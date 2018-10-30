cmake_minimum_required(VERSION 3.8)
set(PROJECT_NAME_STR core)
project(${PROJECT_NAME_STR} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GTEST_ROOT C:/cpplibraries/gtest/)

message("Curr=${CMAKE_CURRENT_BINARY_DIR}")

add_subdirectory(../googletest/ ${CMAKE_CURRENT_BINARY_DIR}/_gtest_build)


#message( SEND_ERROR "------------ Stop -------------" )


ADD_LIBRARY(core src/corefuncs.cpp)

IF(USEPARAMS)
    TARGET_COMPILE_DEFINITIONS(core PRIVATE PARAM)
ENDIF()

TARGET_INCLUDE_DIRECTORIES(core PRIVATE "include")

ADD_EXECUTABLE(coretest tests/test_main.cpp)

target_include_directories(coretest PRIVATE "..")
target_include_directories(coretest PRIVATE "../googletest/googletest/include/")

#target_link_libraries(coretest core)

#target_include_directories(coretest PRIVATE ${GTEST_INCLUDE_DIRS})
#target_include_directories(coretest PRIVATE "..")

#target_link_libraries(coretest PRIVATE core gtest Threads::Threads)
target_link_libraries(coretest PRIVATE core gtest)

include(../cmake_specific.txt)
