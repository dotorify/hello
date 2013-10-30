#include <QTest>

class RmObject_UnitTest : public QObject
{
    Q_OBJECT;
    private slots:
        void testRmObject()
        {
            QString str = "Hello";
            QCOMPARE(str.toUpper(), QString("HELLO"));

        }
};

QTEST_MAIN(RmObject_UnitTest)
#include "RmObject_UnitTest.moc"
    //#include <QTest>
    //#include <openehr/rm/RmObject.h>

    //using namespace ehr;

    //class TestRmObject : public QOjbect
    //{
    //Q_OBJECT
    //private slots:
    //notNull()
    //{
    //RmObject *rmObject = new RmObject();
    //QVERIFY(rmObject != NULL);
    //}
    //}


    //QTEST_MAIN(TestRmObject)
    //#include "TestRmObject.h"
