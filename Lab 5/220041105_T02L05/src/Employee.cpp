#include "Employee.h"
#include <cstring>
#include <iostream>
#include <string>

using namespace std;
Employee::Employee()
{

}
void Employee::setname(string n)
{
    if(n.length()<=2)
        name="John Doe";
    else
        name=n;
}

string Employee::getname() const
{
    return name;
}

void Employee::setdob(string n)
{
    int d, m, y;
    sscanf(n.c_str(), "%d/%d/%d", &d, &m, &y);
    if(2024 - y < 18)
    {
        dob = "01/01/2002";
    }
    else
    {
        dob = n;
    }
}

string Employee::getdob() const
{
    return dob;
}

void Employee::setsalary(int n)
{
    if(n >= 10000 && n <= 100000)
    {
        salary = n;
    }
    else
    {
        salary = 10000;
    }
}

int Employee::getsalary() const
{
    return salary;
}

void Employee::setinfo()
{
    string n, date;
    int s;
    cout << "Enter name: ";
    cin >> n;
    cout << "Enter date of birth (dd/mm/yyyy): ";
    cin >> date;
    cout << "Enter salary: ";
    cin >> s;

    setname(n);
    setdob(date);
    setsalary(s);
}

void Employee::getinfo() const
{
    cout << "Name: " << getname() << endl;
    cout << "Date of Birth: " << getdob() << endl;
    cout << "Salary: " << getsalary() << endl;
}

Employee Employee::compareAge(const Employee& e) const
{
    string db1 = getdob();
    string db2 = e.getdob();
    int d1, m1, y1;
    int d2, m2, y2;

    sscanf(db1.c_str(), "%d/%d/%d", &d1, &m1, &y1);
    sscanf(db2.c_str(), "%d/%d/%d", &d2, &m2, &y2);

    if(y1 < y2)
    {
        return *this;
    }
    else
    {
        return e;
    }
}
