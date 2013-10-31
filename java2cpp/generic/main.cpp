#include <iostream>
#include <stdio.h>
#include <string>
#include "DvDuration.h"
#include "DvTemporal.h"

using namespace std;

int main(int argc, char const* argv[])
{
    DvTemporal start(15);
    DvTemporal end(18);
    DvDuration *duration = start.diff(&end);

    cout << "Start Date is " << start.getDateTime() << endl;
    cout << "End Date is " << end.getDateTime() << endl;
    cout << "Duration is " << duration->getData() << endl;

    return 0;
}
