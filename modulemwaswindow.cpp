#include "modulemwaswindow.h"
#include "ui_modulemwaswindow.h"

ModuleMWASWindow::ModuleMWASWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModuleMWASWindow)
{
    ui->setupUi(this);
}

ModuleMWASWindow::~ModuleMWASWindow()
{
    delete ui;
}
