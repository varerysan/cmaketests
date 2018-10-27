cmake_minimum_required(VERSION 3.8)
set(PROJECT_NAME_STR core)
project(${PROJECT_NAME_STR} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    message("------- This is not MSVC -----")
    set (GTEST_LIBRARY C:/Mosyagin/Projects/googletests/_build/googlemock/Release/gmock.lib )
    set (GTEST_MAIN_LIBRARY C:/Mosyagin/Projects/googletests/_build/googlemock/Release/gmock_main.lib )
    set (GTEST_INCLUDE_DIR C:/Mosyagin/Projects/googletests/googletest-release-1.8.1/googletest/include/  )
endif()


find_package(GTest REQUIRED)
find_package(Threads REQUIRED)


#include_directories(${GTEST_INCLUDE_DIRS})

ADD_LIBRARY(core src/corefuncs.cpp)

IF(USEPARAMS)
    TARGET_COMPILE_DEFINITIONS(core PRIVATE PARAM)
ENDIF()

TARGET_INCLUDE_DIRECTORIES(core PRIVATE "include")

ADD_EXECUTABLE(coretest tests/test_main.cpp)


#target_link_libraries(coretest core)

target_include_directories(coretest PRIVATE ${GTEST_INCLUDE_DIRS})
target_include_directories(coretest PRIVATE "..")

target_link_libraries(coretest PRIVATE core ${GTEST_LIBRARIES} Threads::Threads)
#target_link_libraries(coretest STATIC core ${GTEST_LIBRARIES} Threads::Threads)

#target_link_libraries(executeTest ${GTEST_LIBRARIES} pthread)


# SET(CMAKE_CXX_FLAGS_RELEASE "/MT /O2 /Ob2 /W4 /GL")

if(MSVC)
    message("This is Visual Studio. Enable MT flag")
    SET(CMAKE_CXX_FLAGS_RELEASE "/MT")
else()
    message("This is not Visual Studio.")
endif()
