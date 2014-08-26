
#include <QMessageBox>
#include "SettingsDialog.h"
#include "ui_SettingsDialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::on_okButton_clicked()
{
    QString portName = ui->portNameComboBox->currentText();
    QString speed = ui->speedComboBox->currentText();

    Settings settings( portName, speed );
    emit signalSetSettings( settings );

    this->close();
}

void SettingsDialog::on_cancelButton_clicked()
{
    this->close();
}
