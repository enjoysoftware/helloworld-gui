#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include <QAction>
#include <QMenu>
#define VERSION QString("1.5")
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    is_checked = false;
    settings = new QSettings("EnjoySoftware","HelloWorld GUI");
    loadSettings();
    createTrayIcon();
    connect(ui->desknotifyBtn,&QRadioButton::clicked,this,&MainWindow::checked);
    connect(ui->thiswindowBtn,&QRadioButton::clicked,this,&MainWindow::checked);
    connect(ui->msgboxBtn,&QRadioButton::clicked,this,&MainWindow::checked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete settings;
}
void MainWindow::createTrayIcon(){
    QAction action_Quit(tr("&Quit"));
    action_Quit.setIcon(QIcon::fromTheme("application-exit"));
    QMenu traymenu(this);
    traymenu.addAction(&action_Quit);
    trayicon.setContextMenu(&traymenu);
    trayicon.setIcon(QIcon(":/icons/desktop/helloworld-gui.png"));
    connect(&action_Quit,&QAction::triggered,this,&MainWindow::close);
    trayicon.show();
}
void MainWindow::clicked(){
    QString greeting_text=ui->lineEdit->text();
    if(is_checked)
    {
        if(ui->msgboxBtn->isChecked())
        {QMessageBox::information(this,tr("Greeting"),greeting_text);
        }
        else if(ui->thiswindowBtn->isChecked()){
            ui->greetingLabel->setText(tr("Greeting") + ":" + greeting_text);
        }else{
            trayicon.showMessage(tr("Greeting"),greeting_text,QIcon(":/icons/desktop/helloworld-gui.png"),5000);
        }
    }else{
        QMessageBox::information(this,tr("No where to display greeting message specified"),tr("No where to display greeting message specified.Please specify where to display greeting message."));
    }
}
void MainWindow::closeEvent(QCloseEvent *events){
//    int result=QMessageBox::question(this,tr("Do you want to exit?"),tr("This program will closed.\nAre you OK?"));
//    if(result == QMessageBox::No){
//        events->ignore();
//        qWarning() <<result<<":ignored";
//    }
    Q_UNUSED(events);
    settings->setValue("window_x",x());
    settings->setValue("window_y",y());
    settings->setValue("window_width",width());
    settings->setValue("window_height",height());
    qDebug() << "Quit.";
}
void MainWindow::showAbout(){
    QMessageBox::about(this,this->windowTitle(),tr("<h2>About</h2>Qt-based, this application displays a friendly, customizable greeting in GUI.<br><i>Version %1</i>"
                                                   "<br>Repository:<a href=\"%2\">%2</a>"
                                                   "<br>%3<br>License:<b>%4</b>").arg(VERSION).arg(QString(SOURCE)).arg(COPYRIGHT).arg(QString(LICENSE)));
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
void MainWindow::checked(){
    is_checked = true;
}
