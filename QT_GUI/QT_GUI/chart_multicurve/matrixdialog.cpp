#include "matrixdialog.h"
#include "ui_matrixdialog.h"

MatrixDialog::MatrixDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MatrixDialog)
{
    ui->setupUi(this);
    f11 = "";
    f12 = "";
    f13 = "";
    f21 = "";
    f22 = "";
    f23 = "";

    connect(ui->btnOK, SIGNAL(clicked(bool)), this, SLOT(readText()));
    connect(ui->btnCancle, SIGNAL(clicked(bool)), this, SLOT(close()));
}

MatrixDialog::~MatrixDialog()
{
    delete ui;
}

void MatrixDialog::readText()
{
    f11 = ui->lineEdit->text();
    f12 = ui->lineEdit2->text();
    f13 = ui->lineEdit3->text();
    f21 = ui->lineEdit4->text();
    f22 = ui->lineEdit5->text();
    f23 = ui->lineEdit6->text();
    QDialog::accept();
}

void MatrixDialog::transData(std::vector<double> &vec)
{
    //int i = num-6;
    double F11 = f11.toDouble();
    double F12 = f12.toDouble();
    double F13 = f13.toDouble();
    double F21 = f21.toDouble();
    double F22 = f22.toDouble();
    double F23 = f23.toDouble();
    vec.push_back(F11);
    vec.push_back(F12);
    vec.push_back(F13);
    vec.push_back(F21);
    vec.push_back(F22);
    vec.push_back(F23);
}
