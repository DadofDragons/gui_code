#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <Python.h>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(ShowPython()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowPython()
{
    Py_Initialize();
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('./')");

    PyObject* pModule = PyImport_ImportModule("hello");
    if(!pModule)
    {
        qDebug() << "can't open python file";
        return;
    }

    PyObject* pFundHello = PyObject_GetAttrString(pModule, "hello");
    if(!pFundHello)
    {
        qDebug() << "get function hello failed";
        return;
    }
    PyObject_CallFunction(pFundHello, NULL);
    Py_Finalize();
}



