QT = core network

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        core/controllerhost.cpp \
        core/controllerslave.cpp \
        core/icontroller.cpp \
        core/keyboardmonitor.cpp \
        core/logshandler.cpp \
        core/mousemonitor.cpp \
        gui/traymenu.cpp \
        main.cpp \
        network/client.cpp \
        network/serializer.cpp \
        network/server.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    core/controllerhost.h \
    core/controllerslave.h \
    core/icontroller.h \
    core/keyboardmonitor.h \
    core/logshandler.h \
    core/mousemonitor.h \
    filetransfer/ifiletransfer.h \
    gui/traymenu.h \
    network/client.h \
    network/serializer.h \
    network/server.h
