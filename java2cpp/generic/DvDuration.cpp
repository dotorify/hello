#include "DvDuration.h"

DvDuration::DvDuration(int val)
{
    this->data = val;
}

int DvDuration::getData()
{
    return this->data;
}

DvDuration* DvDuration::getDifference(DvTemporal *start, DvTemporal *end)
{
    return new DvDuration(end->getDateTime() - start->getDateTime());
}
