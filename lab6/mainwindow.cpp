#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myform = new YavoAmo(); // создаем форму
    //connect(ui->Load, SIGNAL(clicked()), myform, SLOT(show()));
    connect(ui->Ready, SIGNAL(clicked()), this, SLOT(onButtonSend()));
    connect(this, SIGNAL(sendData(QString)), myform, SLOT(recieveData(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Load_clicked()
{
    QString filename = QFileDialog::getOpenFileName(nullptr, "Выберите изображение", QDir::currentPath(), "*.png *.jpg *.jpeg");
    ui->photoPath->setText(filename);
    QImage image1(filename);
    ui->photo->setPixmap(QPixmap::fromImage(image1));
}

void MainWindow::on_Ready_clicked()
{
    if (ui->FIO->text() == "" or ui->photoPath->text() == "" or ui->VYZ->text() == "" or ui->DOL->text() == ""
            or (ui->radioButton_M->isChecked()==false && ui->radioButton_F->isChecked()==false)
            )
    {
        QMessageBox::information(this, "Ошибка!", "Заполните все поля, прежде чем продолжить");
        return;
    }
    myform->show();
    QString st = ui->photoPath->text() + "*" +
            ui->FIO->text() + "\n" +
            ui->DOL->text() + "\n" +
            ui->ROJ->text() + "\n" +
            ui->VYZ->text();
    if (ui->radioButton_M->isChecked() == true) st+= "\nПол мужской";
            else st+= "\nПол женский";
    emit sendData(st);
}

