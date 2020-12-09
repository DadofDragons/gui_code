/********************************************************************************
** Form generated from reading UI file 'matrixdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIXDIALOG_H
#define UI_MATRIXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MatrixDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit2;
    QLabel *label_3;
    QLineEdit *lineEdit3;
    QLabel *label_5;
    QLineEdit *lineEdit4;
    QLabel *label_4;
    QLineEdit *lineEdit5;
    QLabel *label_6;
    QLineEdit *lineEdit6;
    QPushButton *btnOK;
    QPushButton *btnCancle;

    void setupUi(QDialog *MatrixDialog)
    {
        if (MatrixDialog->objectName().isEmpty())
            MatrixDialog->setObjectName(QString::fromUtf8("MatrixDialog"));
        MatrixDialog->resize(380, 216);
        gridLayout = new QGridLayout(MatrixDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(MatrixDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(MatrixDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(MatrixDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEdit2 = new QLineEdit(MatrixDialog);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));

        gridLayout->addWidget(lineEdit2, 0, 3, 1, 1);

        label_3 = new QLabel(MatrixDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        lineEdit3 = new QLineEdit(MatrixDialog);
        lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));

        gridLayout->addWidget(lineEdit3, 0, 5, 1, 1);

        label_5 = new QLabel(MatrixDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        lineEdit4 = new QLineEdit(MatrixDialog);
        lineEdit4->setObjectName(QString::fromUtf8("lineEdit4"));

        gridLayout->addWidget(lineEdit4, 1, 1, 1, 1);

        label_4 = new QLabel(MatrixDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        lineEdit5 = new QLineEdit(MatrixDialog);
        lineEdit5->setObjectName(QString::fromUtf8("lineEdit5"));

        gridLayout->addWidget(lineEdit5, 1, 3, 1, 1);

        label_6 = new QLabel(MatrixDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 4, 1, 1);

        lineEdit6 = new QLineEdit(MatrixDialog);
        lineEdit6->setObjectName(QString::fromUtf8("lineEdit6"));

        gridLayout->addWidget(lineEdit6, 1, 5, 1, 1);

        btnOK = new QPushButton(MatrixDialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        gridLayout->addWidget(btnOK, 2, 1, 1, 2);

        btnCancle = new QPushButton(MatrixDialog);
        btnCancle->setObjectName(QString::fromUtf8("btnCancle"));

        gridLayout->addWidget(btnCancle, 2, 4, 1, 2);

        QWidget::setTabOrder(lineEdit, lineEdit2);
        QWidget::setTabOrder(lineEdit2, lineEdit3);
        QWidget::setTabOrder(lineEdit3, lineEdit4);
        QWidget::setTabOrder(lineEdit4, lineEdit5);
        QWidget::setTabOrder(lineEdit5, lineEdit6);

        retranslateUi(MatrixDialog);

        QMetaObject::connectSlotsByName(MatrixDialog);
    } // setupUi

    void retranslateUi(QDialog *MatrixDialog)
    {
        MatrixDialog->setWindowTitle(QApplication::translate("MatrixDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MatrixDialog", "F11", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MatrixDialog", "F12", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MatrixDialog", "F13", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MatrixDialog", "F21", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MatrixDialog", "F22", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MatrixDialog", "F23", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("MatrixDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnCancle->setText(QApplication::translate("MatrixDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MatrixDialog: public Ui_MatrixDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIXDIALOG_H
