/********************************************************************************
** Form generated from reading UI file 'calculatorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORWINDOW_H
#define UI_CALCULATORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorWindow
{
public:
    QWidget *centralWidget;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *plusButton;
    QPushButton *minusButton;
    QPushButton *equalButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *CalculatorTextBox;
    QGridLayout *gridLayout;
    QPushButton *zeroButton;
    QPushButton *threeButton;
    QPushButton *twoButton;
    QPushButton *oneButton;
    QPushButton *sevenButton;
    QPushButton *nineButton;
    QPushButton *eightButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorWindow)
    {
        if (CalculatorWindow->objectName().isEmpty())
            CalculatorWindow->setObjectName(QStringLiteral("CalculatorWindow"));
        CalculatorWindow->resize(544, 428);
        centralWidget = new QWidget(CalculatorWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 30, 431, 312));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plusButton = new QPushButton(widget);
        plusButton->setObjectName(QStringLiteral("plusButton"));

        verticalLayout->addWidget(plusButton);

        minusButton = new QPushButton(widget);
        minusButton->setObjectName(QStringLiteral("minusButton"));

        verticalLayout->addWidget(minusButton);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName(QStringLiteral("equalButton"));

        verticalLayout->addWidget(equalButton);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        CalculatorTextBox = new QTextEdit(widget1);
        CalculatorTextBox->setObjectName(QStringLiteral("CalculatorTextBox"));

        verticalLayout_2->addWidget(CalculatorTextBox);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        zeroButton = new QPushButton(widget1);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));

        gridLayout->addWidget(zeroButton, 3, 1, 1, 1);

        threeButton = new QPushButton(widget1);
        threeButton->setObjectName(QStringLiteral("threeButton"));

        gridLayout->addWidget(threeButton, 2, 2, 1, 1);

        twoButton = new QPushButton(widget1);
        twoButton->setObjectName(QStringLiteral("twoButton"));

        gridLayout->addWidget(twoButton, 2, 1, 1, 1);

        oneButton = new QPushButton(widget1);
        oneButton->setObjectName(QStringLiteral("oneButton"));

        gridLayout->addWidget(oneButton, 2, 0, 1, 1);

        sevenButton = new QPushButton(widget1);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));

        gridLayout->addWidget(sevenButton, 0, 0, 1, 1);

        nineButton = new QPushButton(widget1);
        nineButton->setObjectName(QStringLiteral("nineButton"));

        gridLayout->addWidget(nineButton, 0, 2, 1, 1);

        eightButton = new QPushButton(widget1);
        eightButton->setObjectName(QStringLiteral("eightButton"));

        gridLayout->addWidget(eightButton, 0, 1, 1, 1);

        fourButton = new QPushButton(widget1);
        fourButton->setObjectName(QStringLiteral("fourButton"));

        gridLayout->addWidget(fourButton, 1, 0, 1, 1);

        fiveButton = new QPushButton(widget1);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));

        gridLayout->addWidget(fiveButton, 1, 1, 1, 1);

        sixButton = new QPushButton(widget1);
        sixButton->setObjectName(QStringLiteral("sixButton"));

        gridLayout->addWidget(sixButton, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        splitter->addWidget(widget1);
        CalculatorWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 544, 21));
        CalculatorWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatorWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatorWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatorWindow->setStatusBar(statusBar);

        retranslateUi(CalculatorWindow);

        QMetaObject::connectSlotsByName(CalculatorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorWindow)
    {
        CalculatorWindow->setWindowTitle(QApplication::translate("CalculatorWindow", "CalculatorWindow", 0));
        plusButton->setText(QApplication::translate("CalculatorWindow", "+", 0));
        minusButton->setText(QApplication::translate("CalculatorWindow", "-", 0));
        equalButton->setText(QApplication::translate("CalculatorWindow", "=", 0));
        zeroButton->setText(QApplication::translate("CalculatorWindow", "0", 0));
        threeButton->setText(QApplication::translate("CalculatorWindow", "3", 0));
        twoButton->setText(QApplication::translate("CalculatorWindow", "2", 0));
        oneButton->setText(QApplication::translate("CalculatorWindow", "1", 0));
        sevenButton->setText(QApplication::translate("CalculatorWindow", "7", 0));
        nineButton->setText(QApplication::translate("CalculatorWindow", "9", 0));
        eightButton->setText(QApplication::translate("CalculatorWindow", "8", 0));
        fourButton->setText(QApplication::translate("CalculatorWindow", "4", 0));
        fiveButton->setText(QApplication::translate("CalculatorWindow", "5", 0));
        sixButton->setText(QApplication::translate("CalculatorWindow", "6", 0));
    } // retranslateUi

};

namespace Ui {
    class CalculatorWindow: public Ui_CalculatorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORWINDOW_H
