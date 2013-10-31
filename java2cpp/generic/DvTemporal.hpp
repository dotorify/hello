#include <stdio.h>


DvTemporal::DvTemporal(int val)
{
    this->data = val;
}

int DvTemporal::getDateTime()
{
    return this->data;
}

DvDuration* DvTemporal::diff(DvTemporal *other)
{
    return DvDuration::getDifference(this, other);
}

