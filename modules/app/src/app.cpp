#include <iostream>
#include "core/include/corefuncs.h"
#include "maths/include/mathfuncs.h"
int main()
{
    std::cout << "Main application" << std::endl;

    int c = createBaseSystem();
    std::cout << "After call createBaseSystem c=" << c << std::endl;

    int r = result();
    std::cout << "After call result r=" << r << std::endl;

    int d = do_compute(123);
    std::cout << "After call do_compute d=" << d <<std::endl;
    
    return 0;
}