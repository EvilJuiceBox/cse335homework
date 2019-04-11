#include <QtGui>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_MainWindow.h"
#include "alexlineedit.h"
#include "myfontcombobox.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(10);
    ui->horizontalSlider->setMaximum(40);
    ui->horizontalSlider->setSingleStep(1);
    connect(ui->lineEdit,SIGNAL(editingFinished()),ui->lineEdit,SLOT(myEditingFinished()));
    connect(ui->lineEdit,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),ui->comboBox,SLOT(myCurrentFontChanged(int)));
    connect(ui->comboBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->radioButtonArial,SIGNAL(clicked()),ui->radioButtonArial,SLOT(myStateChanged()));
    connect(ui->radioButtonArial,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->radioButtonRoman,SIGNAL(clicked()),ui->radioButtonRoman,SLOT(myStateChanged()));
    connect(ui->radioButtonRoman,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->radioButtonSans,SIGNAL(clicked()),ui->radioButtonSans,SLOT(myStateChanged()));
    connect(ui->radioButtonSans,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->horizontalSlider,SLOT(myCurrentPositionChanged(int)));
    connect(ui->horizontalSlider,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));
}

void MainWindow::actByYourChange(QObject* senderObj){
    if(senderObj==ui->lineEdit){
        QFont font=ui->labelfox->font();
        font.setPointSize(getFont(ui->lineEdit->text()));
        ui->labelfox->setFont(font);
        ui->horizontalSlider->setSliderPosition(getFont(ui->lineEdit->text()));

        int index = ui->comboBox->findText(ui->lineEdit->text());
        if(index != -1) //if the index exist in combo box
        {
            ui->comboBox->setCurrentIndex(index);
        }
    }
    else if(senderObj==ui->comboBox){
        QString size=ui->comboBox->itemText(ui->comboBox->currentIndex());
        QFont font=ui->labelfox->font();;
        font.setPointSize(getFont(size));
        ui->labelfox->setFont(font);
        ui->lineEdit->setText(size);
        ui->horizontalSlider->setSliderPosition(getFont(ui->lineEdit->text()));
    }
    else if(senderObj==ui->radioButtonArial){
        QString size=ui->comboBox->itemText(ui->comboBox->currentIndex());
        QFont newFont("Arial", getFont(size));
        ui->labelfox->setFont(newFont);
    }
    else if(senderObj==ui->radioButtonRoman){
        QString size=ui->comboBox->itemText(ui->comboBox->currentIndex());
        QFont newFont("Times New Roman", getFont(size));
        ui->labelfox->setFont(newFont);
    }
    else if(senderObj==ui->radioButtonSans){
        QString size=ui->comboBox->itemText(ui->comboBox->currentIndex());
        QFont newFont("Comic Sans MS", getFont(size));
        ui->labelfox->setFont(newFont);
    }
    else if(senderObj==ui->horizontalSlider){
        QFont font=ui->labelfox->font();
        int position=ui->horizontalSlider->value();
        font.setPointSize(position);
        ui->labelfox->setFont(font);
    }
}

int MainWindow::getFont(QString size){

    if(size=="small")
        return 10;
    if(size=="medium")
        return 20;
    if(size=="big")
        return 40;
    return 8;
}

MainWindow::~MainWindow()
{
    delete ui;
}
