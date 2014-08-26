#ifndef SETTINGS_H
#define SETTINGS_H

#include <QString>

class Settings
{
public:
    Settings( const QString &portName = QString( "COM1" ),
              const QString &speed = QString( "9600" ) );

    void setPortName( const QString &portName );
    void setSpeed( const QString &speed );
    QString getPortName() const;
    QString getSpeed() const;

private:
    QString m_portName;
    QString m_speed;
};

#endif // SETTINGS_H
