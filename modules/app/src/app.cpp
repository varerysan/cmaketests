#include <iostream>
#include "core/include/corefuncs.h"

int main()
{
    std::cout << "Main application" << std::endl;

    int c = createBaseSystem();
    std::cout << "After call createBaseSystem c=" << c << std::endl;

    int r = result();
    std::cout << "After call result r=" << r << std::endl;

    return 0;
}