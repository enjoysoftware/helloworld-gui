#include "mainwindow.h"
#include "ui_mainwindow.h"
#define VERSION QString("1.1")
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->version->setText(tr("Version %1").arg(VERSION));
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
