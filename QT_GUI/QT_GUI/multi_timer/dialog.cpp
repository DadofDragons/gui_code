#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    timer = new QTimer;
    connect(ui->btnBegin, SIGNAL(clicked(bool)), this, SLOT(openThread()));
    connect(ui->btnEnd, SIGNAL(clicked(bool)), this, SLOT(closeThread()));
    connect(ui->btnBegin, SIGNAL(clicked(bool)), this, SLOT(startMyTimer()));
    connect(timer, SIGNAL(timeout()), this, SLOT(updateLCD()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::openThread()
{
    qDebug() << "start thread";
    work1 = new MyThread;
    new_thread = new QThread;
    work1->moveToThread(new_thread);

    connect(new_thread, SIGNAL(started()), work1, SLOT(startThread()));
    connect(new_thread, SIGNAL(finished()), work1, SLOT(deleteLater()));
    connect(new_thread, SIGNAL(finished()), this, SLOT(finishThread()));
    new_thread->start();
    qDebug() << "Dialog QThread::currentThreadId()==" << QThread::currentThreadId();
}

void Dialog::closeThread()
{
    qDebug()<< "close thread";
    qDebug()<< "close timer";
    if(new_thread->isRunning())
    {
        work1->closeThread();
        timer->stop();
        new_thread->quit();
        new_thread->wait();
    }
}

void Dialog::finishThread()
{
    qDebug() << "finish";
}

void Dialog::startMyTimer()
{
    qDebug() << "timer start";
    timer->start(100);
}

void Dialog::updateLCD()
{
    int num = work1->returntime();
    ui->lcdNumber->display(num);

}
