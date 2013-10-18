#include <iostream>

void foo()
{
    std::cout << "hello world~!!" << std::endl;
#ifdef DEBUG
    std::cout << "Debug mode" << std::endl;
#else
    std::cout << "Release mode" << std::endl;
#endif
    return 0;
}
