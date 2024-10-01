#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <cstring>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string dob;
    int salary;
public:
    Employee();
    void setname(string n);
    string getname() const;
    void setdob(string n);
    string getdob() const;
    void setsalary(int n);
    int getsalary() const;
    void setinfo();
    void getinfo() const;

    Employee compareAge(const Employee& e) const;
};

#endif

