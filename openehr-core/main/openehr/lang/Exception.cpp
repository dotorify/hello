#include <openehr/lang/Exception.h>

Exception::Exception(std::string msg)
{
    this->msg = msg;
}

std::string Exception::toString()
{
    return this->msg;
}

