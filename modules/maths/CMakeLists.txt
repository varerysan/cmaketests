cmake_minimum_required(VERSION 3.5)
set(PROJECT_NAME_STR maths)
project(${PROJECT_NAME_STR} CXX)

include(${CMAKE_CURRENT_SOURCE_DIR}/../core/CMakeLists.txt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(GTest REQUIRED)
#find_package(Threads REQUIRED)

#message(${GTEST_INCLUDE_DIRS} "--------")

#include_directories(${GTEST_INCLUDE_DIRS})

add_library(maths src/mathfuncs.cpp)
target_link_libraries(maths core)

#add_executable(executeTest main.cpp)

#target_link_libraries(executeTest ${GTEST_LIBRARIES} pthread)