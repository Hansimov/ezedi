TEMPLATE = app
TARGET = ezedi

QT += multimedia multimediawidgets

HEADERS = \
    videoplayer.h

SOURCES = \
    main.cpp\
    videoplayer.cpp

target.path = ./ezedi
INSTALLS += target

QT += widgets
