#include "signinwindow.h"
#include "ui_signinwindow.h"
#include "rrcmanagermainwindow.h"
#include "QMessageBox"

SignInWindow::SignInWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignInWindow)
{
    ui->setupUi(this);
}

SignInWindow::~SignInWindow()
{
    delete ui;
}

void SignInWindow::on_pushButton_login_clicked()
{
    QMessageBox::information(this,"Password correct", "you are loging in as: " + ui->lineEdit_username->text());
    RRCManagerMainWindow *mainWindow;
    hide();
    mainWindow = new RRCManagerMainWindow(this);
    mainWindow->show();
}
