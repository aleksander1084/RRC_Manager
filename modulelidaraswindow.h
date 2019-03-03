#ifndef MODULELIDARASWINDOW_H
#define MODULELIDARASWINDOW_H

#include <QDialog>

namespace Ui {
class ModuleLidarASWindow;
}

class ModuleLidarASWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ModuleLidarASWindow(QWidget *parent = nullptr);
    ~ModuleLidarASWindow();

private:
    Ui::ModuleLidarASWindow *ui;
};

#endif // MODULELIDARASWINDOW_H
