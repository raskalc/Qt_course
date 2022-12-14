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
    void change_mode();

    void update_text();


private:
    Ui::App *ui;


};
#endif // APP_H
