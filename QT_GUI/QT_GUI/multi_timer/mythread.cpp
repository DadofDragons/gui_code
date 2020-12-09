#include "mythread.h"


MyThread::MyThread(QObject *parent) : QObject(parent)
{
    isStop = false;
    a = 0;
}


void MyThread::startThread()
{
    qDebug() << "MyThread QThread::currentThreadId()==" << QThread::currentThreadId();
    while(1)
    {
        if(isStop)
            return;
        a++;
        sleep(1.0); //s
    }


}

void MyThread::closeThread()
{
    isStop = true;
}

int MyThread::returntime()
{
    return a;
}
