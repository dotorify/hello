######################################################################
# Automatically generated by qmake (2.01a) ? 10? 30 03:37:35 2013
######################################################################

CONFIG += qtestlib
TEMPLATE = app
TARGET = 
DEPENDPATH      += .
INCLUDEPATH     += ../../main/
QMAKE_LIBDIR    += ../../main/

# Input
SOURCES = DvValue_UnitTest.cpp
INCLUDEPATH += 
LIBS = -lopenehr

QMAKE_POST_LINK += export QTEST_COLORED=1 && ./$(TARGET)
