#include "startdialogyia.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartDialog StartDialogYiA;
    StartDialogYiA.show();

    return a.exec();
}
