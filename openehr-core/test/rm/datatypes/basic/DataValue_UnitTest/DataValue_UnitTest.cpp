#include <QTest>
#include <iostream>

#include <openehr/lang/Exception.h>
#include <openehr/rm/datatypes/basic/DataValue.h>

using namespace std;
using namespace ehr;

class DataValue_UnitTest : public QObject
{
    Q_OBJECT;
    private slots:
        void testDataValue()
        {
            try {
                DataValue::parseValue("[a],[b]");
            } catch (ehr::Exception &e) {
                cout << e.toString();
            }

        }
};

QTEST_MAIN(DataValue_UnitTest)
#include "DataValue_UnitTest.moc"
