#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer;
    x = 0.0;
    y = 0.0;
    //设置基本坐标轴（左侧Y轴和下方X轴）可拖动、可缩放、曲线可选、legend可选、设置伸缩比例，使所有图例可见
    //ui->widget->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom| QCP::iSelectAxes |
    //                                  QCP::iSelectLegend | QCP::iSelectPlottables);
    ui->widget->setInteractions(QCP::iSelectPlottables);
    //设置图例可见
    ui->widget->legend->setVisible(true);
    //设定右上角图形标注的字体
    ui->widget->legend->setFont(QFont("Helvetica", 9));
    //add graph
    ui->widget->addGraph();
    //设置右上角图形标注名称
    ui->widget->graph(0)->setName("y=sinx");
    //设置X轴文字标注
    ui->widget->xAxis->setLabel("t/s");
    //设置Y轴文字标注
    ui->widget->yAxis->setLabel("value");
    //确定鼠标点击的精度：
    ui->widget->setSelectionTolerance(1);

    connect(ui->btnAppear, SIGNAL(clicked(bool)), this, SLOT(startMyTimer()));
    connect(ui->btnStop, SIGNAL(clicked(bool)),this, SLOT(stopMyTimer()));
    connect(ui->btnClear, SIGNAL(clicked(bool)), this, SLOT(clearGraph()));
    connect(timer, SIGNAL(timeout()), this, SLOT(showGraph()));
    connect(ui->widget, SIGNAL(mouseRelease(QMouseEvent*)), this, SLOT(slot_mouseRelease(QMouseEvent*)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::startMyTimer()
{
    timer->start(100);
}

void Dialog::stopMyTimer()
{
    timer->stop();
}

void Dialog::showGraph()
{
    //x += M_PI/16;
    x += 0.1;
    y = sin(x);

    //设置画笔
    ui->widget->graph(0)->setPen(QPen(Qt::blue));
    //设置画刷,曲线和X轴围成面积的颜色
//    ui->widget->graph(0)->setBrush(QBrush(QColor(255, 255, 0)));

    //传入数据，setData的两个参数类型为double
    ui->widget->graph(0)->addData(x, y);
    //根据图像最高点最低点自动缩放坐标轴
    ui->widget->graph(0)->rescaleAxes(true);
    //在坐标轴右侧和上方画线，和X/Y轴一起形成一个矩形
    ui->widget->axisRect()->setupFullAxesBox();
    ui->widget->replot();

}

void Dialog::clearGraph()
{
    ui->widget->graph(0)->data().data()->clear();
    //设置X轴坐标范围
    ui->widget->xAxis->setRange(0,5);
    //设置Y轴坐标范围
    ui->widget->yAxis->setRange(0,5);
    ui->widget->replot();
    x = 0;
    y = 0;
}

void Dialog::slot_mouseRelease(QMouseEvent *event)
{
    //排除非左鼠标键
    if (event->button() != Qt::LeftButton)
    {
        return;
    }

    //获取点击的点坐标
    QPointF ChickedPoint = event->pos();
    //排除区间外鼠标点
    if(!ui->widget->viewport().contains(event->pos())){return;}
    //将像素坐标转换为轴值
    double currentx = ui->widget->xAxis->pixelToCoord(ChickedPoint.x());
    double currenty = ui->widget->yAxis->pixelToCoord(ChickedPoint.y());
    //使用QToolTip输出值，
    QToolTip::showText(mapToGlobal(event->pos()),QString("current value:%1").arg(currenty),this);

}
