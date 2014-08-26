#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QDialog>
#include "Settings.h"

namespace Ui {
    class FirstWindow;
}

class FirstWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = 0);
    ~FirstWindow();

signals:
    void signalSetSettings( const Settings &settings );

private slots:
    void on_settingsButton_clicked();
    void slotSetSettings( const Settings &settings );

private:
    Ui::FirstWindow *ui;
};

#endif // FIRSTWINDOW_H
