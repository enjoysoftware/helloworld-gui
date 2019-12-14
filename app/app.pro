#-------------------------------------------------
#
# Project created by QtCreator 2019-10-21T20:40:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = helloworld-qt-gui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui
TRANSLATIONS += translations/hello_ja_JP.ts

RESOURCES += \
    translations.qrc
LUPDATE = $$[QT_INSTALL_BINS]/lupdate -locations absolute -no-obsolete
LRELEASE = $$[QT_INSTALL_BINS]/lrelease
translations.commands = $$LUPDATE app.pro -ts $$TRANSLATIONS
QMAKE_EXTRA_TARGETS += translations
updateqm.input = TRANSLATIONS
updateqm.output = $$OUT_PWD/$$TARGET_DIR/${QMAKE_FILE_BASE}.qm
isEmpty(vcproj):updateqm.variable_out = PRE_TARGETDEPS
updateqm.commands = $$LRELEASE ${QMAKE_FILE_IN} -qm ${QMAKE_FILE_OUT}
updateqm.name = LRELEASE ${QMAKE_FILE_IN}
updateqm.CONFIG += no_link
QMAKE_EXTRA_COMPILERS += updateqm
