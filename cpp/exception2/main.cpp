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
#include "ClassA.h"
#include "NullPointerException.h"


int main(void)
{
	try
	{
		ClassA a;
		a.error();
	}catch(MyBaseException& e) {
		std::cout << e.why() << "throw MyBaseException" << std::endl;
	}
	return 0;
}
