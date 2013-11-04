#ifndef __DVDURATION_H__
#define __DVDURATION_H__


template <typename T>
class DvTemporal;

class DvDate;

class DvDuration
{
    public:
        DvDuration(int val);
        int getData();

    public:
        static DvDuration* getDifference(DvTemporal<DvDate*> *start, DvTemporal<DvDate*> *end);

    private:
        int data;
};

#include "DvTemporal.h"

#endif //__DVDURATION_H__
