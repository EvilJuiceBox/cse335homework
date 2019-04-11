/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <myfontcombobox.h>
#include <myhorizontalslider.h>
#include <myradiobutton.h>
#include "alexlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    MyRadioButton *radioButtonArial;
    MyRadioButton *radioButtonSans;
    AlexLineEdit *lineEdit;
    QLabel *label;
    MyRadioButton *radioButtonRoman;
    QLabel *labelfox;
    QLabel *label_3;
    MyFontComboBox *comboBox;
    QLabel *label_4;
    MyHorizontalSlider *horizontalSlider;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(911, 382);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButtonArial = new MyRadioButton(centralWidget);
        radioButtonArial->setObjectName(QStringLiteral("radioButtonArial"));

        gridLayout->addWidget(radioButtonArial, 3, 1, 1, 2);

        radioButtonSans = new MyRadioButton(centralWidget);
        radioButtonSans->setObjectName(QStringLiteral("radioButtonSans"));

        gridLayout->addWidget(radioButtonSans, 3, 4, 1, 1);

        lineEdit = new AlexLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 2, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        radioButtonRoman = new MyRadioButton(centralWidget);
        radioButtonRoman->setObjectName(QStringLiteral("radioButtonRoman"));

        gridLayout->addWidget(radioButtonRoman, 3, 3, 1, 1);

        labelfox = new QLabel(centralWidget);
        labelfox->setObjectName(QStringLiteral("labelfox"));

        gridLayout->addWidget(labelfox, 0, 0, 1, 5);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        comboBox = new MyFontComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 2, 2, 1, 2);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        horizontalSlider = new MyHorizontalSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 4, 2, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 911, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        radioButtonArial->setText(QApplication::translate("MainWindow", "Arial", nullptr));
        radioButtonSans->setText(QApplication::translate("MainWindow", "Comic Sans", nullptr));
        label->setText(QApplication::translate("MainWindow", "Font Size Type", nullptr));
        radioButtonRoman->setText(QApplication::translate("MainWindow", "Times New Roman", nullptr));
        labelfox->setText(QApplication::translate("MainWindow", "The quick brown fox likes CSE 335.", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Family", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "small", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "medium", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "big", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "Font Size", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Font Size Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
