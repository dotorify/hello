/**
 * Subject: exception 테스트
 * 
 *
 * 1. 예외를 참조로 써야하는 이유
 *	예외가 catch문을 만나면 복사가 된다.
 *	(복사 생성자에서 확인할 수 있다.)
 *
 *
 *
 *
 */
#include <iostream>
#include <exception>
#include <string>


#define STRINGIZE(x) STRINGIZE2(x)
#define STRINGIZE2(x) #x
#define LINE_STRING STRINGIZE(__LINE__)


std::string globalExceptionMsg;

#define getExceptionMsg() ({                                                                    \
    globalExceptionMsg.append(__FILE__)                                                         \
    globalExceptionMsg = globalExceptionMsg.substr(0, globalExceptionMsg.find_last_of("."));    \
    globalExceptionMsg.append("::");                                                            \
    globalExceptionMsg.append(__func__);                                                        \
    globalExceptionMsg.append("() at ");                                                        \
    globalExceptionMsg.append(LINE_STRING " line \n\t");                                        \
    globalExceptionMsg.c_str()                                                                  \
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

void foo3() // throw(NullPointerException)
{
    //throw NullPointerException(getExceptionMsg());
    throw MyBaseException(getExceptionMsg());
}


//예외가 자동으로 전달된다.
void foo2() // throw(NullPointerException)
{
    try
    {
        foo3();
    }catch(NullPointerException& e) {
        e.appendWhy(getExceptionMsg());
        throw;
    }
}

//예외가 자동으로 전달된다.
void foo1() //throw(NullPointerException)
{
    try
    {
        foo2();
    }catch(NullPointerException& e) {
        e.appendWhy(getExceptionMsg());
        throw;
    }
}

int main(void)
{
    try
    {
        foo1();
    }catch(NullPointerException& e) {
        std::cout << "catched by (NullPointerException& e) " << std::endl;
        std::cout << e.why() << std::endl;
    }catch(MyBaseException& e) {
        std::cout << "catched by (MyBaseException& e) " << std::endl;
        std::cout << e.why() << std::endl;
    }catch(...) {
        std::cout << "I don't know what it is." << std::endl;
    }
    return 0;
}
