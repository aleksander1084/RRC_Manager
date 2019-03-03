#ifndef DATABASEWINDOW_H
#define DATABASEWINDOW_H

#include <QMainWindow>

namespace Ui {
class DataBaseWindow;
}

class DataBaseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataBaseWindow(QWidget *parent = nullptr);
    ~DataBaseWindow();

private:
    Ui::DataBaseWindow *ui;
};

#endif // DATABASEWINDOW_H
