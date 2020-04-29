#include "mainwindow.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug("[Message]Starting loading translation files...");
    QTranslator translator;
    qDebug() << "Your locale is" << QLocale::system().name();
    translator.load("hello_" + QLocale::system().name(),":/translations");
    a.installTranslator(&translator);
    qDebug()<< "[Message]Finished loading translation files.";
    MainWindow w;
    w.show();
    return a.exec();
}
