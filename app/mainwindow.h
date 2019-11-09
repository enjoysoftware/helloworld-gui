#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "dialog.h"
#include <QMainWindow>
#include <QFileDialog>
#include <QSysInfo>
#include <QFile>
#include <QDebug>
#include <QCloseEvent>
namespace Ui {
class MainWindow;
}
class Dialog;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//    explicit MainWindow(QWidget *parent = 0)
//    : QMainWindow(parent), dialog(new QDialog(this)) { }
private slots:
    void clicked();
private:
    Ui::MainWindow *ui;
    Dialog *dialog_;
protected:
    void closeEvent(QCloseEvent *);
};

#endif // MAINWINDOW_H
