/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *line_5;
    QPushButton *Load;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *photoPath;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_6;
    QPushButton *Ready;
    QDateEdit *ROJ;
    QFrame *line_3;
    QLineEdit *DOL;
    QLineEdit *VYZ;
    QLineEdit *FIO;
    QLabel *label_4;
    QFrame *line_4;
    QLabel *label_7;
    QLabel *photo;
    QFrame *line_2;
    QWidget *widget;
    QFormLayout *formLayout;
    QRadioButton *radioButton_M;
    QRadioButton *radioButton_F;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(579, 512);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(250, 240, 301, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        Load = new QPushButton(centralWidget);
        Load->setObjectName(QStringLiteral("Load"));
        Load->setGeometry(QRect(60, 270, 93, 28));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 210, 55, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 50, 55, 16));
        photoPath = new QLineEdit(centralWidget);
        photoPath->setObjectName(QStringLiteral("photoPath"));
        photoPath->setGeometry(QRect(10, 230, 201, 21));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(350, 30, 16, 281));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 160, 101, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 30, 301, 281));
        label_6->setFrameShape(QFrame::Panel);
        Ready = new QPushButton(centralWidget);
        Ready->setObjectName(QStringLiteral("Ready"));
        Ready->setGeometry(QRect(230, 400, 93, 28));
        ROJ = new QDateEdit(centralWidget);
        ROJ->setObjectName(QStringLiteral("ROJ"));
        ROJ->setGeometry(QRect(410, 160, 91, 21));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(250, 140, 301, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        DOL = new QLineEdit(centralWidget);
        DOL->setObjectName(QStringLiteral("DOL"));
        DOL->setGeometry(QRect(370, 110, 171, 21));
        VYZ = new QLineEdit(centralWidget);
        VYZ->setObjectName(QStringLiteral("VYZ"));
        VYZ->setGeometry(QRect(370, 260, 171, 21));
        FIO = new QLineEdit(centralWidget);
        FIO->setObjectName(QStringLiteral("FIO"));
        FIO->setGeometry(QRect(370, 50, 171, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 110, 101, 20));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(250, 190, 301, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(290, 260, 51, 20));
        photo = new QLabel(centralWidget);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setGeometry(QRect(30, 30, 151, 181));
        photo->setFrameShape(QFrame::Panel);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 80, 301, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(410, 210, 101, 22));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_M = new QRadioButton(widget);
        radioButton_M->setObjectName(QStringLiteral("radioButton_M"));

        formLayout->setWidget(0, QFormLayout::LabelRole, radioButton_M);

        radioButton_F = new QRadioButton(widget);
        radioButton_F->setObjectName(QStringLiteral("radioButton_F"));

        formLayout->setWidget(0, QFormLayout::FieldRole, radioButton_F);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 579, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Load->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_6->setText(QString());
        Ready->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\222\320\243\320\227", nullptr));
        photo->setText(QApplication::translate("MainWindow", "\320\244\320\276\321\202\320\276", nullptr));
        radioButton_M->setText(QApplication::translate("MainWindow", "\320\234", nullptr));
        radioButton_F->setText(QApplication::translate("MainWindow", "\320\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
