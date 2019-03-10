#ifndef SIGNINWINDOW_H
#define SIGNINWINDOW_H

#include <QDialog>

namespace Ui {
class SignInWindow;
}

class SignInWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SignInWindow(QWidget *parent = nullptr);
    ~SignInWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::SignInWindow *ui;
};

#endif // SIGNINWINDOW_H
