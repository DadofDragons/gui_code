#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>

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
    void setConnectHy();
    void changeConnectHy();

public:
    int connectHyperion;
    void paintEvent(QPaintEvent *);
};

#endif // DIALOG_H
