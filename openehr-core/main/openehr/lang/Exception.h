#ifndef __LANG_EXCEPTION_H__
#define __LANG_EXCEPTION_H__

#include <string>
#include <exception>

class Exception
{
    public: Exception(std::string msg);
    public: std::string toString();
    private: std::string msg;
};



#endif
