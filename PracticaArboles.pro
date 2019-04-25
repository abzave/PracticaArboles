TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    client.cpp \
    clientnode.cpp \
    linkedlist.cpp \
    binarynode.cpp \
    binarysearchtree.cpp \
    interface.cpp

HEADERS += \
    client.h \
    clientnode.h \
    linkedlist.h \
    binarynode.h \
    binarysearchtree.h \
    interface.h
