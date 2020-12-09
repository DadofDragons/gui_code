/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_10;
    QPushButton *btnConnectHy;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_7;
    QGridLayout *gridLayout_9;
    QLabel *label;
    QLineEdit *lineE_wave1;
    QLabel *label_4;
    QLabel *label_10;
    QLineEdit *lineE_wave2;
    QLabel *label_9;
    QLabel *label_12;
    QLineEdit *lineE_wave3;
    QLabel *label_11;
    QLabel *label_14;
    QLineEdit *lineE_f;
    QLabel *label_13;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QCheckBox *checkChanel1;
    QCheckBox *checkChanel2;
    QCheckBox *checkChanel3;
    QCheckBox *checkChanel4;
    QCustomPlot *widget;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QRadioButton *radioChoose1;
    QRadioButton *radioChoose2;
    QRadioButton *radioChoose3;
    QRadioButton *radioChoose4;
    QCustomPlot *widget_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QPushButton *btnMatrix;
    QPushButton *btnInitial;
    QPushButton *btnAppear;
    QPushButton *btnStop;
    QPushButton *btnClear;
    QWidget *page_2;
    QLabel *label_2;
    QWidget *page_3;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(887, 529);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(Dialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(16);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_10 = new QGridLayout(page);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        btnConnectHy = new QPushButton(page);
        btnConnectHy->setObjectName(QString::fromUtf8("btnConnectHy"));

        gridLayout_10->addWidget(btnConnectHy, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        frame_7 = new QFrame(page);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy2);
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_7);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label = new QLabel(frame_7);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_9->addWidget(label, 0, 0, 1, 1);

        lineE_wave1 = new QLineEdit(frame_7);
        lineE_wave1->setObjectName(QString::fromUtf8("lineE_wave1"));

        gridLayout_9->addWidget(lineE_wave1, 0, 1, 1, 1);

        label_4 = new QLabel(frame_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_9->addWidget(label_4, 0, 2, 1, 1);

        label_10 = new QLabel(frame_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_9->addWidget(label_10, 0, 3, 1, 1);

        lineE_wave2 = new QLineEdit(frame_7);
        lineE_wave2->setObjectName(QString::fromUtf8("lineE_wave2"));

        gridLayout_9->addWidget(lineE_wave2, 0, 4, 1, 1);

        label_9 = new QLabel(frame_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_9->addWidget(label_9, 0, 5, 1, 1);

        label_12 = new QLabel(frame_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_9->addWidget(label_12, 0, 6, 1, 1);

        lineE_wave3 = new QLineEdit(frame_7);
        lineE_wave3->setObjectName(QString::fromUtf8("lineE_wave3"));

        gridLayout_9->addWidget(lineE_wave3, 0, 7, 1, 1);

        label_11 = new QLabel(frame_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_9->addWidget(label_11, 0, 8, 1, 1);

        label_14 = new QLabel(frame_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_9->addWidget(label_14, 0, 9, 1, 1);

        lineE_f = new QLineEdit(frame_7);
        lineE_f->setObjectName(QString::fromUtf8("lineE_f"));

        gridLayout_9->addWidget(lineE_f, 0, 10, 1, 1);

        label_13 = new QLabel(frame_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_9->addWidget(label_13, 0, 11, 1, 1);


        gridLayout_10->addWidget(frame_7, 0, 2, 1, 1);

        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkChanel1 = new QCheckBox(frame);
        checkChanel1->setObjectName(QString::fromUtf8("checkChanel1"));

        gridLayout_2->addWidget(checkChanel1, 0, 0, 1, 1);

        checkChanel2 = new QCheckBox(frame);
        checkChanel2->setObjectName(QString::fromUtf8("checkChanel2"));

        gridLayout_2->addWidget(checkChanel2, 0, 1, 1, 1);

        checkChanel3 = new QCheckBox(frame);
        checkChanel3->setObjectName(QString::fromUtf8("checkChanel3"));

        gridLayout_2->addWidget(checkChanel3, 0, 2, 1, 1);

        checkChanel4 = new QCheckBox(frame);
        checkChanel4->setObjectName(QString::fromUtf8("checkChanel4"));

        gridLayout_2->addWidget(checkChanel4, 0, 3, 1, 1);


        gridLayout_10->addWidget(frame, 1, 0, 1, 3);

        widget = new QCustomPlot(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(widget, 2, 0, 1, 3);

        frame_2 = new QFrame(page);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioChoose1 = new QRadioButton(frame_2);
        radioChoose1->setObjectName(QString::fromUtf8("radioChoose1"));

        gridLayout_3->addWidget(radioChoose1, 0, 0, 1, 1);

        radioChoose2 = new QRadioButton(frame_2);
        radioChoose2->setObjectName(QString::fromUtf8("radioChoose2"));

        gridLayout_3->addWidget(radioChoose2, 0, 1, 1, 1);

        radioChoose3 = new QRadioButton(frame_2);
        radioChoose3->setObjectName(QString::fromUtf8("radioChoose3"));

        gridLayout_3->addWidget(radioChoose3, 0, 2, 1, 1);

        radioChoose4 = new QRadioButton(frame_2);
        radioChoose4->setObjectName(QString::fromUtf8("radioChoose4"));

        gridLayout_3->addWidget(radioChoose4, 0, 3, 1, 1);


        gridLayout_10->addWidget(frame_2, 3, 0, 1, 3);

        widget_2 = new QCustomPlot(page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy4.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(widget_2, 4, 0, 1, 3);

        frame_3 = new QFrame(page);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btnMatrix = new QPushButton(frame_3);
        btnMatrix->setObjectName(QString::fromUtf8("btnMatrix"));

        gridLayout_4->addWidget(btnMatrix, 0, 0, 1, 1);

        btnInitial = new QPushButton(frame_3);
        btnInitial->setObjectName(QString::fromUtf8("btnInitial"));

        gridLayout_4->addWidget(btnInitial, 0, 1, 1, 1);

        btnAppear = new QPushButton(frame_3);
        btnAppear->setObjectName(QString::fromUtf8("btnAppear"));

        gridLayout_4->addWidget(btnAppear, 0, 2, 1, 1);

        btnStop = new QPushButton(frame_3);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        gridLayout_4->addWidget(btnStop, 0, 3, 1, 1);

        btnClear = new QPushButton(frame_3);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout_4->addWidget(btnClear, 0, 4, 1, 1);


        gridLayout_10->addWidget(frame_3, 5, 0, 1, 3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 220, 81, 18));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 200, 54, 18));
        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 0, 2, 1, 1);


        retranslateUi(Dialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Dialog", "\350\247\243\350\260\203\344\273\252", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Dialog", "\350\277\220\345\212\250\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Dialog", "\345\256\236\346\227\266\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        btnConnectHy->setText(QApplication::translate("Dialog", "\350\277\236\346\216\245\350\247\243\350\260\203\344\273\252", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "wave1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "nm", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Dialog", "wave2", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog", "nm", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Dialog", "wave3", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Dialog", "nm", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Dialog", "f", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Dialog", "mN", 0, QApplication::UnicodeUTF8));
        checkChanel1->setText(QApplication::translate("Dialog", "chanel1", 0, QApplication::UnicodeUTF8));
        checkChanel2->setText(QApplication::translate("Dialog", "chanel2", 0, QApplication::UnicodeUTF8));
        checkChanel3->setText(QApplication::translate("Dialog", "chanel3", 0, QApplication::UnicodeUTF8));
        checkChanel4->setText(QApplication::translate("Dialog", "chanel4", 0, QApplication::UnicodeUTF8));
        radioChoose1->setText(QApplication::translate("Dialog", "chanel_123", 0, QApplication::UnicodeUTF8));
        radioChoose2->setText(QApplication::translate("Dialog", "chanel_124", 0, QApplication::UnicodeUTF8));
        radioChoose3->setText(QApplication::translate("Dialog", "chanel_134", 0, QApplication::UnicodeUTF8));
        radioChoose4->setText(QApplication::translate("Dialog", "chanel_234", 0, QApplication::UnicodeUTF8));
        btnMatrix->setText(QApplication::translate("Dialog", "\350\276\223\345\205\245\345\212\233\347\237\251\351\230\265", 0, QApplication::UnicodeUTF8));
        btnInitial->setText(QApplication::translate("Dialog", "\345\210\235\345\247\213\345\214\226", 0, QApplication::UnicodeUTF8));
        btnAppear->setText(QApplication::translate("Dialog", "\346\230\276\347\244\272\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        btnStop->setText(QApplication::translate("Dialog", "\346\232\202\345\201\234\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\351\231\244\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "pac control", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "camera", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
