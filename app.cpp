#include "app.h"
#include "./ui_app.h"
#include "iostream"
#include "QString"
#include "QTextEdit"

using namespace std;


App::App(QWidget *parent) : QMainWindow(parent), ui(new Ui::App) {
    ui->setupUi(this);
    connect(ui->Encrypted, SIGNAL(textChanged()), this, SLOT(onTextChanged_Enc()));
}

App::~App() {
    delete ui;
}


void App::onTextChanged_Enc() {
    ui->Decrypted->setText(ui->Encrypted->toPlainText());
}

