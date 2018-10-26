#include <iostream>
#include <gtest/gtest.h>
#include "core/include/corefuncs.h"

TEST(Simple_test, test_sum)
{
    ASSERT_EQ(1, createBaseSystem());
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
//    std::cout << "Hello world" << std::endl;
//    return 0;
}


