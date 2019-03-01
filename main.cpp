#include "rrcmanagermainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RRCManagerMainWindow w;
    w.show();

    return a.exec();
}
