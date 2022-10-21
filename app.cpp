#include "app.h"
#include "./ui_app.h"
#include "QString"
#include "QDebug"
#include "cipter.cpp"
#include "QMessageBox"

using namespace std;

void error(int err) {
    switch (err) {
        case 0: {
            auto msg = QMessageBox();
            msg.setWindowTitle("Error");
            msg.setText("You need used key to Vigineer cipter");
            msg.setIcon(QMessageBox::Warning);
            msg.exec();
        }

    }
}

App::App(QWidget *parent) : QMainWindow(parent), ui(new Ui::App) {
    ui->setupUi(this);
    int act;
    connect(ui->Encrypted, SIGNAL(textChanged()), this, SLOT(onTextChanged_Enc()));
    connect(ui->Selected_method, SIGNAL(activated(0)), this, SLOT(onTextChanged_Enc()));
    connect(ui->Selected_method, SIGNAL(activated(1)), this, SLOT(onTextChanged_Enc()));
    connect(ui->Selected_method, SIGNAL(activated(2)), this, SLOT(onTextChanged_Enc()));
    ui->Offset->hide();
    ui->lbl3->hide();
}

App::~App() {
    delete ui;
}

void App::onTextChanged_Enc() {
    string input = ui->Encrypted->toPlainText().toStdString();
    string key;
    switch (ui->Selected_method->currentIndex()) {
        case 0: {
            ui->key->show();
            ui->lbl2_2->show();
            ui->Offset->hide();
            ui->lbl3->hide();
            key = ui->key->text().toStdString();
            if (key.empty()) {
                error(0);
                break;
            }
            string out = vigineer(input, key);
            ui->Decrypted->setText(QString::fromUtf8(out));
            break;
        }
        case 1: {
            ui->key->hide();
            ui->lbl3->hide();
            ui->Offset->hide();
            ui->lbl2_2->hide();
            string out = atbash(input);
            ui->Decrypted->setText(QString::fromUtf8(out));
            break;
        }
        case 2: {
            ui->lbl2_2->hide();
            ui->key->hide();
            ui->lbl3->show();
            ui->Offset->show();
            int offset = ui->Offset->value();
            string out = cesar(input,offset);
            ui->Decrypted->setText(QString::fromUtf8(out));
            break;
        }
    }
}

