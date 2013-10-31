#ifndef __DVDURATION_H__
#define __DVDURATION_H__

#include "DvTemporal.h"
class DvTemporal;

class DvDuration
{
    public:
        DvDuration(int val);
        int getData();

    public:
        static DvDuration* getDifference(DvTemporal *start, DvTemporal *end);

    private:
        int data;
};

#endif //__DVDURATION_H__
