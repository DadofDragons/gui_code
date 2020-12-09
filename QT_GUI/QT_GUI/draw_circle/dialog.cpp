#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connectHyperion =0;

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(setConnectHy()));
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(update()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(changeConnectHy()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(update()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setConnectHy()
{
    connectHyperion = 1;
}

void Dialog::changeConnectHy()
{
    connectHyperion = 0;
}

void Dialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    if(connectHyperion == 0)
    {
        painter.setPen(QColor(Qt::red));
        painter.setBrush(QBrush(Qt::red));
    }
    else
    {
        painter.setPen(QColor(Qt::green));
        painter.setBrush(QBrush(Qt::green));
    }
    painter.drawEllipse(50, 150, 15, 15);
}
