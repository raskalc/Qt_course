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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App
{
public:
    QWidget *MainWigdet;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_1;
    QLabel *lbl1;
    QSpacerItem *horizontalSpacer;
    QLabel *lbl2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *Encrypted;
    QTextEdit *Decrypted;
    QVBoxLayout *verticalLayout_3;
    QComboBox *Selected_method;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Import_btn;
    QPushButton *Save_btn;
    QSpacerItem *verticalSpacer;
    QLabel *lbl3;
    QSpinBox *Offset;
    QSpacerItem *verticalSpacer_3;
    QPushButton *About_btn;
    QLabel *lbl2_2;
    QLineEdit *key;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName("App");
        App->resize(829, 633);
        MainWigdet = new QWidget(App);
        MainWigdet->setObjectName("MainWigdet");
        verticalLayout_5 = new QVBoxLayout(MainWigdet);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        lbl1 = new QLabel(MainWigdet);
        lbl1->setObjectName("lbl1");
        QFont font;
        font.setPointSize(11);
        lbl1->setFont(font);

        horizontalLayout_1->addWidget(lbl1);

        horizontalSpacer = new QSpacerItem(300, 15, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer);

        lbl2 = new QLabel(MainWigdet);
        lbl2->setObjectName("lbl2");
        lbl2->setFont(font);

        horizontalLayout_1->addWidget(lbl2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Encrypted = new QTextEdit(MainWigdet);
        Encrypted->setObjectName("Encrypted");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Encrypted->sizePolicy().hasHeightForWidth());
        Encrypted->setSizePolicy(sizePolicy);
        Encrypted->setLineWidth(0);

        horizontalLayout_3->addWidget(Encrypted);

        Decrypted = new QTextEdit(MainWigdet);
        Decrypted->setObjectName("Decrypted");
        sizePolicy.setHeightForWidth(Decrypted->sizePolicy().hasHeightForWidth());
        Decrypted->setSizePolicy(sizePolicy);
        Decrypted->setFrameShape(QFrame::StyledPanel);
        Decrypted->setFrameShadow(QFrame::Sunken);
        Decrypted->setLineWidth(0);

        horizontalLayout_3->addWidget(Decrypted);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        Selected_method = new QComboBox(MainWigdet);
        Selected_method->addItem(QString());
        Selected_method->addItem(QString());
        Selected_method->addItem(QString());
        Selected_method->setObjectName("Selected_method");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Selected_method->sizePolicy().hasHeightForWidth());
        Selected_method->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(Selected_method);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        Import_btn = new QPushButton(MainWigdet);
        Import_btn->setObjectName("Import_btn");

        verticalLayout_3->addWidget(Import_btn);

        Save_btn = new QPushButton(MainWigdet);
        Save_btn->setObjectName("Save_btn");

        verticalLayout_3->addWidget(Save_btn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        lbl3 = new QLabel(MainWigdet);
        lbl3->setObjectName("lbl3");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbl3->sizePolicy().hasHeightForWidth());
        lbl3->setSizePolicy(sizePolicy2);
        lbl3->setFont(font);

        verticalLayout_3->addWidget(lbl3);

        Offset = new QSpinBox(MainWigdet);
        Offset->setObjectName("Offset");

        verticalLayout_3->addWidget(Offset);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        About_btn = new QPushButton(MainWigdet);
        About_btn->setObjectName("About_btn");

        verticalLayout_3->addWidget(About_btn);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_3);

        lbl2_2 = new QLabel(MainWigdet);
        lbl2_2->setObjectName("lbl2_2");
        lbl2_2->setFont(font);

        verticalLayout_5->addWidget(lbl2_2);

        key = new QLineEdit(MainWigdet);
        key->setObjectName("key");

        verticalLayout_5->addWidget(key);

        App->setCentralWidget(MainWigdet);
        menubar = new QMenuBar(App);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 829, 21));
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
        Selected_method->setItemText(0, QCoreApplication::translate("App", "Vigenere", nullptr));
        Selected_method->setItemText(1, QCoreApplication::translate("App", "Atbash", nullptr));
        Selected_method->setItemText(2, QCoreApplication::translate("App", "Cesar", nullptr));

        Import_btn->setText(QCoreApplication::translate("App", "Import file", nullptr));
        Save_btn->setText(QCoreApplication::translate("App", "Save to file", nullptr));
        lbl3->setText(QCoreApplication::translate("App", "Offset", nullptr));
        About_btn->setText(QCoreApplication::translate("App", "About", nullptr));
        lbl2_2->setText(QCoreApplication::translate("App", "Key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
