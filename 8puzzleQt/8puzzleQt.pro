#-------------------------------------------------
#
# Project created by QtCreator 2012-06-15T23:36:49
#
#-------------------------------------------------

QT       += core gui

TARGET = 8puzzleQt
TEMPLATE = app


SOURCES += main.cpp\
        puzzlewindow.cpp \
    board.cpp \
    tile.cpp \
    dimension.cpp \
    solver.cpp

HEADERS  += puzzlewindow.h \
    board.h \
    tile.h \
    dimension.h \
    solver.h

FORMS    += puzzlewindow.ui
