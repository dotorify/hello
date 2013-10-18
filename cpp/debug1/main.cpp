#include <string>
#include <sstream>
#include <iostream>
#include <cstdio>

//using namespace std;

int main(void)
{
	//const char* msg = static_cast<std::ostringstream*>( &(std::ostringstream() << 5) )->str().c_str();
	const char* msg = static_cast<std::ostringstream*>( &(std::ostringstream() << __LINE__) )->str().c_str();
	std::cout << msg << std::endl;
	
	return 0;
}
