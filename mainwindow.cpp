#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    h = 0.01;
//    xBeg = -6;
//    xEnd = 6 + h;
//    ui->widget->xAxis->setRange(-7, 7);
//    ui->widget->yAxis->setRange(-2, 11);
//    N = (xEnd - xBeg)/h + 2;
//    for(X = xBeg; X <= xEnd; X+=h){
//      x.push_back(X);
//      y.push_back(X*X);
//    }
//    ui->widget->addGraph();
//    ui->widget->graph(0)->addData(x,y);
//    ui->widget->replot();


//    ui->widget->xAxis->setRange(-7, 7);
//    ui->widget->yAxis->setRange(-2, 11);

//    ui->widget->addGraph();
//    ui->widget->graph(0)->addData(sX,sY);
//    ui->widget->replot();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        h = 0.01;
        xBeg = -6;
        xEnd = 6 + h;
        ui->widget->xAxis->setRange(-7, 7);
        ui->widget->yAxis->setRange(-2, 11);
        //N = (xBeg - xEnd)/h + 2;
        for(X = xBeg; X <= xEnd; X+=h){
          x.push_back(X);
          y.push_back(X*X);
        }
        ui->widget->addGraph();
        ui->widget->graph(0)->addData(x,y);
        ui->widget->replot();

    }else{
        h = 0.01;
        xBegin = -2;
        xEnding = 2 + h;
        ui->widget->xAxis->setRange(-2, 2);
        ui->widget->yAxis->setRange(-2, 2);
        a = 3;
        b = 0.5;
        //sN = pow(b, n)*cos(pow(a, n)*M_PI*Xs);
        for(Xs = xBegin; Xs <= xEnd; Xs += h){
            x.push_back(pow(b, n)*cos(pow(a, n)*M_PI*Xs));
            y.push_back(Xs);
        }
        ui->widget->addGraph();
        ui->widget->graph(0)->addData(x,y);
        ui->widget->replot();
    }


}



void MainWindow::on_radioButton_toggled(bool checked)
{

}
