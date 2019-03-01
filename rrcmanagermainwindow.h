#ifndef RRCMANAGERMAINWINDOW_H
#define RRCMANAGERMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class RRCManagerMainWindow;
}

class RRCManagerMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RRCManagerMainWindow(QWidget *parent = nullptr);
    ~RRCManagerMainWindow();

private:
    Ui::RRCManagerMainWindow *ui;
};

#endif // RRCMANAGERMAINWINDOW_H
