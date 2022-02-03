QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    formadmin.cpp \
    formboard2.cpp \
    formchild.cpp \
    formdesk.cpp \
    formshowkindergarten.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Admin.h \
    Board.h \
    Child.h \
    Desk.h \
    Kindergarten.h \
    Person.h \
    formadmin.h \
    formboard2.h \
    formchild.h \
    formdesk.h \
    formshowkindergarten.h \
    mainwindow.h

FORMS += \
    formadmin.ui \
    formboard2.ui \
    formchild.ui \
    formdesk.ui \
    formshowkindergarten.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
