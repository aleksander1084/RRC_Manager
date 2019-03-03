#ifndef MODULEFLASHERWINDOW_H
#define MODULEFLASHERWINDOW_H

#include <QMainWindow>

namespace Ui {
class ModuleFlasherWindow;
}

class ModuleFlasherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModuleFlasherWindow(QWidget *parent = nullptr);
    ~ModuleFlasherWindow();

private:
    Ui::ModuleFlasherWindow *ui;
};

#endif // MODULEFLASHERWINDOW_H
