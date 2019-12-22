#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "quadratic_equation.h"

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

void MainWindow::on_ShowResultButton_clicked()
{
    QString a,b,c=0;
    quadratic_equation example;
    ui->resultArea->setText(example.decision(ui->FieldForA->text(),ui->FieldForA->text(),ui->FieldForA->text()));
}
