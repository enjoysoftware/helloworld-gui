#include "dialog.h"
#include "ui_dialog.h"
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
    QMessageBox::information(parentWidget(),tr("accenpted"),tr("acccenpted."));
}
void Dialog::reject(){
    this->hide();
    QMessageBox::warning(parentWidget(),tr("rejected"),tr("rejected."));
}
