#include "DvDate.h"

DvDate::DvDate()
{
    DvTemporal<int> temp(5);
    DvTemporal<int> temp2(10);
    temp.diff(&temp2);

}
