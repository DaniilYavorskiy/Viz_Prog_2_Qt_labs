/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_auth
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;

    void setupUi(QDialog *auth)
    {
        if (auth->objectName().isEmpty())
            auth->setObjectName(QStringLiteral("auth"));
        auth->resize(400, 300);
        buttonBox = new QDialogButtonBox(auth);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(auth);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 171, 20));
        textEdit = new QTextEdit(auth);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(230, 90, 141, 81));
        label_2 = new QLabel(auth);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 181, 151));
        label_2->setPixmap(QPixmap(QString::fromUtf8("D:/\320\234\320\276\321\217 \321\203\321\207\320\265\320\261\320\260/\320\241\320\270\320\261\320\223\320\243\320\242\320\230/\320\242\320\240\320\225\320\242\320\230\320\231 \320\232\320\243\320\240\320\241/V \320\241\320\225\320\234\320\225\320\241\320\242\320\240/\320\222\320\270\320\267 \320\277\321\200\320\276\320\263 \320\270 \321\207\320\265\320\273-\320\274\320\260\321\210 \320\262\320\267\320\260\320\270\320\274\320\276\320\264 (\321\207\320\260\321\201\321\202\321\214 2)/labs/1.jpg")));

        retranslateUi(auth);
        QObject::connect(buttonBox, SIGNAL(accepted()), auth, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), auth, SLOT(reject()));

        QMetaObject::connectSlotsByName(auth);
    } // setupUi

    void retranslateUi(QDialog *auth)
    {
        auth->setWindowTitle(QApplication::translate("auth", "Dialog", nullptr));
        label->setText(QApplication::translate("auth", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205", nullptr));
        textEdit->setHtml(QApplication::translate("auth", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\240\320\276\321\211\320\270\320\275 \320\230.\320\224.</p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class auth: public Ui_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H
