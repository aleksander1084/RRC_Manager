#ifndef MODULEMWASWINDOW_H
#define MODULEMWASWINDOW_H

#include <QDialog>

namespace Ui {
class ModuleMWASWindow;
}

class ModuleMWASWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ModuleMWASWindow(QWidget *parent = nullptr);
    ~ModuleMWASWindow();

private:
    Ui::ModuleMWASWindow *ui;
};

#endif // MODULEMWASWINDOW_H
