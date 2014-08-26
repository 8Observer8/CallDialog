#include "Settings.h"

Settings::Settings( const QString &portName,
                    const QString &speed ) :
    m_portName( portName ),
    m_speed( speed )
{
}


void Settings::setPortName(const QString &portName)
{
    m_portName = portName;
}

void Settings::setSpeed(const QString &speed)
{
    m_speed = speed;
}

QString Settings::getPortName() const
{
    return m_portName;
}

QString Settings::getSpeed() const
{
    return m_speed;
}
