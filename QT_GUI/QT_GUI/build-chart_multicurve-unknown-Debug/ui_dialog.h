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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkChanel1;
    QCheckBox *checkChanel2;
    QCheckBox *checkChanel3;
    QCheckBox *checkChanel4;
    QCustomPlot *widget;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *btnAppear;
    QPushButton *btnStop;
    QPushButton *btnClear;
    QCustomPlot *widget_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QPushButton *btnMatrix;
    QPushButton *btnInitial;
    QPushButton *btnClear_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(588, 529);
        gridLayout_3 = new QGridLayout(Dialog);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_2 = new QFrame(Dialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkChanel1 = new QCheckBox(frame_2);
        checkChanel1->setObjectName(QString::fromUtf8("checkChanel1"));

        horizontalLayout->addWidget(checkChanel1);

        checkChanel2 = new QCheckBox(frame_2);
        checkChanel2->setObjectName(QString::fromUtf8("checkChanel2"));

        horizontalLayout->addWidget(checkChanel2);

        checkChanel3 = new QCheckBox(frame_2);
        checkChanel3->setObjectName(QString::fromUtf8("checkChanel3"));

        horizontalLayout->addWidget(checkChanel3);

        checkChanel4 = new QCheckBox(frame_2);
        checkChanel4->setObjectName(QString::fromUtf8("checkChanel4"));

        horizontalLayout->addWidget(checkChanel4);


        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);

        widget = new QCustomPlot(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(widget, 1, 0, 1, 1);

        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnAppear = new QPushButton(frame);
        btnAppear->setObjectName(QString::fromUtf8("btnAppear"));

        gridLayout->addWidget(btnAppear, 0, 0, 1, 1);

        btnStop = new QPushButton(frame);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        gridLayout->addWidget(btnStop, 0, 1, 1, 1);

        btnClear = new QPushButton(frame);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout->addWidget(btnClear, 0, 2, 1, 1);


        gridLayout_3->addWidget(frame, 2, 0, 1, 1);

        widget_2 = new QCustomPlot(Dialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(widget_2, 3, 0, 1, 1);

        frame_3 = new QFrame(Dialog);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnMatrix = new QPushButton(frame_3);
        btnMatrix->setObjectName(QString::fromUtf8("btnMatrix"));

        gridLayout_2->addWidget(btnMatrix, 0, 0, 1, 1);

        btnInitial = new QPushButton(frame_3);
        btnInitial->setObjectName(QString::fromUtf8("btnInitial"));

        gridLayout_2->addWidget(btnInitial, 0, 1, 1, 1);

        btnClear_2 = new QPushButton(frame_3);
        btnClear_2->setObjectName(QString::fromUtf8("btnClear_2"));

        gridLayout_2->addWidget(btnClear_2, 0, 2, 1, 1);


        gridLayout_3->addWidget(frame_3, 4, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        checkChanel1->setText(QApplication::translate("Dialog", "chanel1", 0, QApplication::UnicodeUTF8));
        checkChanel2->setText(QApplication::translate("Dialog", "chanel2", 0, QApplication::UnicodeUTF8));
        checkChanel3->setText(QApplication::translate("Dialog", "chanel3", 0, QApplication::UnicodeUTF8));
        checkChanel4->setText(QApplication::translate("Dialog", "chanel4", 0, QApplication::UnicodeUTF8));
        btnAppear->setText(QApplication::translate("Dialog", "\346\230\276\347\244\272\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        btnStop->setText(QApplication::translate("Dialog", "\346\232\202\345\201\234\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\351\231\244\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        btnMatrix->setText(QApplication::translate("Dialog", "\350\276\223\345\205\245\345\212\233\347\237\251\351\230\265", 0, QApplication::UnicodeUTF8));
        btnInitial->setText(QApplication::translate("Dialog", "\345\210\235\345\247\213\345\214\226", 0, QApplication::UnicodeUTF8));
        btnClear_2->setText(QApplication::translate("Dialog", "\346\270\205\351\231\244\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
