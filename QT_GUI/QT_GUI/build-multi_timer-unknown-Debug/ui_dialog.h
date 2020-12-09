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
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *btnBegin;
    QPushButton *btnEnd;
    QPushButton *btnClear;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        lcdNumber = new QLCDNumber(Dialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(160, 100, 111, 81));
        btnBegin = new QPushButton(Dialog);
        btnBegin->setObjectName(QString::fromUtf8("btnBegin"));
        btnBegin->setGeometry(QRect(80, 200, 81, 26));
        btnEnd = new QPushButton(Dialog);
        btnEnd->setObjectName(QString::fromUtf8("btnEnd"));
        btnEnd->setGeometry(QRect(180, 200, 80, 26));
        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(280, 200, 80, 26));

        retranslateUi(Dialog);
        QObject::connect(btnClear, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        btnBegin->setText(QApplication::translate("Dialog", "\345\274\200\345\247\213\347\272\277\347\250\213", 0, QApplication::UnicodeUTF8));
        btnEnd->setText(QApplication::translate("Dialog", "\347\273\223\346\235\237\347\272\277\347\250\213", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("Dialog", "close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
