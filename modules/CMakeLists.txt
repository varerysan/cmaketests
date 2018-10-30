cmake_minimum_required(VERSION 3.8)
set(PROJECT_NAME_STR main)

#set (GTEST_ROOT C:/Mosyagin/Projects/googletests/googletest-release-1.8.1)
#
#  Could NOT find GTest (missing: GTEST_LIBRARY GTEST_INCLUDE_DIR
#  GTEST_MAIN_LIBRARY)

#add_subdirectory(googletest)
add_subdirectory(core)

add_subdirectory(maths)
add_subdirectory(app)
