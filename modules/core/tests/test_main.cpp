#include <iostream>
#include <gtest/gtest.h>
#include "core/include/corefuncs.h"

TEST(Simple_test, test_sum)
{
    ASSERT_EQ(1, createBaseSystem());
}

TEST(Simple_test_fail, test_sum)
{
    ASSERT_EQ(1, createBaseSystem());
}

TEST(Simple_test_2, test_sum)
{
    ASSERT_EQ(123, createBaseSystem());
}

TEST(Simple_test_fail2, test_sum)
{
    ASSERT_EQ(1, createBaseSystem());
}


int main(int argc, char *argv[])
{
    std::cout << "Pointer size=" << sizeof(int*) << std::endl;

#if DEBUG
    std::cout << "DEBUG is set" << std::endl;
#else
    std::cout << "DEBUG is not set" << std::endl;
#endif

#if RELEASE
    std::cout << "RELEASE is set" << std::endl;
#else
    std::cout << "RELEASE is not set" << std::endl;
#endif


    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
//    std::cout << "Hello world" << std::endl;
//    return 0;
}


