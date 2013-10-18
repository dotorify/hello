#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "hello world~!!" << std::endl;
#ifdef DEBUG
    std::cout << "Debug mode" << std::endl;
#else
    std::cout << "Release mode" << std::endl;
#endif
    return 0;
}
