/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *btnabt;
    QAction *btnreset;
    QWidget *centralwidget;
    QLabel *lbl0;
    QComboBox *cmb0;
    QPushButton *btn0;
    QLabel *lbl1;
    QLabel *lbldistroinf;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(639, 463);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        btnabt = new QAction(MainWindow);
        btnabt->setObjectName(QString::fromUtf8("btnabt"));
        btnreset = new QAction(MainWindow);
        btnreset->setObjectName(QString::fromUtf8("btnreset"));
        btnreset->setMenuRole(QAction::TextHeuristicRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lbl0 = new QLabel(centralwidget);
        lbl0->setObjectName(QString::fromUtf8("lbl0"));
        lbl0->setGeometry(QRect(180, 10, 271, 131));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        lbl0->setFont(font);
        lbl0->setScaledContents(true);
        lbl0->setAlignment(Qt::AlignCenter);
        lbl0->setWordWrap(true);
        cmb0 = new QComboBox(centralwidget);
        cmb0->setObjectName(QString::fromUtf8("cmb0"));
        cmb0->setGeometry(QRect(40, 270, 131, 34));
        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(440, 270, 151, 36));
        btn0->setAutoDefault(true);
        btn0->setFlat(false);
        lbl1 = new QLabel(centralwidget);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setGeometry(QRect(260, 290, 111, 111));
        lbl1->setScaledContents(true);
        lbl1->setAlignment(Qt::AlignCenter);
        lbldistroinf = new QLabel(centralwidget);
        lbldistroinf->setObjectName(QString::fromUtf8("lbldistroinf"));
        lbldistroinf->setGeometry(QRect(80, 130, 471, 131));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lbldistroinf->setFont(font1);
        lbldistroinf->setScaledContents(false);
        lbldistroinf->setAlignment(Qt::AlignCenter);
        lbldistroinf->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 639, 32));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp->setGeometry(QRect(404, 182, 135, 84));
        menuHelp->setAutoFillBackground(false);
        menuHelp->setTearOffEnabled(false);
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuOptions->setTearOffEnabled(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(btn0, cmb0);

        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(btnabt);
        menuOptions->addAction(btnreset);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qt Distro Demo by MARKMENTAL", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        btnabt->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
#if QT_CONFIG(shortcut)
        btnabt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        btnreset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
#if QT_CONFIG(shortcut)
        btnreset->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        lbl0->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "Get Distro Info", nullptr));
        lbl1->setText(QString());
        lbldistroinf->setText(QCoreApplication::translate("MainWindow", "This is some sample text on a label", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
