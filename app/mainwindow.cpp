#include "mainwindow.h"
#include "ui_mainwindow.h"
#define VERSION QString("1.3.1")
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
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
    qDebug() << "Exit.";
}
void MainWindow::showAbout(){
    QMessageBox::about(this,this->windowTitle(),tr("<h2>About</h2>Qt-based, this application displays a friendly, customizable greeting in GUI.<br><i>Version %1</i>"
                                                   "<br>Repository:<a href=\"https://github.com/enjoysoftware/helloworld-gui\">https://github.com/enjoysoftware/helloworld-gui</a>"
                                                   "<br>(C) 2020 EnjoySoftware").arg(VERSION));
}
