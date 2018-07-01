#-------------------------------------------------
#
# Project created by QtCreator 2018-05-23T14:50:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyWidget
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mylineedit.cpp \
    mykeyboard.cpp \
    dialog.cpp \
    result.cpp

HEADERS  += widget.h \
    mylineedit.h \
    mykeyboard.h \
    dialog.h \
    result.h

FORMS    += widget.ui \
    mylineedit.ui \
    mykeyboard.ui \
    dialog.ui \
    result.ui

RESOURCES += \
    ../build-MyWidget-Desktop-qt4-Debug/img/resource.qrc
