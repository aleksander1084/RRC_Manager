#include "modulelidaraswindow.h"
#include "ui_modulelidaraswindow.h"

ModuleLidarASWindow::ModuleLidarASWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModuleLidarASWindow)
{
    ui->setupUi(this);
}

ModuleLidarASWindow::~ModuleLidarASWindow()
{
    delete ui;
}
