cmake_minimum_required(VERSION 3.8)
set(PROJECT_NAME_STR app)
project(${PROJECT_NAME_STR} CXX)

#include(${CMAKE_CURRENT_SOURCE_DIR}/../core/CMakeLists.txt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(mainApp src/app.cpp)

#add_dependencies(mainApp core)

target_link_libraries(mainApp PRIVATE core)
target_include_directories(mainApp PRIVATE "..")

