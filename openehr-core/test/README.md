# QTest

## 의존성

    sudo apt-get install libqt4-dev

## 프로젝트 만들기

    qmake -project "CONFIG += qtestlib"
    qmake
    make

## 프로젝트 example

`qmake -project "CONFIG += qtestlib"` 명령으로 생성되는 코드이다.
`QMAKE_POST_LINK`는 빌드가 끝난 후 자동실행하는 옵션이다.

    CONFIG += qtestlib
    TEMPLATE = app
    TARGET = 
    DEPENDPATH += .
    INCLUDEPATH += .

    # Input
    SOURCES += TestRmObject.cpp

    QMAKE_POST_LINK += export QTEST_COLORED=1 && ./$(TARGET)


## 소스 example

    #include <QTest>

    class TestRmObject : public QObject
    {
        Q_OBJECT;
        private slots:
            void testRmObject()
            {
                QString str = "Hello";
                QCOMPARE(str.toUpper(), QString("HELLO"));

            }
    };

    QTEST_MAIN(TestRmObject)
    #include "TestRmObject.moc"


## 실행시 TEXT에 색깔 입히기

    export QTEST_COLORED=1



