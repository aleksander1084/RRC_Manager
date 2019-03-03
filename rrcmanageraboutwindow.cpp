#include "rrcmanageraboutwindow.h"
#include "ui_rrcmanageraboutwindow.h"

RRCManagerAboutWindow::RRCManagerAboutWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RRCManagerAboutWindow)
{
    ui->setupUi(this);
}

RRCManagerAboutWindow::~RRCManagerAboutWindow()
{
    delete ui;
}
