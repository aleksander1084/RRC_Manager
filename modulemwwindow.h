#ifndef MODULEMWWINDOW_H
#define MODULEMWWINDOW_H

#include <QMainWindow>

namespace Ui {
class ModuleMWWindow;
}

class ModuleMWWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModuleMWWindow(QWidget *parent = nullptr);
    ~ModuleMWWindow();

private:
    Ui::ModuleMWWindow *ui;
};

#endif // MODULEMWWINDOW_H
