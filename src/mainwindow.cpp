#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

void MainWindow::defaultsetup(){
    QString url = R"(tux.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
    ui->lbl0->setStyleSheet("QLabel {color : black;}");
    ui->lbl0->setText("Welcome to the Qt Distro Demo!");
    ui->cmb0->clear();
    ui->cmb0->addItem("Ubuntu");
    ui->cmb0->addItem("Fedora");
    ui->cmb0->addItem("Debian");
    ui->cmb0->addItem("Arch");
    ui->cmb0->addItem("Reset Tux");
}

void MainWindow::onClicked(){
    getOSinfo();
}

void MainWindow::getOSinfo(){
    if (ui->cmb0->currentText() =="Ubuntu"){choseubuntu();}
    if (ui->cmb0->currentText() =="Fedora"){chosefedora();}
    if (ui->cmb0->currentText() =="Debian"){chosedebian();}
    if (ui->cmb0->currentText() =="Arch"){chosearch();}

    if (ui->cmb0->currentText() =="Reset Tux"){
        defaultsetup();
        QMessageBox msgbox;
        msgbox.setText("Reset Successful");
        msgbox.exec();
    }
}

void MainWindow::choseubuntu(){
    QMessageBox msgbox;
    msgbox.setText("Ubuntu is a Debian-based distribution of Linux known for it's relative ease of use \nThis is a good distro for servers, gaming, developers and office use\n"
    "Package Manager: APT\nPackage Manager Usage Example: 'sudo apt-get install firefox'");
    msgbox.exec();
    ui->lbl0->setStyleSheet("QLabel {color : #dd4814;}");
    ui->lbl0->setText("Ubuntu");
    QString url = R"(tuxubuntu.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
}

void MainWindow::chosedebian(){
    QMessageBox msgbox;
    msgbox.setText("Debian is a distribution of Linux known for it's stable branch\nThis is a good distro for servers and office use\n"
    "Package Manager: APT\nPackage Manager Usage Example: 'sudo apt-get install firefox'");
    msgbox.exec();
    ui->lbl0->setStyleSheet("QLabel {color : #d70a53;}");
    ui->lbl0->setText("Debian");
    QString url = R"(tuxdebian.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
}

void MainWindow::chosefedora(){
    QMessageBox msgbox;
    msgbox.setText("Fedora is a distribution of Linux known for it's cutting edge features and being the testing ground for Red Hat Linux\n"
    "This is a good distro for developers, gaming and industry use\nPackage Manager: DNF\nPackage Manager Usage Example: 'sudo dnf install firefox'");
    msgbox.exec();
    ui->lbl0->setStyleSheet("QLabel {color : #0b57a4;}");
    ui->lbl0->setText("Fedora");
    QString url = R"(tuxfedora.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
}

void MainWindow::chosearch(){
    QMessageBox msgbox;
    msgbox.setText("Arch Linux is a distribution of Linux known for it's cutting edge features and minimal installation, this is a good distro for Linux experts\n"
    "who want to customize their OS to the core\nPackage Manager: Pacman \nPackage Manager Usage Example: 'sudo pacman -S firefox'");
    msgbox.exec();
    ui->lbl0->setStyleSheet("QLabel {color : #1793d1;}");
    ui->lbl0->setText("Arch Linux");
    QString url = R"(tuxarch.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
}

void MainWindow::abtClicked(){
    QMessageBox msgbox;
    msgbox.setTextFormat(Qt::RichText);
    msgbox.setText("Qt Distro Demo: Version 0<br>A tool for finding basic info about Linux distros<br>"
    "Released under GPLV3<br>Tux and various distributions are not my intellectual properties, I am just using the images to represent Linux<br>"
    "<a href='http://github.com/MARKMENTAL/'>Click to visit my Github</a>");
    msgbox.exec();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //pseudo main
    ui->setupUi(this);
    defaultsetup();
    connect(ui->btn0, SIGNAL(clicked()),this,SLOT(onClicked()));
    connect(ui->btnabt, SIGNAL(triggered()),this, SLOT(abtClicked()));
}

//~MainWindow() executes on close
MainWindow::~MainWindow()
{
    delete ui;
}
