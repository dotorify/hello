#include "ClassA.h"
#include "NullPointerException.h"
#include <iostream>

void ClassA::error()
{
	throw NullPointerException(getExceptionMsg());
}
