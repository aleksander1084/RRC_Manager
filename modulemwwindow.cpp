#include "modulemwwindow.h"
#include "ui_modulemwwindow.h"

ModuleMWWindow::ModuleMWWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ModuleMWWindow)
{
    ui->setupUi(this);
}

ModuleMWWindow::~ModuleMWWindow()
{
    delete ui;
}
