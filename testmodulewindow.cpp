#include "testmodulewindow.h"
#include "ui_testmodulewindow.h"

TestModuleWindow::TestModuleWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestModuleWindow)
{
    ui->setupUi(this);
}

TestModuleWindow::~TestModuleWindow()
{
    delete ui;
}
