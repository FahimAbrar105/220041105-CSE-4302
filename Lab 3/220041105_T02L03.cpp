#include<iostream>

using namespace std;

class Temperature
{
private:
    double value;
    string unit;
public:
    Temperature():value(0), unit("Celsius")
    {
    }
    void assign(double temp, string str)
    {
        if (str!= "Celsius" && str!= "Fahrenheit" && str!= "Kelvin")
        {
            cout << "Invalid unit" << endl;
            return;
        }
        if (str== "Celsius" && temp< -273.15)
        {
            cout << "Temperature value is below absolute zero in Celsius" << endl;
            return;
        }
        if (str== "Fahrenheit" && temp< -459)
        {
            cout << "Temperature value is below absolute zero in Fahrenheit" << endl;
            return;
        }
        if (str== "Kelvin" && temp < 0)
        {
            cout << "Temperature value is below absolute zero in Kelvin" << endl;
            return;
        }
        value=temp;
        unit=str;
    }
    double convert(string str2)
    {
        double result=value;
        if (str2!= "Celsius" && str2!= "Fahrenheit" && str2!= "Kelvin")
        {
            cout << "Invalid unit" << endl;
            return 0;
        }
        if (unit == "Celsius")
        {
            if (str2== "Fahrenheit")
                result = value * 9/5 + 32;
            else if (str2 == "Kelvin")
                result = value + 273.15;
        }
        else if (unit == "Fahrenheit")
        {
            if (unit == "Celsius")
                result = (value - 32) * 5/9;
            else if (str2== "Kelvin")
                result = (value - 32) * 5/9 + 273.15;
        }
        else if (unit == "Kelvin")
        {
            if (str2== "Celsius")
                result = value - 273.15;
            else if (str2 == "Fahrenheit")
                result = (value - 273.15) * 9/5 + 32;
        }
        return result;

    }
    void print() const
    {
        cout<<"The temperature is "<<value<<" "<<unit<<endl;
    }
};
int main()
{
    Temperature t;
    t.assign(10, "Celsius");
    t.print();
    cout<<"Converted to Kelvin: "<<t.convert("Kelvin")<<endl;
    t.assign(-20,"Farenheit");
}
