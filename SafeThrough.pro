#-------------------------------------------------
#
# Project created by QtCreator 2014-09-29T11:08:47
#
#-------------------------------------------------

QT       += core gui network xml

#DEFINES += _UNICODE
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SafeThrough
TEMPLATE = app


SOURCES += main.cpp\
        maindialog.cpp \
    qfiletrans.cpp \
    session.cpp \
    qfloaticon.cpp \
    qutil.cpp \
    caoper.cpp \
    qxmpppacketconsle.cpp \
    ftapi.cpp \
    mysock.cpp \
    qfilelist.cpp \
    tcpserver.cpp \
    qsetdlg.cpp \
    qviewnote.cpp \
    qsysnotehistory.cpp \
    qdownloadprogress.cpp \
    confirmdlg.cpp \
    skin/framelesswin.cpp \
    skin/iconbutton.cpp \
    framelesswin2.cpp \
    iconbutton2.cpp

HEADERS  += maindialog.h \
    qfiletrans.h \
    session.h \
    qfloaticon.h \
    qutil.h \
    caoper.h \
    qxmpppacketconsle.h \
    CommandParse.hpp \
    datatypes.h \
    ftapi.h \
    mysock.h \
    qfilelist.h \
    tcpserver.h \
    qsetdlg.h \
    qviewnote.h \
    qsysnotehistory.h \
    qdownloadprogress.h \
    confirmdlg.h \
    skin/framelesswin.h \
    skin/iconbutton.h \
    ui_maindialog.h \
    framelesswin2.h \
    iconbutton2.h

FORMS    += \
    qxmpppacketconsle.ui \
    qsetdlg.ui \
    maindialog.ui

RESOURCES += \
    ResUI.qrc

RC_FILE = app.rc
DEFINES +=  WIN32_LEAN_AND_MEAN BOOST_ALL_NO_LIB BOOST_SYSTEM_NO_DEPRECATED _WIN32_WINNT=0x0501

#INCLUDEPATH += "E:\work\qxmpp-master\src\client"
#INCLUDEPATH += "E:\work\qxmpp-master\src\base"


INCLUDEPATH += "E:\Workspace\QT\qxmpp-master\src\client"
INCLUDEPATH += "E:\Workspace\QT\qxmpp-master\src\base"
INCLUDEPATH += "E:\swift-2.0\3rdParty\Boost\src"

LIBS += "E:\swift-2.0\3rdParty\Boost\Swiften_Boost.lib"
LIBS += "E:\Workspace\QT\build-qxmpp-unknown-Debug\src\qxmpp_d0.lib"

OTHER_FILES += \
    app.rc
