#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include "QTextEdit"
QT_BEGIN_NAMESPACE
namespace Ui { class App; }
QT_END_NAMESPACE

class App : public QMainWindow {
Q_OBJECT

public:
    App(QWidget *parent = nullptr);
    ~App();

private slots:
    void onTextChanged_Enc();


private:
    Ui::App *ui;
};
#endif // APP_H
