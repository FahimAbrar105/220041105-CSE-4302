#include <iostream>
#include "Employee.h"
#include <cstring>
#include <string>

using namespace std;

int main()
{
    Employee e1, e2;

    e1.setinfo();
    e2.setinfo();

    e1.getinfo();
    e2.getinfo();

    Employee e = e1.compareAge(e2);

    e.getinfo();
}
