#include "DvDuration.h"

DvDuration::DvDuration(int val)
{
    this->data = val;
}

int DvDuration::getData()
{
    return this->data;
}

DvDuration* DvDuration::getDifference(DvTemporal<int> *start, DvTemporal<int> *end)
{
    return new DvDuration(end->getDateTime() - start->getDateTime());
}
