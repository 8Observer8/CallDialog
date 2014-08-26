#-------------------------------------------------
#
# Project created by QtCreator 2014-08-26T14:53:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CallDialog
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    FirstWindow.cpp \
    SecondWindow.cpp \
    SettingsDialog.cpp \
    Settings.cpp

HEADERS  += MainWindow.h \
    FirstWindow.h \
    SecondWindow.h \
    SettingsDialog.h \
    Settings.h

FORMS    += MainWindow.ui \
    FirstWindow.ui \
    SecondWindow.ui \
    SettingsDialog.ui
