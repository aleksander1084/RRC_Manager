#include "rrcmanagermainwindow.h"
#include "ui_rrcmanagermainwindow.h"

RRCManagerMainWindow::RRCManagerMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RRCManagerMainWindow)
{
    ui->setupUi(this);
}

RRCManagerMainWindow::~RRCManagerMainWindow()
{
    delete ui;
}
