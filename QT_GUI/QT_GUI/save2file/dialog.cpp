#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer;
    i = 0.0;

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(startMytimer()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(stopMytimer()));
    connect(timer, SIGNAL(timeout()), this, SLOT(saveForce()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::startMytimer()
{
    timer->start(100);
}

void Dialog::stopMytimer()
{
    timer->stop();
}

void Dialog::saveForce()
{
    QFile myfile;
    QString path = "/home/lc/QT_GUI/save2file/force_file/force.txt";
    myfile.setFileName(path);
    bool ret = myfile.open(QIODevice::WriteOnly | QIODevice::Append);
    if(ret)
    {
        QDateTime current_date_time = QDateTime::currentDateTime();
        QString current_date = current_date_time.toString("yyyy/MM/dd hh:mm:ss");
        QString force_str;
        force_str = QString::number(i, 'f', 3);
        i++;
        QString str = current_date + " : " + force_str + "\n";

        myfile.write(str.toUtf8());
        myfile.close();
    }
}
