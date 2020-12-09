#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->btnAppear, SIGNAL(clicked(bool)), this, SLOT(drawline()));
    connect(ui->btnClear, SIGNAL(clicked(bool)), this, SLOT(clearline()));


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::drawline()
{
    qDebug() << "begin slot";
    //ui->widget->setBackground(QBrush(Qt::black));
    //设定右上角图形标注可见
    ui->widget->legend->setVisible(true);
    //设定右上角图形标注的字体
    ui->widget->legend->setFont(QFont("Helvetica", 9));
    QVector<double> x(101), y(101);
    //图形为y=x^3
    for(int i = 0; i < 101; i++)
    {
        x[i] = i/5.0 - 10;
        y[i] = pow(x[i], 3);
    }
    //add graph
    ui->widget->addGraph();
    //设置画笔
    ui->widget->graph(0)->setPen(QPen(Qt::blue));
    //设置画刷,曲线和X轴围成面积的颜色
//    ui->widget->graph(0)->setBrush(QBrush(QColor(255, 255, 0)));
    //设置右上角图形标注名称
    ui->widget->graph(0)->setName("curve");
    //传入数据，setData的两个参数类型为double
    ui->widget->graph(0)->setData(x, y);
    //设置X轴文字标注
    ui->widget->xAxis->setLabel("time");
    //设置Y轴文字标注
    ui->widget->yAxis->setLabel("temp/shidu");
    //设置X轴坐标范围
    ui->widget->xAxis->setRange(-20,20);
    //设置Y轴坐标范围
    ui->widget->yAxis->setRange(-1100,1100);
    //在坐标轴右侧和上方画线，和X/Y轴一起形成一个矩形
    ui->widget->axisRect()->setupFullAxesBox();
    ui->widget->replot();

}

void Dialog::clearline()
{
    ui->widget->removeGraph(ui->widget->graph(0));
    ui->widget->replot();
}
