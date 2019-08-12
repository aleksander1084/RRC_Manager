#include "moduleflasheraswindow.h"
#include "ui_moduleflasheraswindow.h"

ModuleFlasherASWindow::ModuleFlasherASWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModuleFlasherASWindow)
{
    ui->setupUi(this);
}

ModuleFlasherASWindow::~ModuleFlasherASWindow()
{
    delete ui;
}
