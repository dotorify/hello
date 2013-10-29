QT=
TARGET   = test
TEMPLATE = app

INCLUDEPATH += ../main/
QMAKE_LIBDIR += ../main/

LIBS += -lopenehr ../main/libopenehr.so

SOURCES  = main.cpp

