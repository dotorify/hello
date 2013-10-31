#ifndef __DVTEMPORAL_H__
#define __DVTEMPORAL_H__

#include "DvTemporal.h"
#include "DvDuration.h"

class DvDuration;

class DvTemporal
{
    public:
        DvTemporal(int val);

        int getDateTime();

        DvDuration* diff(DvTemporal *other);

    private:
        int data;
};

#include "DvTemporal.hpp"

#endif //__DVTEMPORAL_H__
