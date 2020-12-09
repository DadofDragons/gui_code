#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    p = new QSplitter(Qt::Horizontal);
}

Dialog::~Dialog()
{
    delete ui;

}
