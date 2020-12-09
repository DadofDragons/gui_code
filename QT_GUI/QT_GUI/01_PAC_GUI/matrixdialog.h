#ifndef MATRIXDIALOG_H
#define MATRIXDIALOG_H

#include <QDialog>
#include <QString>
#include <vector>

namespace Ui {
class MatrixDialog;
}

class MatrixDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MatrixDialog(QWidget *parent = 0);
    ~MatrixDialog();

private:
    Ui::MatrixDialog *ui;

public slots:
    void readText();

public:
    void transData(std::vector<double> &vec);

public:
    QString f11;
    QString f12;
    QString f13;
    QString f21;
    QString f22;
    QString f23;
};

#endif // MATRIXDIALOG_H
