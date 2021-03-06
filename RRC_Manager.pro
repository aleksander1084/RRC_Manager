#-------------------------------------------------
#
# Project created by QtCreator 2019-03-01T09:24:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RRC_Manager
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

CONFIG += c++11

SOURCES += \
        main.cpp \
        rrcmanagermainwindow.cpp \
    signinwindow.cpp \
    flashmemorywindow.cpp \
    rrcmanageraboutwindow.cpp \
    databasewindow.cpp \
    testmodulewindow.cpp \
    moduleflasherwindow.cpp \
    moduleflasheraswindow.cpp \
    modulemwwindow.cpp \
    modulemwaswindow.cpp \
    modulelidarwindow.cpp \
    modulelidaraswindow.cpp

HEADERS += \
        rrcmanagermainwindow.h \
    signinwindow.h \
    flashmemorywindow.h \
    rrcmanageraboutwindow.h \
    databasewindow.h \
    testmodulewindow.h \
    moduleflasherwindow.h \
    moduleflasheraswindow.h \
    modulemwwindow.h \
    modulemwaswindow.h \
    modulelidarwindow.h \
    modulelidaraswindow.h

FORMS += \
        rrcmanagermainwindow.ui \
    signinwindow.ui \
    flashmemorywindow.ui \
    rrcmanageraboutwindow.ui \
    databasewindow.ui \
    testmodulewindow.ui \
    moduleflasherwindow.ui \
    moduleflasheraswindow.ui \
    modulemwwindow.ui \
    modulemwaswindow.ui \
    modulelidarwindow.ui \
    modulelidaraswindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
