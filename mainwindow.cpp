#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QtWidgets/qspinbox.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int luku = ui->spinBox->value();
    int luku2 = ui->spinBox_2->value();
    int vastaus;
    if(ui->comboBox->currentText() == "+"){
        vastaus = luku + luku2;
    }else if(ui->comboBox->currentText() == "-"){
        vastaus = luku - luku2;
    }else if(ui->comboBox->currentText() == "*"){
        vastaus = luku * luku2;
    }else if(ui->comboBox->currentText() == "/"){
        vastaus = luku / luku2;
    }else if(ui->comboBox->currentText() == "%"){
        vastaus = luku % luku2;
    }

    ui->label->setText("Vastaus: " + QString::number(vastaus));
}


