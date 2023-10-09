/********************************************************************************
** Form generated from reading UI file 'yavoamo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YAVOAMO_H
#define UI_YAVOAMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YavoAmo
{
public:
    QLabel *label;
    QDialogButtonBox *btnBox;
    QTextEdit *textEdit;

    void setupUi(QWidget *YavoAmo)
    {
        if (YavoAmo->objectName().isEmpty())
            YavoAmo->setObjectName(QStringLiteral("YavoAmo"));
        YavoAmo->resize(640, 533);
        label = new QLabel(YavoAmo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 130, 200, 200));
        label->setMinimumSize(QSize(200, 0));
        label->setMaximumSize(QSize(200, 200));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        btnBox = new QDialogButtonBox(YavoAmo);
        btnBox->setObjectName(QStringLiteral("btnBox"));
        btnBox->setGeometry(QRect(60, 470, 481, 28));
        btnBox->setStyleSheet(QStringLiteral("background:rgb(224, 226, 255)"));
        btnBox->setStandardButtons(QDialogButtonBox::Open|QDialogButtonBox::Reset|QDialogButtonBox::Save);
        textEdit = new QTextEdit(YavoAmo);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(240, 20, 391, 431));

        retranslateUi(YavoAmo);

        QMetaObject::connectSlotsByName(YavoAmo);
    } // setupUi

    void retranslateUi(QWidget *YavoAmo)
    {
        YavoAmo->setWindowTitle(QApplication::translate("YavoAmo", "Form", nullptr));
        label->setText(QApplication::translate("YavoAmo", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YavoAmo: public Ui_YavoAmo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YAVOAMO_H
