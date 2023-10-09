#ifndef INPUTDIALOGYIA_H
#define INPUTDIALOGYIA_H

#include <QDialog>
#include <QLineEdit>

class QLineEdit;

class InputDialogYiA: public QDialog
{
    Q_OBJECT
private:
    QLineEdit * m_ptxtFirstName;
    QLineEdit * m_ptxtLastName;
public:
    InputDialogYiA(QWidget* pwgt =0);

    QString firstName() const;
    QString lastName() const;
};

#endif // INPUTDIALOGYIA_H
