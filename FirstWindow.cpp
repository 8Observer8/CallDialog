
#include "FirstWindow.h"
#include "ui_FirstWindow.h"
#include "SettingsDialog.h"

FirstWindow::FirstWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
}

FirstWindow::~FirstWindow()
{
    delete ui;
}

void FirstWindow::on_settingsButton_clicked()
{
    SettingsDialog dialog;
    connect( &dialog, SIGNAL( signalSetSettings( Settings ) ),
             this, SLOT( slotSetSettings( Settings ) ) );
    dialog.exec();
}

void FirstWindow::slotSetSettings(const Settings &settings)
{
    emit signalSetSettings( settings );
}
