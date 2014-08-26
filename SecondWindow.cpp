#include "SecondWindow.h"
#include "ui_SecondWindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::slotSetSettings(const Settings &settings)
{
    QString portName = settings.getPortName();
    QString speed = settings.getSpeed();

    QString text = QString( "You set:\n"
                            "Port Name: %1\n"
                            "Speed: %2\n" ).arg( portName ).arg( speed );

    ui->outputTextEdit->append( text );
}
