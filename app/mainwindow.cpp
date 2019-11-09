#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    dialog_= new Dialog(this);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::clicked(){
    qDebug() << "show dialog";
    dialog_->show();
}
void MainWindow::closeEvent(QCloseEvent *events){
    int result=QMessageBox::question(this,tr("Do you want to exit?"),tr("This program will closed.\nAre you OK?"));
    if(result == QMessageBox::No){
        events->ignore();
        qWarning() <<result<<":ignored";
    }
}
