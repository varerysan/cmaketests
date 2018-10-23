// #include "../include/corefuncs.h"
#include <iostream>
#include "corefuncs.h"

int createModel()
{
    return 1;
}

int main()
{
#ifdef PARAM
    std::cout << "HelloW 1" << std::endl;
#else
    std::cout << "HelloW 2" << std::endl;
#endif

    return 0;
}


