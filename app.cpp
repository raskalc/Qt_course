#include "app.h"
#include "./ui_app.h"
#include "iostream"
#include "QString"
#include "QTextEdit"
using namespace std;





App::App(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::App)
{

    ui->setupUi(this);
    connect(ui->Encrypted, SIGNAL(textChanged()), this, SLOT(onTextChanged()));
//    ui->MainWigdet->setWindowTitle("FUCK");
//    ui->Encrypted->currentCharFormatChanged());

}

App::~App()
{
    delete ui;
}


void App::onTextChanged() {
    ui->Decrypted->setText(ui->Encrypted->toPlainText());

}
