#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QToolTip>
#include "qcustomplot.h"
#include "matrixdialog.h"
#include <vector>

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
    void startMytimer();
    void stopMytimer();
    void calCurve();
    void showgraph1(bool);
    void showgraph2(bool);
    void showgraph3(bool);
    void showgraph4(bool);
    void clearGraphs();
    void slot_mouseRelease(QMouseEvent*);
    void forceInitial();
    void creatSubDlg();

public:
    QTimer* timer;
    double x, y0, y1, y2, y3, y4, y5;
    bool checked1, checked2, checked3, checked4;
    double f11, f12, f13, f21, f22, f23;
    MatrixDialog* subdlg;
    std::vector<double> vec;

};

#endif // DIALOG_H
