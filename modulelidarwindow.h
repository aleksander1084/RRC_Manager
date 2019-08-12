#ifndef MODULELIDARWINDOW_H
#define MODULELIDARWINDOW_H

#include <QMainWindow>

namespace Ui {
class ModuleLidarWindow;
}

class ModuleLidarWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModuleLidarWindow(QWidget *parent = nullptr);
    ~ModuleLidarWindow();

private:
    Ui::ModuleLidarWindow *ui;
};

#endif // MODULELIDARWINDOW_H
