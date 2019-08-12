#include "flashmemorywindow.h"
#include "ui_flashmemorywindow.h"

FlashMemoryWindow::FlashMemoryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlashMemoryWindow)
{
    ui->setupUi(this);
}

FlashMemoryWindow::~FlashMemoryWindow()
{
    delete ui;
}
