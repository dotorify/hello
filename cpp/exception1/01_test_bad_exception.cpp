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

class MyException: public std::exception
{
    public:
        MyException()
        {
            std::cout << "MyException()" << std::endl;
        }

        MyException(const MyException& o)
        {
            std::cout << "MyException(const MyException& o)" << std::endl;
        }
};



void foo3() throw(MyException)
{
    throw MyException();
}

//예외가 자동으로 전달된다.
void foo2() throw(MyException)
{
    foo3();
}

//예외가 자동으로 전달된다.
void foo1() throw(MyException)
{
    try
    {
        foo2();
    }catch(MyException e) {
        throw;
    }
}

int main(void)
{
    try
    {
        foo1();
    }catch(MyException e) {
        std::cout << "hello exception" << std::endl;
    }
    return 0;
}
