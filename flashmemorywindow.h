#ifndef FLASHMEMORYWINDOW_H
#define FLASHMEMORYWINDOW_H

#include <QMainWindow>

namespace Ui {
class FlashMemoryWindow;
}

class FlashMemoryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlashMemoryWindow(QWidget *parent = nullptr);
    ~FlashMemoryWindow();

private:
    Ui::FlashMemoryWindow *ui;
};

#endif // FLASHMEMORYWINDOW_H
