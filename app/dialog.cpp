#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::accept(){
    this->hide();
    QMessageBox::information(parentWidget(),tr("accepted"),tr("accepted."));
}
void Dialog::reject(){
    this->hide();
    qDebug() << parentWidget();
    QMessageBox::warning(parentWidget(),tr("rejected"),tr("rejected."));
}
