#include<iostream>
#include<string>

using namespace std;

class Calculator
{
private:
    int current;
    int getvalue()
    {
        return current;
    }
    int setvalue(int value)
    {
        current=value;
    }
public:
    Calculator() : current(0){}
    Calculator(int value) : current(value){}
    ~Calculator()
    {
        cout << "Destructor of the Calculator object is called." << endl;
    }
    void clear()
    {
        setvalue(0);
    }
    void display()
    {
        cout<<"Current value is "<<getvalue()<<endl;
    }
    void add(int a)
    {
        setvalue(current+a);
    }
    void subtract(int a)
    {
        setvalue(current-a);
    }
    void multiply(int a)
    {
        setvalue(current*a);
    }
    int divideby(int a)
    {
        if(a==0)
        {
            cout<<"Invalid";
            return getvalue();
        }
        else
        {
            int rem=getvalue()
            setvalue(getvalue()/a);
            return rem%a;
        }
    }



};


int main()
{
    Calculator c,c1(10);
    c.add(10);
    c.display();
    c.add(7);
    c.display();
    c.multiply(31);
    c.display();
    c.subtract(42);
    c.display();
    c.divideby(7);
    c.display();
    c.add(3);
    c.display();
    c.clear();
    c.display();
}
