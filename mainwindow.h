#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    double xBeg, xEnd, h, X;
    int N;
    QVector<double> x,y;

    QVector<double> sX, sY;
    double a, b, xBegin, xEnding, hs, Xs, n, sN;


};
#endif // MAINWINDOW_H
