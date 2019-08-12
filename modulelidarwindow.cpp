#include "modulelidarwindow.h"
#include "ui_modulelidarwindow.h"

ModuleLidarWindow::ModuleLidarWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ModuleLidarWindow)
{
    ui->setupUi(this);
}

ModuleLidarWindow::~ModuleLidarWindow()
{
    delete ui;
}
