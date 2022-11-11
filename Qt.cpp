#include "app.h"
#include <QApplication>
#include <json/json.h>

int run_qt_application(int argc, char *argv[]) {
    QApplication app(argc, argv);
    App window;
    window.show();
    return app.exec();

}

//int run_backend() {
//    //Set HTTP listener address and port
//    drogon::app().addListener("0.0.0.0",8088);
//    //Load config file
//    //drogon::app().loadConfigFile("../config.json");
//    //Run HTTP framework,the method will block in the internal event loop
//    drogon::app().run();
//    return 0;
//}

int main(int argc, char *argv[]) {
    run_qt_application(argc, argv);
//    run_backend();
    return 0;
}