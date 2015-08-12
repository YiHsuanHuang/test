#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QString str = "Hello";
//    qDebug() << str;
//    str.prepend("sdf");
//    qDebug() << str;
//    str.append("sss");
//    qDebug() << str;

//    QString str2 = "hry";
//    QString str3 = str2 + str;

//    str3.clear();

//    qDebug() << str.size();  //空白鍵也會算入
//    QString fileName;
//    fileName = fd.getOpenFileName();        //不能選.png .jpg .bmp

//    QFileDialog fd;
//    fileName = fd.getOpenFileName(this, "open file", "", "Image(*.jpg)");   //可以選很多東東


//     fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "/home/jana", tr("Image Files (*.png *.jpg *.bmp)"));
//     qDebug() << fileName;


     QTime time;
     time = time.currentTime();
     //qDebug() << time.toString("hh:mm");

     clock = new QTimer;
     clock->setInterval(1000);
     connect(clock, SIGNAL(timeout()), this, SLOT(updateTime()));

     clock->start();
     clock->stop();
     clock->setInterval(500);
     clock->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTime()
{
    QTime time;
    time = time.currentTime();
    qDebug() << time.toString("hh:mm:ss");

    timeSequence.append(time.toString("hh:mm:ss"));
    QDateTime date;
    date = date.currentDateTime();
    qDebug() << date.toString("yyyy-MM-dd");
}


void MainWindow::on_pushButton_clicked()
{
    clock->stop();
    for(int i = 0 ; i < timeSequence.size() ; i++)
    {
        qDebug() << timeSequence.at(i);  //timeSequence.at(i) = timeSequence[i]
    }
}
//https://goo.gl/RhziCX TA's
//#include "mainwindow.h"
//#include "ui_mainwindow.h"

//MainWindow::MainWindow(QWidget *parent) :
//    QMainWindow(parent),
//    ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);
//    clock = new QTimer;
//    clock->setInterval(1000);
//    connect(clock,SIGNAL(timeout()),
//            this,SLOT(updateTime()));
//    connect(clock,SIGNAL(timeout()),
//            this,SLOT(updateDate()));
//    clock->start();



//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}

//void MainWindow::updateTime()
//{
//    QTime time;
//    time = time.currentTime();
//    qDebug() << time.toString("hh:mm:ss");

//    timeSequence.append(time.toString("hh:mm:ss"));


//}

//void MainWindow::updateDate()
//{
//    QDateTime date;
//    date = date.currentDateTime();
//    qDebug() << date.toString("yyyy-MM-dd");
//    dateSequence << date.toString("yyyy-MM-dd");
//}

//void MainWindow::on_pushButton_clicked()
//{
//    clock->stop();
//    for(int i=0;i<timeSequence.size();i++)
//    {
//        qDebug() << timeSequence.at(i);

//    }
//    for(int j=0;j<dateSequence.size();j++)
//    {
//        qDebug() << dateSequence.at(j);
//    }

//}
