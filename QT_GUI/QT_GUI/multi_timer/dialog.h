#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QThread>
#include <QDebug>
#include <QTimer>
#include "mythread.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

public slots:
    void openThread();
    void closeThread();
    void finishThread();
    void startMyTimer();
    void updateLCD();

public:
    MyThread* work1;
    QThread* new_thread;
    QTimer* timer;

};

#endif // DIALOG_H
