#include "app.h"
#include "./ui_app.h"
#include "QString"
#include "QDebug"
#include "cipter.cpp"
#include "QMessageBox"

int mode = 0;

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
    connect(ui->Encrypted, SIGNAL(textChanged()), this, SLOT(update_text()));
    connect(ui->Selected_method, SIGNAL(currentIndexChanged(int)), this, SLOT(update_text()));
    connect(ui->Offset, SIGNAL(valueChanged(int)), this, SLOT(update_text()));
    connect(ui->switch_mode, SIGNAL(clicked()), this, SLOT(change_mode()));

    ui->Offset->hide();
    ui->lbl3->hide();
}

App::~App() {
    delete ui;
}

void App::update_text() {
    string input = ui->Encrypted->toPlainText().toStdString();
    string key;
    if (mode == 0) {
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
                string out = vigineer_crypt(input, key);
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
                string out = caesarCrypt(input, offset);
                ui->Decrypted->setText(QString::fromUtf8(out));
                break;
            }
        }
    } else {
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
                string out = vigineer_decrypt(input, key);
//                qDebug() << QString::fromUtf8(out);
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
                string out = caesarDecrypt(input, offset);
                ui->Decrypted->setText(QString::fromUtf8(out));
                break;
            }
        }
    }
}

void App::change_mode() {
    if (mode == 0) {
        mode = 1;
        ui->mode_lbl->setText(QString::fromUtf8("Decryptor mode"));
        App::update_text();
    }
    else if (mode == 1) {
        mode = 0;
        ui->mode_lbl->setText(QString::fromUtf8("Cryptor mode"));
        App::update_text();
    }
}