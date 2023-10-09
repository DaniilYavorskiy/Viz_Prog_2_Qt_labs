#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void settings_OpenSlot(QMenu* pmnuFile);
    void settings_SaveSlot(QMenu* pmnuFile);
    void settings_ClearSlot(QMenu* pmnuFile);

    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void slotOpen();
    void slotSave();
    void slotClear();
    void About_Lab1();
};

#endif // MAINWINDOW_H


