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
    ~MainWindow();
    void defaultsetup();
    void getOSinfo();
    void choseubuntu();
    void chosefedora();
    void chosedebian();
    void chosearch();
    void eventhandling();

public slots:
     void onClicked();
     void abtClicked();
     void resetClicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
