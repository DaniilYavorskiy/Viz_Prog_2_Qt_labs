#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
#include "yavoamo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    YavoAmo *myform;

signals:
    void sendData(QString str);

private slots:
    void on_Ready_clicked();
    void on_Load_clicked();
};

#endif // MAINWINDOW_H
