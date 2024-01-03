QT += core gui
QT += core gui quick
QT += core gui multimedia
QT -= console

CONFIG += c++17  console
CONFIG -= app_bundle


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        QRImage.cpp \
        main.cpp



#INCLUDEPATH += $$PWD/../Libraries/ffmpeg/4.4.1/include
#DEPENDPATH += $$PWD/../Libraries/ffmpeg/4.4.1/include

## Add the necessary Qt modules for Quick Controls
#QT += core gui quick

## Add the source files from the QZXing library to your project
#SOURCES += \
#    QZXing.cpp \
#    QZXingImageProvider.cpp \
#    # Add other source files from the library as needed

## Add the header files from the QZXing library to your project
#HEADERS += \
#    QZXing.h \
#    QZXingImageProvider.h \
#    QRImage.h




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/ -lQZXing3
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/ -lQZXing3d
else:unix: LIBS += -L$$PWD/lib/ -lQZXing3

LIBS += -L$$PWD/dll/ -lQZXing3

INCLUDEPATH += $$PWD/includes
DEPENDPATH += $$PWD/includes

HEADERS += \
    QRImage.h




