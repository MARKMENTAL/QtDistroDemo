#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

void MainWindow::defaultsetup(){
    ui->lbl1->setGeometry(260, 290, 111, 111);
    QString url = R"(tux.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
    ui->lbl0->setStyleSheet("QLabel {color : black;}");
    ui->lbl0->setText("Welcome to the Qt Distro Demo!");
    ui->lbldistroinf->clear();
    ui->cmb0->clear();
    ui->cmb0->addItem("Ubuntu");
    ui->cmb0->addItem("Ubuntu-MATE");
    ui->cmb0->addItem("Fedora");
    ui->cmb0->addItem("Debian");
    ui->cmb0->addItem("Arch");
}

void MainWindow::eventhandling(){
    connect(ui->btn0, SIGNAL(clicked()),this,SLOT(onClicked()));
    connect(ui->btnabt, SIGNAL(triggered()),this, SLOT(abtClicked()));
    connect(ui->btnreset, SIGNAL(triggered()),this, SLOT(resetClicked()));
}

void MainWindow::onClicked(){
    ui->lbl1->setGeometry(40, 10, 111, 111);
    getOSinfo();
}

void MainWindow::getOSinfo(){
    if (ui->cmb0->currentText() =="Ubuntu"){choseubuntu();}
    if (ui->cmb0->currentText() =="Ubuntu-MATE"){choosemate();}
    if (ui->cmb0->currentText() =="Fedora"){chosefedora();}
    if (ui->cmb0->currentText() =="Debian"){chosedebian();}
    if (ui->cmb0->currentText() =="Arch"){chosearch();}
}

void MainWindow::choseubuntu(){
    ui->lbldistroinf->setText("Ubuntu is a Debian-based distribution of Linux known for it's relative ease of use \nThis is a good distro for servers, gaming, developers and office use\n"
    "Package Manager: APT\nPackage Manager Software Installation Example: 'sudo apt-get install firefox'");
    ui->lbl0->setStyleSheet("QLabel {color : #dd4814;}");
    ui->lbl0->setText("Ubuntu");
    QString url = R"(tuxubuntu.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
}

void MainWindow::choosemate(){
    ui->lbldistroinf->setText("Ubuntu-MATE is a Debian-based distribution of Linux which uses a customized \nVersion of the MATE desktop environment, which is lightweight and highly customizeable\n"
    "Package Manager: APT\nPackage Manager Software Installation Example: 'sudo apt-get install firefox'");
    ui->lbl0->setStyleSheet("QLabel {color : #dd4814;}");
    ui->lbl0->setText("Ubuntu-MATE");
    QString url = R"(tuxubuntumate.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap();
}

void MainWindow::chosedebian(){
    ui->lbldistroinf->setText("Debian is a distribution of Linux known for it's stable branch\nThis is a good distro for servers and office use\n"
    "Package Manager: APT\nPackage Manager Software Installation Example: 'sudo apt-get install firefox'");
    ui->lbl0->setStyleSheet("QLabel {color : #d70a53;}");
    ui->lbl0->setText("Debian");
    QString url = R"(tuxdebian.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
}

void MainWindow::chosefedora(){
    ui->lbldistroinf->setText("Fedora is a distribution of Linux known for it's cutting edge features and being the testing ground for Red Hat Linux\n"
    "This is a good distro for developers, gaming and industry use\nPackage Manager: DNF\nPackage Manager Software Installation Example: 'sudo dnf install firefox'");
    ui->lbl0->setStyleSheet("QLabel {color : #0b57a4;}");
    ui->lbl0->setText("Fedora");
    QString url = R"(tuxfedora.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
}

void MainWindow::chosearch(){
    ui->lbldistroinf->setText("Arch Linux is a distribution of Linux known for it's cutting edge features and minimal installation, this is a good distro for Linux experts"
    " who want to customize their OS to the core\nPackage Manager: Pacman \nPackage Manager Software Installation Example: 'sudo pacman -S firefox'");
    ui->lbl0->setStyleSheet("QLabel {color : #1793d1;}");
    ui->lbl0->setText("Arch Linux");
    QString url = R"(tuxarch.png)";
    QPixmap img(url);
    ui->lbl1->setPixmap(img);
}

void MainWindow::abtClicked(){
    QMessageBox msgbox;
    msgbox.setTextFormat(Qt::RichText);
    msgbox.setText("<center><h2>Qt Distro Demo: Version 1<br>A tool for finding basic info about Linux distros</h2>"
    "<h3>Released under GPLV3<br><a href='https://www.gnu.org/licenses/gpl-3.0.en.html' alt='gpl3link'><img src='gpl3.png' alt='GPLV3 Logo' width='84' height='42' ></a></h3>Tux and various distributions are not my intellectual properties, I am just using the images to represent Linux<br>"
    "<a href='http://github.com/MARKMENTAL/'>Click to visit my Github</a></center>");
    msgbox.exec();
}

void MainWindow::resetClicked(){defaultsetup();}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //pseudo main
    ui->setupUi(this);
    defaultsetup();
    eventhandling();
}

//~MainWindow() executes on close
MainWindow::~MainWindow()
{
    delete ui;
}
