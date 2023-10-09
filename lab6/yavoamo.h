#ifndef YAVOAMO_H
#define YAVOAMO_H

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class YavoAmo;
}

class YavoAmo : public QWidget
{
    Q_OBJECT

public:
    explicit YavoAmo(QWidget *parent = nullptr);
    ~YavoAmo();

private:
    Ui::YavoAmo *ui;

public slots:
    void recieveData(QString str);

private slots:
    void on_btnBox_clicked(QAbstractButton *button);
};

#endif // YAVOAMO_H
