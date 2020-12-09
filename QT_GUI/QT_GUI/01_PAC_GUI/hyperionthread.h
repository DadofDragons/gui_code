#ifndef HYPERIONTHREAD_H
#define HYPERIONTHREAD_H

#include <QObject>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <time.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <ctype.h>
#include <QDebug>
#include <QThread>

#include "hLibrary.h"

class HyperionThread : public QObject
{
    Q_OBJECT
public:
    explicit HyperionThread(QObject *parent = nullptr);

signals:

public slots:
    void startHyThread();

public:
    Hyperion* hypInst;
    double peak_chanel1, peak_chanel2, peak_chanel3, peak_chanel4;
    bool isStop;
public:
    bool connectHyperion();
    void readPeaks();
    void closeHyThread();
    void transPeaks(std::vector<double> &vec);
};

#endif // HYPERIONTHREAD_H
