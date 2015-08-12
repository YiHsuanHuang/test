#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString str = "Hello";
    qDebug() << str;
    str.prepend("sdf");
    qDebug() << str;
    str.append("sss");
    qDebug() << str;

    QString str2 = "hry";
    QString str3 = str2 + str;

    str3.clear();

    qDebug() << str.size();  //空白鍵也會算入
}

MainWindow::~MainWindow()
{
    delete ui;
}
