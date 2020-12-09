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
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QCustomPlot *widget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkChanel3;
    QCheckBox *checkChanel2;
    QCheckBox *checkChanel1;
    QCheckBox *checkChanel4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnAppear;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnStop;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(521, 370);
        widget = new QCustomPlot(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 80, 391, 201));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(19, 0, 391, 61));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkChanel3 = new QCheckBox(groupBox);
        checkChanel3->setObjectName(QString::fromUtf8("checkChanel3"));

        gridLayout->addWidget(checkChanel3, 0, 2, 1, 1);

        checkChanel2 = new QCheckBox(groupBox);
        checkChanel2->setObjectName(QString::fromUtf8("checkChanel2"));

        gridLayout->addWidget(checkChanel2, 0, 1, 1, 1);

        checkChanel1 = new QCheckBox(groupBox);
        checkChanel1->setObjectName(QString::fromUtf8("checkChanel1"));

        gridLayout->addWidget(checkChanel1, 0, 0, 1, 1);

        checkChanel4 = new QCheckBox(groupBox);
        checkChanel4->setObjectName(QString::fromUtf8("checkChanel4"));

        gridLayout->addWidget(checkChanel4, 0, 3, 1, 1);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 300, 391, 61));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnAppear = new QPushButton(groupBox_2);
        btnAppear->setObjectName(QString::fromUtf8("btnAppear"));

        gridLayout_2->addWidget(btnAppear, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(48, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        btnClear = new QPushButton(groupBox_2);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout_2->addWidget(btnClear, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(49, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        btnStop = new QPushButton(groupBox_2);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        gridLayout_2->addWidget(btnStop, 0, 4, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        checkChanel3->setText(QApplication::translate("Dialog", "chenal3", 0, QApplication::UnicodeUTF8));
        checkChanel2->setText(QApplication::translate("Dialog", "chanel2", 0, QApplication::UnicodeUTF8));
        checkChanel1->setText(QApplication::translate("Dialog", "chanel1", 0, QApplication::UnicodeUTF8));
        checkChanel4->setText(QApplication::translate("Dialog", "chanel4", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        btnAppear->setText(QApplication::translate("Dialog", "\346\230\276\347\244\272\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("Dialog", "\346\270\205\351\231\244\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        btnStop->setText(QApplication::translate("Dialog", "\346\232\202\345\201\234\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
