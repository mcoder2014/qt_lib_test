#-------------------------------------------------
#
# Project created by QtCreator 2019-04-08T16:12:44
#
#-------------------------------------------------

QT       -= gui

TARGET = staticlib
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DESTDIR = ../bin       # 生成的文件所在的目录
MOC_DIR = ./moc        # Q_OBJECT转换后的类
RCC_DIR = ./rcc        # .qrc文件转换后的位置
OBJECTS_DIR = ./tmp    # 编译中间文件的位置
UI_DIR = ./ui          # ui_xxx 文件存放位置


SOURCES += \
        staticlib.cpp

HEADERS += \
        staticlib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
