#ifndef MODULEFLASHERASWINDOW_H
#define MODULEFLASHERASWINDOW_H

#include <QDialog>

namespace Ui {
class ModuleFlasherASWindow;
}

class ModuleFlasherASWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ModuleFlasherASWindow(QWidget *parent = nullptr);
    ~ModuleFlasherASWindow();

private:
    Ui::ModuleFlasherASWindow *ui;
};

#endif // MODULEFLASHERASWINDOW_H
