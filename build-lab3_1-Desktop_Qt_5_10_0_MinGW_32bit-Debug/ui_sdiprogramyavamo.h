/********************************************************************************
** Form generated from reading UI file 'sdiprogramyavamo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDIPROGRAMYAVAMO_H
#define UI_SDIPROGRAMYAVAMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SDIProgramYavAmo
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SDIProgramYavAmo)
    {
        if (SDIProgramYavAmo->objectName().isEmpty())
            SDIProgramYavAmo->setObjectName(QStringLiteral("SDIProgramYavAmo"));
        SDIProgramYavAmo->resize(400, 300);
        menuBar = new QMenuBar(SDIProgramYavAmo);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SDIProgramYavAmo->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SDIProgramYavAmo);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SDIProgramYavAmo->addToolBar(mainToolBar);
        centralWidget = new QWidget(SDIProgramYavAmo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SDIProgramYavAmo->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SDIProgramYavAmo);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SDIProgramYavAmo->setStatusBar(statusBar);

        retranslateUi(SDIProgramYavAmo);

        QMetaObject::connectSlotsByName(SDIProgramYavAmo);
    } // setupUi

    void retranslateUi(QMainWindow *SDIProgramYavAmo)
    {
        SDIProgramYavAmo->setWindowTitle(QApplication::translate("SDIProgramYavAmo", "SDIProgramYavAmo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SDIProgramYavAmo: public Ui_SDIProgramYavAmo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDIPROGRAMYAVAMO_H
