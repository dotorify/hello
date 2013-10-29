QT=
TARGET   = openehr
TEMPLATE = lib
CONFIG   += staticlib

INCLUDES =  openehr/rm/RmObject.h \
            openehr/lang/Exception.h \
            openehr/rm/datatypes/basic/DataValue.h \

SOURCES  =  openehr/rm/RmObject.cpp \
            openehr/lang/Exception.cpp \
            openehr/rm/datatypes/basic/DataValue.cpp \


