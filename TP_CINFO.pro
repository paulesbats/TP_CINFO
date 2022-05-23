QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clyde.cpp \
    ennemi.cpp \
    exceptionsizetab.cpp \
    main.cpp \
    mainwindow.cpp \
    notifiercollision.cpp \
    animatedwidget.cpp \
    background.cpp \
    drawable.cpp \
    drawableelem.cpp \
    interactive.cpp \
    movable.cpp \
    regularmove.cpp \
    observercollision.cpp \



HEADERS += \
    clyde.h \
    ennemi.h \
    exceptionsizetab.h \
    mainwindow.h \
    notifiercollision.h \
    animatedwidget.h \
    background.h \
    consts.h \
    drawable.h \
    drawableelem.h \
    interactive.h \
    movable.h \
    personnage.h \
    regularmove.h \
    observercollision.h \

<<<<<<< HEAD

=======
>>>>>>> a117a438ab8e72e14c12a28ad6da53ae2746bf38

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
