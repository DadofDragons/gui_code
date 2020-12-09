#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "qcustomplot.h"
#include "QTimer"
#include <QToolTip>

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

public:
    QTimer* timer;
    double x, y;

public slots:
    void startMyTimer();
    void stopMyTimer();
    void showGraph();
    void clearGraph();
    void slot_mouseRelease(QMouseEvent*);
};

#endif // DIALOG_H
