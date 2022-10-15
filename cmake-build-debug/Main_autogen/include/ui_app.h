/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App
{
public:
    QWidget *MainWigdet;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *Encrypted;
    QTextEdit *Decrypted;
    QLabel *lbl1;
    QLabel *lbl2;
    QPushButton *Save_btn;
    QPushButton *Select_method_btn;
    QPushButton *About_btn;
    QPushButton *Import_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName("App");
        App->resize(800, 600);
        MainWigdet = new QWidget(App);
        MainWigdet->setObjectName("MainWigdet");
        horizontalLayoutWidget = new QWidget(MainWigdet);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 30, 691, 511));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Encrypted = new QTextEdit(horizontalLayoutWidget);
        Encrypted->setObjectName("Encrypted");

        horizontalLayout_3->addWidget(Encrypted);

        Decrypted = new QTextEdit(horizontalLayoutWidget);
        Decrypted->setObjectName("Decrypted");

        horizontalLayout_3->addWidget(Decrypted);

        lbl1 = new QLabel(MainWigdet);
        lbl1->setObjectName("lbl1");
        lbl1->setGeometry(QRect(110, 10, 61, 16));
        lbl2 = new QLabel(MainWigdet);
        lbl2->setObjectName("lbl2");
        lbl2->setGeometry(QRect(480, 10, 49, 16));
        Save_btn = new QPushButton(MainWigdet);
        Save_btn->setObjectName("Save_btn");
        Save_btn->setGeometry(QRect(700, 110, 80, 24));
        Select_method_btn = new QPushButton(MainWigdet);
        Select_method_btn->setObjectName("Select_method_btn");
        Select_method_btn->setGeometry(QRect(700, 140, 80, 24));
        About_btn = new QPushButton(MainWigdet);
        About_btn->setObjectName("About_btn");
        About_btn->setGeometry(QRect(700, 170, 80, 24));
        Import_btn = new QPushButton(MainWigdet);
        Import_btn->setObjectName("Import_btn");
        Import_btn->setGeometry(QRect(700, 80, 80, 24));
        App->setCentralWidget(MainWigdet);
        menubar = new QMenuBar(App);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        App->setMenuBar(menubar);
        statusbar = new QStatusBar(App);
        statusbar->setObjectName("statusbar");
        App->setStatusBar(statusbar);

        retranslateUi(App);

        QMetaObject::connectSlotsByName(App);
    } // setupUi

    void retranslateUi(QMainWindow *App)
    {
        App->setWindowTitle(QCoreApplication::translate("App", "App", nullptr));
        lbl1->setText(QCoreApplication::translate("App", "Encrypted", nullptr));
        lbl2->setText(QCoreApplication::translate("App", "Crypted", nullptr));
        Save_btn->setText(QCoreApplication::translate("App", "Save to file", nullptr));
        Select_method_btn->setText(QCoreApplication::translate("App", "Select Method", nullptr));
        About_btn->setText(QCoreApplication::translate("App", "About", nullptr));
        Import_btn->setText(QCoreApplication::translate("App", "Import file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
