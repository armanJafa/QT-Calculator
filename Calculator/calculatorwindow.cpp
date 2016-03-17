#include "calculatorwindow.h"
#include "ui_calculatorwindow.h"

CalculatorWindow::CalculatorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorWindow)
{
    ui->setupUi(this);

    ui->CalculatorTextBox->setReadOnly(true);
}

CalculatorWindow::~CalculatorWindow()
{
    delete ui;
}

void CalculatorWindow::on_zeroButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("0");
}

void CalculatorWindow::on_oneButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("1");
}

void CalculatorWindow::on_twoButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("2");
}

void CalculatorWindow::on_threeButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("3");
}

void CalculatorWindow::on_fourButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("4");
}

void CalculatorWindow::on_fiveButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("5");
}

void CalculatorWindow::on_sixButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("6");
}

void CalculatorWindow::on_sevenButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("7");
}

void CalculatorWindow::on_eightButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("8");
}

void CalculatorWindow::on_nineButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText("9");
}

void CalculatorWindow::on_plusButton_clicked()
{
    QString operandCheck = ui->CalculatorTextBox->toPlainText();
    ui->CalculatorTextBox->insertPlainText(" + ");
}

void CalculatorWindow::on_minusButton_clicked()
{
    ui->CalculatorTextBox->insertPlainText(" - ");
}

void CalculatorWindow::on_equalButton_clicked()
{
    QString text = ui->CalculatorTextBox->toPlainText();
    QStringList operands = text.split("+");

    qDebug() << operands << endl;
}
