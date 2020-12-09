#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    f11 = 0.0; f12 = 0.0; f13 = 0.0;
    f21 = 0.0; f22 = 0.0; f23 = 0.0;
    x = 0.0;
    y1 =0.0; y2 =0.0; y3 =0.0; y4 =0.0; y5 =0.0;
    y01 = 0.0; y02 = 0.0; y03 = 0.0; y04 = 0.0;
    connectHyperion = 0; //default unconnected
    max_min = 0; //default: min
    timer = new QTimer;
    checked1 = false;
    checked2 = false;
    checked3 = false;
    checked4 = false;
    connected = false;
    //ht = new HyperionThread;

    //init raidobutton
    bg = new QButtonGroup;
    bg->addButton(ui->radioChoose1, 0);
    bg->addButton(ui->radioChoose2, 1);
    bg->addButton(ui->radioChoose3, 2);
    bg->addButton(ui->radioChoose4, 3);
    ui->radioChoose1->setChecked(true);

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
    ui->widget->graph(2)->setName("y=2sinx");
    ui->widget->addGraph();
    ui->widget->graph(3)->setName("y=2cosx");

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

    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));
    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), this, SLOT(clearLight(int)));
    connect(ui->btnMatrix, SIGNAL(clicked(bool)), this, SLOT(creatSubDlg()));
    connect(ui->btnConnectHy, SIGNAL(clicked(bool)), this, SLOT(connectState()));

    connect(ui->btnAppear, SIGNAL(clicked(bool)), this, SLOT(startMytimer()));
    connect(ui->btnStop, SIGNAL(clicked(bool)),this, SLOT(stopMytimer()));
    //connect(ui->btnAppear, SIGNAL(clicked(bool)), this, SLOT(openHyThread()));
    //connect(ui->btnStop, SIGNAL(clicked(bool)),this, SLOT(closeHyThread()));
    connect(ui->btnClear, SIGNAL(clicked(bool)), this, SLOT(clearGraphs()));
    connect(timer, SIGNAL(timeout()), this, SLOT(calCurve()));
    connect(ui->checkChanel1, SIGNAL(clicked(bool)), this, SLOT(showgraph1(bool)));
    connect(ui->checkChanel2, SIGNAL(clicked(bool)), this, SLOT(showgraph2(bool)));
    connect(ui->checkChanel3, SIGNAL(clicked(bool)), this, SLOT(showgraph3(bool)));
    connect(ui->checkChanel4, SIGNAL(clicked(bool)), this, SLOT(showgraph4(bool)));
    connect(ui->widget, SIGNAL(mouseRelease(QMouseEvent*)), this, SLOT(slot_mouseRelease(QMouseEvent*)));
    connect(ui->btnInitial, SIGNAL(clicked(bool)), this, SLOT(initWave()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::creatSubDlg()
{
    subdlg = new MatrixDialog(this);
    subdlg->setWindowTitle("force matrix");
    subdlg->show();
}

void Dialog::connectState()
{
    //此处添加连接解调仪的代码
//    connected = ht->connectHyperion();
//    if(connected)
//        connectHyperion = 1;
//    else
//    {
//        QMessageBox::information(NULL, "warning", "hyperion connected failed");
//        connectHyperion = 0;
//    }
    connectHyperion = 1;
    this->update();

}

void Dialog::clearLight(int a)
{
    if(a != 0)
    {
        connectHyperion = 2;
        this->update();
    }
    else
    {
        //此处添加代码：判断解调仪是否已经连接
        if(connected)
            connectHyperion = 1;
        else
            connectHyperion = 0;
        this->update();

    }
}

void Dialog::startMytimer()
{
//    if(!connected)
//    {
//        QMessageBox::information(NULL, "warning", "hyperion unconnected");
//        return;
//    }
    timer->start(100);
}

void Dialog::stopMytimer()
{
    timer->stop();
}

void Dialog::saveForce(double f)
{
    QFile myfile;
    QString path = "/home/lc/QT_GUI/01_PAC_GUI/force_file/force.txt";
    myfile.setFileName(path);
    if(myfile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        QDateTime current_date_time = QDateTime::currentDateTime();
        QString current_date = current_date_time.toString("yyyy/MM/dd hh:mm:ss");
        QString force_str;
        force_str = QString::number(f, 'f', 3);
        QString str = current_date + " : " + force_str + " mN" + "\n";
        myfile.write(str.toUtf8());
        myfile.close();

    }
}


void Dialog::calCurve()
{
    x += 0.1;
    //此处添加代码：从多线程类读取通道返回值
//    ht->transPeaks(peaks);
//    y1 = peaks[0];
//    y2 = peaks[1];
//    y3 = peaks[2];
//    y4 = peaks[3];

    y1 = sin(x);
    y2 = cos(x);
    y3 = 2*sin(x);
    y4 = 2*cos(x);
    subdlg->transData(vec);
    double wave1, wave2, wave3, wave4;
    int i = bg->checkedId();
    switch (i) {
    case 0:
    {
        wave1 = y1; wave2 = y2; wave3 = y3; wave4 = 0;
        //此处添加代码：波长温度补偿后与力矩阵计算
//        double delta1 = y1 - y01;
//        double delta2 = y2 - y02;
//        double delta3 = y3 - y03;
//        double delta = (delta1 + delta2 + delta3) / 3;
//        double sub1 = delta1 - delta;
//        double sub2 = delta2 - delta;
//        double sub3 = delta3 - delta;
//        double f1 = sub1 * vec[0] + sub2 * vec[1] + sub3 * vec[2];
//        double f2 = sub1 * vec[3] + sub2 * vec[4] + sub3 * vec[5];
//        double y5 = sqrt(f1*f1 + f2*f2);
        y5 = (y1 - y01)*vec[0] + (y2 - y02)*vec[1] + (y3-y03)*vec[2]+vec[3]+vec[4]+vec[5];
        QString str = QString::number(wave1, 'f', 3);
        ui->lineE_wave1->setText(str);
        str = QString::number(wave2, 'f', 3);
        ui->lineE_wave2->setText(str);
        str = QString::number(wave3, 'f', 3);
        ui->lineE_wave3->setText(str);
        str = QString::number(y5, 'f', 3);
        ui->lineE_f->setText(str);

        break;
    }
    case 1:
    {
        wave1 = y1; wave2 = y2; wave3 = 0; wave4 = y4;
        y5 = (y1 - y01)*vec[0] + (y2 - y02)*vec[1] + (y4-y04)*vec[2]+vec[3]+vec[4]+vec[5];
        QString str = QString::number(wave1, 'f', 3);
        ui->lineE_wave1->setText(str);
        str = QString::number(wave2, 'f', 3);
        ui->lineE_wave2->setText(str);
        str = QString::number(wave4, 'f', 3);
        ui->lineE_wave3->setText(str);
        str = QString::number(y5, 'f', 3);
        ui->lineE_f->setText(str);
        break;
    }
    case 2:
    {
        wave1 = y1; wave2 = 0; wave3 = y3; wave4 = y4;
        y5 = (y1 - y01)*vec[0] + (y3 - y03)*vec[1] + (y4-y04)*vec[2]+vec[3]+vec[4]+vec[5];
        QString str = QString::number(wave1, 'f', 3);
        ui->lineE_wave1->setText(str);
        str = QString::number(wave3, 'f', 3);
        ui->lineE_wave2->setText(str);
        str = QString::number(wave4, 'f', 3);
        ui->lineE_wave3->setText(str);
        str = QString::number(y5, 'f', 3);
        ui->lineE_f->setText(str);
        break;
    }
    case 3:
    {
        wave1 = 0; wave2 = y2; wave3 = y3; wave4 = y4;
        y5 = (y2 - y02)*vec[0] + (y3 - y03)*vec[1] + (y4-y04)*vec[2]+vec[3]+vec[4]+vec[5];
        QString str = QString::number(wave2, 'f', 3);
        ui->lineE_wave1->setText(str);
        str = QString::number(wave3, 'f', 3);
        ui->lineE_wave2->setText(str);
        str = QString::number(wave4, 'f', 3);
        ui->lineE_wave3->setText(str);
        str = QString::number(y5, 'f', 3);
        ui->lineE_f->setText(str);
        break;
    }
    default:
        break;
    }

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
    ui->widget->graph(0)->addData(x, wave1);
    //根据图像最高点最低点自动缩放坐标轴
    ui->widget->graph(0)->rescaleAxes(true);

    ui->widget->graph(1)->setPen(QPen(Qt::red));
    ui->widget->graph(1)->addData(x, wave2);
    ui->widget->graph(1)->rescaleAxes(true);

    ui->widget->graph(2)->setPen(QPen(Qt::black));
    ui->widget->graph(2)->addData(x, wave3);
    //ui->widget->graph(2)->rescaleAxes(true);

    ui->widget->graph(3)->setPen(QPen(Qt::yellow));
    ui->widget->graph(3)->addData(x, wave4);
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

    saveForce(y5);

}

void Dialog::initWave()
{
    //此处添加代码：从多线程类读取通道返回值
    y01 = 1;
    y02 = 2;
    y03 = 3;
    y04 = 4;
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
//    if(ui->widget_2->viewport().contains(event->pos()))
//    {
//        //将像素坐标转换为轴值
//        //double currentx = ui->widget->xAxis->pixelToCoord(ChickedPoint.x());
//        double currenty = ui->widget_2->yAxis->pixelToCoord(ChickedPoint.y());
//        //使用QToolTip输出值，
//        QToolTip::showText(mapToGlobal(event->pos()),QString("current value:%1").arg(currenty),this);
    //    }
}

void Dialog::openHyThread()
{
    /*

    */
//    if(!connected)
//        return;
//    ht = new HyperionThread;
//    hythread = new QThread;
//    ht->moveToThread(hythread);
//    connect(hythread, SIGNAL(started()), ht, SLOT(startHyThread()));
//    connect(hythread, SIGNAL(finished()), ht, SLOT(deleteLater()));
//    hythread->start();
}

void Dialog::closeHyThread()
{
//    if(hythread->isRunning())
//    {
//        ht->closeHyThread();
//        //timer->stop();
//        hythread->quit();
//        hythread->wait();
//    }
}

void Dialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    if(connectHyperion == 0)
    {
        painter.setPen(QColor(Qt::red));
        painter.setBrush(QBrush(Qt::red));
    }
    else if(connectHyperion == 1)
    {
        painter.setPen(QColor(Qt::green));
        painter.setBrush(QBrush(Qt::green));
    }
    else
        return;
    if(max_min == 0)
        painter.drawEllipse(280, 40, 15, 15);
    else
        painter.drawEllipse(390, 40, 15, 15);
}

void Dialog::changeEvent(QEvent *event)
{
    if(event->type()!=QEvent::WindowStateChange) return;
    if(this->windowState()==Qt::WindowMaximized)
    {
        max_min = 1;
        return;
    }

    if(this->windowState()==Qt::WindowNoState)
    {
        max_min = 0;
        return;
    }

}

