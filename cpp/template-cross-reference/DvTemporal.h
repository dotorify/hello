#ifndef __DVTEMPORAL_H__
#define __DVTEMPORAL_H__

#include "DvDuration.h"
#include <stdio.h>

//class DvDuration;

template <typename T>
class DvTemporal
{
    public:
        DvTemporal();
        DvTemporal(int val);

        int getDateTime();

        DvDuration* diff(DvTemporal<T> *other);

    private:
        int data;
};

#include "DvTemporal.hpp"

#endif //__DVTEMPORAL_H__
