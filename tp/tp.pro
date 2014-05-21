QT += widgets

HEADERS       = mainwindow.h \
                mdichild.h \
    model.h \
    chatcontroller.h \
    actionmessage.h

SOURCES       = main.cpp \
                mainwindow.cpp \
                mdichild.cpp \
    model.cpp \
    chatcontroller.cpp \
    actionmessage.cpp
RESOURCES     = mdi.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/mainwindows/mdi
INSTALLS += target
