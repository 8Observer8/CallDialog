#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include "Settings.h"

namespace Ui {
    class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

public slots:
    void slotSetSettings( const Settings &settings );

private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
