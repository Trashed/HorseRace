#-------------------------------------------------
#
# Project created by QtCreator 2012-06-12T18:49:17
#
#-------------------------------------------------

QT       += core gui

TARGET = HorseRace
TEMPLATE = app


SOURCES += sources/main.cpp\
        sources/mainwindow.cpp \
    sources/fileaction.cpp \
    sources/fileactionthread.cpp \
    sources/parser.cpp

HEADERS  += includes/mainwindow.h \
    includes/fileaction.h \
    includes/fileactionthread.h \
    includes/parser.h

FORMS    += ui/mainwindow.ui
