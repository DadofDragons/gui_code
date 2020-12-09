#-------------------------------------------------
#
# Project created by QtCreator 2020-06-10T09:20:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_python
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    hCommLibrary.cpp \
    hLibrary.cpp

HEADERS += \
        mainwindow.h \
    hCommLibrary.h \
    hLibrary.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    hello.py


unix:!macx: LIBS += -L$$PWD/../../../../usr/lib/python3.5/config-3.5m-x86_64-linux-gnu/ -lpython3.5m

INCLUDEPATH += $$PWD/../../../../usr/include/python3.5
DEPENDPATH += $$PWD/../../../../usr/include/python3.5

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../usr/lib/python3.5/config-3.5m-x86_64-linux-gnu/libpython3.5m.a

QMAKE_CXXFLAGS += -std=c++11
