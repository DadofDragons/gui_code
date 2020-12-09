#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer;
    x = 0.0;
    y0 =0.0;
    y1 =0.0;
    y2 =0.0;
    y3 =0.0;
    y4 =0.0;
    y5 = 0.0;
    f11 = 0.0; f12 = 0.0; f13 = 0.0;
    f21 = 0.0; f22 = 0.0; f23 = 0.0;
    checked1 = false;
    checked2 = false;
    checked3 = false;
    checked4 = false;

    //设置基本坐标轴（左侧Y轴和下方X轴）可拖动、可缩放、曲线可选、legend可选、设置伸缩比例，使所有图例可见
    //ui->widget->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom| QCP::iSelectAxes |
    //                                  QCP::iSelectLegend | QCP::iSelectPlottables);
    ui->widget->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom| QCP::iSelectAxes |QCP::iSelectPlottables);
    //设置图例可见
    ui->widget->legend->setVisible(true);
    //设定右上角图形标注的字体
    ui->widget->legend->setFont(QFont("Helvetica", 9));
    //设置X轴文字标注
    ui->widget->xAxis->setLabel("t/s");
    //设置Y轴文字标注
    ui->widget->yAxis->setLabel("value");
    //确定鼠标点击的精度：
    ui->widget->setSelectionTolerance(1);

    ui->widget->addGraph();
    ui->widget->graph(0)->setName("y=sinx");
    ui->widget->addGraph();
    ui->widget->graph(1)->setName("y=cosx");
    ui->widget->addGraph();
    ui->widget->graph(2)->setName("y=tanx");
    ui->widget->addGraph();
    ui->widget->graph(3)->setName("y=x^2");

    ui->widget_2->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom| QCP::iSelectAxes |QCP::iSelectPlottables);
    //设置图例可见
    ui->widget_2->legend->setVisible(true);
    //设定右上角图形标注的字体
    ui->widget_2->legend->setFont(QFont("Helvetica", 9));
    //设置X轴文字标注
    ui->widget_2->xAxis->setLabel("t/s");
    //设置Y轴文字标注
    ui->widget_2->yAxis->setLabel("force/mN");
    //确定鼠标点击的精度：
    ui->widget_2->setSelectionTolerance(1);
    ui->widget_2->addGraph();
    ui->widget_2->graph(0)->setName("total force");

    connect(ui->btnAppear, SIGNAL(clicked(bool)), this, SLOT(startMytimer()));
    connect(ui->btnStop, SIGNAL(clicked(bool)),this, SLOT(stopMytimer()));
    connect(ui->btnClear, SIGNAL(clicked(bool)), this, SLOT(clearGraphs()));
    connect(timer, SIGNAL(timeout()), this, SLOT(calCurve()));
    connect(ui->checkChanel1, SIGNAL(clicked(bool)), this, SLOT(showgraph1(bool)));
    connect(ui->checkChanel2, SIGNAL(clicked(bool)), this, SLOT(showgraph2(bool)));
    connect(ui->checkChanel3, SIGNAL(clicked(bool)), this, SLOT(showgraph3(bool)));
    connect(ui->checkChanel4, SIGNAL(clicked(bool)), this, SLOT(showgraph4(bool)));
    connect(ui->widget, SIGNAL(mouseRelease(QMouseEvent*)), this, SLOT(slot_mouseRelease(QMouseEvent*)));
    connect(ui->btnInitial, SIGNAL(clicked(bool)), this, SLOT(forceInitial()));
    connect(ui->btnMatrix, SIGNAL(clicked(bool)), this, SLOT(creatSubDlg()));


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

void Dialog::calCurve()
{
    x += 0.1;
    y1 = sin(x);
    y2 = cos(x);
    y3 = tan(x);
    y4 = x*x;
    subdlg->transData(vec);
    y5 = vec[0] + vec[1] + vec[2] +vec[3] + vec[4] + vec[5];

    if(checked1)
        ui->widget->graph(0)->setVisible(true);
    else
        ui->widget->graph(0)->setVisible(false);
    if(checked2)
        ui->widget->graph(1)->setVisible(true);
    else
        ui->widget->graph(1)->setVisible(false);
    if(checked3)
        ui->widget->graph(2)->setVisible(true);
    else
        ui->widget->graph(2)->setVisible(false);
    if(checked4)
        ui->widget->graph(3)->setVisible(true);
    else
        ui->widget->graph(3)->setVisible(false);
    //设置画笔
    ui->widget->graph(0)->setPen(QPen(Qt::blue));
    //设置画刷,曲线和X轴围成面积的颜色
//    ui->widget->graph(0)->setBrush(QBrush(QColor(255, 255, 0)));
    //传入数据，setData的两个参数类型为double
    ui->widget->graph(0)->addData(x, y1);
    //根据图像最高点最低点自动缩放坐标轴
    ui->widget->graph(0)->rescaleAxes(true);

    ui->widget->graph(1)->setPen(QPen(Qt::red));
    ui->widget->graph(1)->addData(x, y2);
    ui->widget->graph(1)->rescaleAxes(true);

    ui->widget->graph(2)->setPen(QPen(Qt::black));
    ui->widget->graph(2)->addData(x, y3);
    //ui->widget->graph(2)->rescaleAxes(true);

    ui->widget->graph(3)->setPen(QPen(Qt::yellow));
    ui->widget->graph(3)->addData(x, y4);
    //ui->widget->graph(3)->rescaleAxes(true);
    //在坐标轴右侧和上方画线，和X/Y轴一起形成一个矩形
    ui->widget->axisRect()->setupFullAxesBox();
    ui->widget->replot();

    //设置画笔
    ui->widget_2->graph(0)->setPen(QPen(Qt::blue));
    ui->widget_2->graph(0)->addData(x, y5);
    ui->widget_2->graph(0)->rescaleAxes(true);
    ui->widget_2->axisRect()->setupFullAxesBox();
    ui->widget_2->replot();


}

void Dialog::showgraph1(bool checked)
{
    checked1 = checked;
}

void Dialog::showgraph2(bool checked)
{

    checked2 = checked;
}

void Dialog::showgraph3(bool checked)
{
    checked3 = checked;
}

void Dialog::showgraph4(bool checked)
{
    checked4 = checked;
}

void Dialog::clearGraphs()
{
    ui->widget->graph(0)->data().data()->clear();
    ui->widget->graph(1)->data().data()->clear();
    ui->widget->graph(2)->data().data()->clear();
    ui->widget->graph(3)->data().data()->clear();
    ui->widget_2->graph(0)->data().data()->clear();
    //设置X轴坐标范围
    ui->widget->xAxis->setRange(0,5);
    //设置Y轴坐标范围
    ui->widget->yAxis->setRange(0,5);
    ui->widget->replot();
    //设置X轴坐标范围
    ui->widget_2->xAxis->setRange(0,5);
    //设置Y轴坐标范围
    ui->widget_2->yAxis->setRange(0,5);
    ui->widget_2->replot();
    x = 0;
    y1 = 0;
    y2 = 0;
    y3 = 0;
    y4 = 0;
    y5 = 0;
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
    //double currentx = ui->widget->xAxis->pixelToCoord(ChickedPoint.x());
    double currenty = ui->widget->yAxis->pixelToCoord(ChickedPoint.y());
    //使用QToolTip输出值，
    QToolTip::showText(mapToGlobal(event->pos()),QString("current value:%1").arg(currenty),this);

}

void Dialog::forceInitial()
{
    y5 = y0;
}

void Dialog::creatSubDlg()
{
    subdlg = new MatrixDialog(this);
    subdlg->setWindowTitle("force matrix");
    subdlg->show();
}
