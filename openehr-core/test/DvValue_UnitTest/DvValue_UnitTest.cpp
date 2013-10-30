#include <QTest>
#include <iostream>

#include <openehr/lang/Exception.h>
#include <openehr/rm/datatypes/basic/DataValue.h>

using namespace std;
using namespace ehr;

class DvValue_UnitTest : public QObject
{
    Q_OBJECT;
    private slots:
        void testDvValue()
        {
            try {
                DataValue::parseValue("[a],[b]");
            } catch (ehr::Exception &e) {
                cout << e.toString();
            }

        }
};

QTEST_MAIN(DvValue_UnitTest)
#include "DvValue_UnitTest.moc"
