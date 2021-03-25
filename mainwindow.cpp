#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
#include "inventory.h"

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


void MainWindow::on_actionExit_triggered()
{

}



void MainWindow::on_empsaveadd_clicked()
{
    QString daystr;

    if       (    ui->checkMon->isChecked() )
        daystr += "monday";
    if       (    ui->checkTuesday->isChecked() )
        daystr += "tuesday";
    if       (    ui->checkWensday->isChecked() )
        daystr += "wensday";
    if       (    ui->checkThursday->isChecked() )
        daystr += "thursday";
    if       (    ui->checkFriday->isChecked() )
        daystr += "friday";
    if       (    ui->checkSaturday->isChecked() )
        daystr += "saturday";
    if       (    ui->checkSunday->isChecked() )
        daystr += "sunday";
    if       (    ui->checkAll->isChecked() )
        daystr += "alldays";
}
