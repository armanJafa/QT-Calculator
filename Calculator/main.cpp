#include "calculatorwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorWindow w;
    w.show();

    QString hello = "hello world";
    return a.exec();
}
