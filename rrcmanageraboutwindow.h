#ifndef RRCMANAGERABOUTWINDOW_H
#define RRCMANAGERABOUTWINDOW_H

#include <QDialog>

namespace Ui {
class RRCManagerAboutWindow;
}

class RRCManagerAboutWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RRCManagerAboutWindow(QWidget *parent = nullptr);
    ~RRCManagerAboutWindow();

private:
    Ui::RRCManagerAboutWindow *ui;
};

#endif // RRCMANAGERABOUTWINDOW_H
