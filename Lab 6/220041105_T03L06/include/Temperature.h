#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <iostream>
using namespace std;

class Kelvin;
class Fahrenheit;

class Celsius
{
    float temperature;

public:
    Celsius(float temp = 0);
    void assign(const float &temp);
    void display() const;
    operator Fahrenheit() const;
    operator Kelvin() const;
};

class Fahrenheit
{
    float temperature;

public:
    Fahrenheit(float temp = 32);
    void assign(const float &temp);
    void display() const;
    operator Celsius() const;
    operator Kelvin() const;
};

class Kelvin
{
    float temperature;

public:
    Kelvin(float temp = 273.15);
    void assign(const float &temp);
    void display() const;
    operator Celsius() const;
    operator Fahrenheit() const;
};

#endif
