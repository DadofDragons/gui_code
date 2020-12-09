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
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QGroupBox *groupBox_2;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnBlue;
    QRadioButton *rBtnRed;
    QPushButton *BtnOK;
    QPushButton *btnCancle;
    QPushButton *BtnClose;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 160, 381, 81));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, -10, 381, 81));
        chkBoxUnder = new QCheckBox(groupBox);
        chkBoxUnder->setObjectName(QString::fromUtf8("chkBoxUnder"));
        chkBoxUnder->setGeometry(QRect(20, 40, 81, 24));
        chkBoxItalic = new QCheckBox(groupBox);
        chkBoxItalic->setObjectName(QString::fromUtf8("chkBoxItalic"));
        chkBoxItalic->setGeometry(QRect(160, 40, 81, 24));
        chkBoxBold = new QCheckBox(groupBox);
        chkBoxBold->setObjectName(QString::fromUtf8("chkBoxBold"));
        chkBoxBold->setGeometry(QRect(280, 40, 81, 24));
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 60, 381, 80));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QString::fromUtf8("rBtnBlack"));
        rBtnBlack->setGeometry(QRect(20, 40, 96, 24));
        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QString::fromUtf8("rBtnBlue"));
        rBtnBlue->setGeometry(QRect(160, 40, 96, 24));
        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QString::fromUtf8("rBtnRed"));
        rBtnRed->setGeometry(QRect(280, 40, 96, 24));
        BtnOK = new QPushButton(Dialog);
        BtnOK->setObjectName(QString::fromUtf8("BtnOK"));
        BtnOK->setGeometry(QRect(20, 260, 80, 26));
        btnCancle = new QPushButton(Dialog);
        btnCancle->setObjectName(QString::fromUtf8("btnCancle"));
        btnCancle->setGeometry(QRect(150, 260, 80, 26));
        BtnClose = new QPushButton(Dialog);
        BtnClose->setObjectName(QString::fromUtf8("BtnClose"));
        BtnClose->setGeometry(QRect(270, 260, 80, 26));
        QWidget::setTabOrder(textEdit, chkBoxUnder);
        QWidget::setTabOrder(chkBoxUnder, chkBoxItalic);
        QWidget::setTabOrder(chkBoxItalic, chkBoxBold);
        QWidget::setTabOrder(chkBoxBold, rBtnBlack);
        QWidget::setTabOrder(rBtnBlack, rBtnBlue);
        QWidget::setTabOrder(rBtnBlue, rBtnRed);

        retranslateUi(Dialog);
        QObject::connect(BtnOK, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(btnCancle, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(BtnClose, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hello world</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">It is my demo</p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        chkBoxUnder->setText(QApplication::translate("Dialog", "Underline", 0, QApplication::UnicodeUTF8));
        chkBoxItalic->setText(QApplication::translate("Dialog", "Italic", 0, QApplication::UnicodeUTF8));
        chkBoxBold->setText(QApplication::translate("Dialog", "Bold", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        rBtnBlack->setText(QApplication::translate("Dialog", "Black", 0, QApplication::UnicodeUTF8));
        rBtnBlue->setText(QApplication::translate("Dialog", "Blue", 0, QApplication::UnicodeUTF8));
        rBtnRed->setText(QApplication::translate("Dialog", "Red", 0, QApplication::UnicodeUTF8));
        BtnOK->setText(QApplication::translate("Dialog", "OK", 0, QApplication::UnicodeUTF8));
        btnCancle->setText(QApplication::translate("Dialog", "cancle", 0, QApplication::UnicodeUTF8));
        BtnClose->setText(QApplication::translate("Dialog", "close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
