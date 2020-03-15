#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#define VERSION QString("1.3.1")
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    settings = new QSettings("EnjoySoftware","HelloWorld GUI");
    loadSettings();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete settings;
}
void MainWindow::clicked(){
    QString greeting_text=ui->lineEdit->text();
    QMessageBox::information(this,tr("Greeting"),greeting_text);
}
void MainWindow::closeEvent(QCloseEvent *events){
//    int result=QMessageBox::question(this,tr("Do you want to exit?"),tr("This program will closed.\nAre you OK?"));
//    if(result == QMessageBox::No){
//        events->ignore();
//        qWarning() <<result<<":ignored";
//    }
    settings->setValue("window_x",x());
    settings->setValue("window_y",y());
    settings->setValue("window_width",width());
    settings->setValue("window_height",height());
    qDebug() << "Exit.";
}
void MainWindow::showAbout(){
    QMessageBox::about(this,this->windowTitle(),tr("<h2>About</h2>Qt-based, this application displays a friendly, customizable greeting in GUI.<br><i>Version %1</i>"
                                                   "<br>Repository:<a href=\"https://github.com/enjoysoftware/helloworld-gui\">https://github.com/enjoysoftware/helloworld-gui</a>"
                                                   "<br>(C) 2020 EnjoySoftware<br>License:<b>GPL-3</b>").arg(VERSION));
}
void MainWindow::loadSettings(){
    QRect def = geometry();
    QDesktopWidget *deskwidget = QApplication::desktop();
    QRect desksize = deskwidget->screenGeometry();
    int x = settings->value("window_x",(desksize.height()-height())/2).toInt();
    int y = settings->value("window_y",(desksize.width()-height())/2).toInt();
    int w = settings->value("window_width",def.width()).toInt();
    int h = settings->value("window_height",def.height()).toInt();
    setGeometry(x,y,w,h);
}
