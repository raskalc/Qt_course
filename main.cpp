#include "app.h"
#include "iostream"
#include <QApplication>
#include "string"
using namespace std;

string cesar(int offset, string input) {
    string out;
    string alphabet = "abcdefghijklmnopqrst";
    for(int i = 0; i<input.length(); i++) {
        cout << alphabet.find(input[i]);

    };
}

int qapp(int argc, char *argv[]){
    QApplication app(argc, argv);
    App window;
    window.show();
    return app.exec();
}

int main(int argc, char *argv[])
{
    qapp(argc, argv);
}
//#include <QApplication>
//#include "widget.h"
//
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    Widget w;
//    w.show();
//
//    return a.exec();
//}
