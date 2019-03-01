#include "rrcmanagermainwindow.h"
#include "signinwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RRCManagerMainWindow w;
    SignInWindow x;
    w.show();
    x.show();

    return a.exec();
}
