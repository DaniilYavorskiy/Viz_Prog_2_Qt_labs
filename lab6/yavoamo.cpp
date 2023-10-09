#include "yavoamo.h"
#include "ui_yavoamo.h"
#include <QFileDialog>
#include <QTextStream>
#include <QTextEdit>
#include <QMessageBox>

YavoAmo::YavoAmo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::YavoAmo)
{
    ui->setupUi(this);
}


YavoAmo::~YavoAmo()
{
    delete ui;
}

void YavoAmo::recieveData(QString str)
{
    QStringList lst = str.split("*");
    ui->textEdit->setText(lst.at(1) + "\n" + lst.at(0));
    if (lst.size() > 1)
    {
        QImage image1(lst.at(0));
        ui->label->setPixmap(QPixmap::fromImage(image1));
    }
}

void YavoAmo::on_btnBox_clicked(QAbstractButton *button)
{
    if (button->text() == "Reset")
    {
        ui->textEdit->setText("");
        ui->label->clear();
    }
    else if (button->text() == "Save")
    {
        QString str = QFileDialog::getSaveFileName();
              if (str.isEmpty()) {
                  QMessageBox::warning(this, "Ошибка!", "Файл не сохранен!");
                  return;
              }
              QFile file(str);
              if (file.open(QIODevice::WriteOnly))
              {
                  QTextStream(&file) << ui->textEdit->toPlainText();
                  file.close();
              }
          }
    else if (button->text() == "Open")
    {
        QString str = QFileDialog::getOpenFileName();
               if (str.isEmpty()) {
                   QMessageBox::warning(this, "Ошибка!", "Файл не открыт!");
                   return;
               }
               QFile file(str);
               if (file.open(QIODevice::ReadOnly))
               {
                   QTextStream stream(&file);
                   ui->textEdit->setPlainText(stream.readAll());
                   QStringList inf = ui->textEdit->toPlainText().split("\n");
                   QImage image2(inf.at(5));
                   ui->label->setPixmap(QPixmap::fromImage(image2));
                   file.close();
               }
           }
}
