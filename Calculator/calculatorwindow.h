#ifndef CALCULATORWINDOW_H
#define CALCULATORWINDOW_H

#include <QDebug>
#include <QMainWindow>

namespace Ui {
class CalculatorWindow;
}

class CalculatorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorWindow(QWidget *parent = 0);
    ~CalculatorWindow();

private slots:
    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_zeroButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_equalButton_clicked();

private:
    Ui::CalculatorWindow *ui;
};

#endif // CALCULATORWINDOW_H
