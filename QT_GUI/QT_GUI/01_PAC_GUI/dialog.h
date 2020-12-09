#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "matrixdialog.h"
#include <QPainter>
#include <QTimer>
#include <QButtonGroup>
#include <QToolTip>
#include <QFile>
#include <QDateTime>
#include "hyperionthread.h"
#include <QMessageBox>
#include <QThread>

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
    void creatSubDlg();
    void connectState();
    void clearLight(int);
    void startMytimer();
    void stopMytimer();
    void calCurve();
    void initWave();
    void showgraph1(bool);
    void showgraph2(bool);
    void showgraph3(bool);
    void showgraph4(bool);
    void clearGraphs();
    void slot_mouseRelease(QMouseEvent*);
    void openHyThread();
    void closeHyThread();

public:
    void paintEvent(QPaintEvent*);
    void changeEvent(QEvent* event);
    void saveForce(double f);


public:
    double f11, f12, f13, f21, f22, f23;
    double x, y1, y2, y3, y4, y5, y01, y02, y03, y04;
    bool checked1, checked2, checked3, checked4;
    MatrixDialog* subdlg;
    std::vector<double> vec;
    std::vector<double> peaks;
    int connectHyperion;
    int max_min;
    QTimer* timer;
    QButtonGroup* bg;
    bool connected;
    //HyperionThread* ht;
    //QThread* hythread;

};

#endif // DIALOG_H
