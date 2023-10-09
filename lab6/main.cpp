#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("C:\\Users\\79133\\QtProjects\\StyleForLab6.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    MainWindow w;
    w.show();
    return a.exec();
}
