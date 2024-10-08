#include "temperature.h"

Celsius::Celsius(float temp) : temperature(temp)
{
    if (temperature < -273.15)
        temperature = -273.15;
}

void Celsius::assign(const float &temp)
{
    temperature = temp;
    if (temperature < -273.15)
        temperature = -273.15;
}

void Celsius::display() const
{
    cout << "Temperature:" << temperature << " Celsius" << endl;
}

Celsius::operator Fahrenheit() const
{
    return Fahrenheit(temperature * 9 / 5 + 32);
}

Celsius::operator Kelvin() const
{
    return Kelvin(temperature + 273.15);
}

Fahrenheit::Fahrenheit(float temp) : temperature(temp)
{
    if (temperature < -459)
        temperature = -459;
}

void Fahrenheit::assign(const float &temp)
{
    temperature = temp;
    if (temperature < -459)
        temperature = -459;
}

void Fahrenheit::display() const
{
    cout << "Temperature:" << temperature << " Fahrenheit" << endl;
}

Fahrenheit::operator Celsius() const
{
    return Celsius((temperature - 32) * 5 / 9);
}

Fahrenheit::operator Kelvin() const
{
    return Kelvin((temperature - 32) * 5 / 9 + 273.15);
}

Kelvin::Kelvin(float temp) : temperature(temp)
{
    if (temperature < 0)
        temperature = 0;
}

void Kelvin::assign(const float &temp)
{
    temperature = temp;
    if (temperature < 0)
        temperature = 0;
}

void Kelvin::display() const
{
    cout << "Temperature:" << temperature << " Kelvin" << endl;
}

Kelvin::operator Celsius() const
{
    return Celsius(temperature - 273.15);
}

Kelvin::operator Fahrenheit() const
{
    return Fahrenheit((temperature - 273.15) * 9 / 5 + 32);
}
