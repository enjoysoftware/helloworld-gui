#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QFileDialog>
#include <QSysInfo>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QSettings>
#include <QCloseEvent>
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSettings *settings;
private:
    Ui::MainWindow *ui;
    void loadSettings();
    bool is_checked;
protected:
    void closeEvent(QCloseEvent *);
private slots:
    void clicked();
    void checked();
    void showAbout();
};

#endif // MAINWINDOW_H
