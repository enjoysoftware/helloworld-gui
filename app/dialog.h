#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:
    void accept();
    void reject();
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
