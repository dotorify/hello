#ifndef __NULLPOINTER_EXCEPTION_H__
#define __NULLPOINTER_EXCEPTION_H__



#include <iostream>
#include <exception>
#include <string>


#define STRINGIZE(x) STRINGIZE2(x)
#define STRINGIZE2(x) #x
#define LINE_STRING STRINGIZE(__LINE__)


extern std::string globalExceptionMsg;

#define getExceptionMsg() ({										\
		globalExceptionMsg = "";								\
		globalExceptionMsg.append(__FILE__);							\
		globalExceptionMsg = globalExceptionMsg.substr(0, globalExceptionMsg.find_last_of("."));\
		globalExceptionMsg.append("::");							\
		globalExceptionMsg.append(__func__);							\
		globalExceptionMsg.append("() at ");							\
		globalExceptionMsg.append("" LINE_STRING " line \n\t");					\
		globalExceptionMsg.c_str();								\
	})

class MyBaseException: public std::exception
{
public:
	MyBaseException()
	{
		this->_why = "MyBaseException class";
	}

	~MyBaseException() throw() {}

	MyBaseException(const MyBaseException& o)
	{
		this->_why = "MyBaseException class";
	}
	MyBaseException(const char* why)
	{
		this->_why = std::string(why);
	}
	void appendWhy(const char* why)
	{
		this->_why.append(why);
	}
	const char* why()
	{
		return this->_why.c_str();
	}

protected:
	std::string _why;
};


class NullPointerException: public MyBaseException
{
public:
	NullPointerException()
	{
		this->_why = "NullPointerException class";
	}

	NullPointerException(const NullPointerException& o)
	{
		this->_why = "NullPointerException class";
	}
	NullPointerException(const char* why) : MyBaseException(why)
	{
		
	}
};









#endif
