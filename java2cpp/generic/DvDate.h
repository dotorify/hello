//#include "DvDuration.h"
#ifndef __DVDATE_H__
#define __DVDATE_H__

#include "DvTemporal.h"
#include "DvDuration.h"

class DvDate : public DvTemporal<DvDate>
{
    public:
        DvDate();
        DvDuration* getDifference(DvTemporal<DvDate> *other);

};

#endif //__DVDATE_H__
