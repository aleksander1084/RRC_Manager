#include "rrcmanagermainwindow.h"
#include "signinwindow.h"
#include "moduleflasherwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RRCManagerMainWindow w;
    SignInWindow x;
    ModuleFlasherWindow y;
    //w.show();
    x.show();
    y.show();

    return a.exec();
}
