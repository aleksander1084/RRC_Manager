#include "moduleflasherwindow.h"
#include "ui_moduleflasherwindow.h"

ModuleFlasherWindow::ModuleFlasherWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ModuleFlasherWindow)
{
    ui->setupUi(this);
}

ModuleFlasherWindow::~ModuleFlasherWindow()
{
    delete ui;
}
