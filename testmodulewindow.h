#ifndef TESTMODULEWINDOW_H
#define TESTMODULEWINDOW_H

#include <QMainWindow>

namespace Ui {
class TestModuleWindow;
}

class TestModuleWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestModuleWindow(QWidget *parent = nullptr);
    ~TestModuleWindow();

private:
    Ui::TestModuleWindow *ui;
};

#endif // TESTMODULEWINDOW_H
