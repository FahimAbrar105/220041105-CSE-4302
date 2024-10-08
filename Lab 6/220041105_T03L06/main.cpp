#include "temperature.h"

int main()
{
    Celsius c(143);
    Fahrenheit f = c;
    Kelvin k = f;
    f.display();
    k.display();
    c = f;
    c.display();
    f = k;
    f.display();
}
