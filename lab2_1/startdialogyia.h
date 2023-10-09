#ifndef STARTDIALOGYIA_H
#define STARTDIALOGYIA_H


#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialogyia.h"


class StartDialog: public QPushButton {
    Q_OBJECT

public:
    StartDialog(QWidget *pwgt = 0) : QPushButton("Нажми", pwgt)
    {
        connect(this, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    }

public slots:
    void slotButtonClicked(){
        InputDialogYiA* pInputDialog = new InputDialogYiA;
        if (pInputDialog->exec()== QDialog::Accepted){
            QMessageBox::information(0,
                                     "Ваша информация: ",
                                     "Имя: "
                                     + pInputDialog->firstName()
                                     + "\nФамилия: "
                                     +pInputDialog->lastName()
                                     );

        }
        delete pInputDialog;
    }
};
#endif // STARTDIALOGYIA_H
