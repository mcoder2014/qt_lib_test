TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    plaina.cpp

HEADERS += \
    plaina.h

DESTDIR = ../bin       # 生成的文件所在的目录
MOC_DIR = ./moc        # Q_OBJECT转换后的类
RCC_DIR = ./rcc        # .qrc文件转换后的位置
OBJECTS_DIR = ./tmp    # 编译中间文件的位置
UI_DIR = ./ui          # ui_xxx 文件存放位置
