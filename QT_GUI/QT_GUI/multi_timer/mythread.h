#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <unistd.h>

class MyThread : public QObject
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = nullptr);

signals:

public slots:
    void startThread();
public:
    void closeThread();
    int returntime();


public:
    bool isStop;
    int a;

};

#endif // MYTHREAD_H
