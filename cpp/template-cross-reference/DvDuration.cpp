#include "DvDuration.h"

DvDuration::DvDuration(int val)
{
    this->data = val;
}

int DvDuration::getData()
{
    return this->data;
}

DvDuration* DvDuration::getDifference(DvTemporal<DvDate*> *start, DvTemporal<DvDate*> *end)
{
    return start->diff(end);
}
