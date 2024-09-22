#include<iostream>

using namespace std;

class Time
{
private:
    int h1;
    int m1;
    int s1;
public:
    Time():h1(0), m1(0), s1(0)
    {
    }
    int hours(){
        return h1;
    }
    int minutes(){
        return m1;
    }
    int seconds(){
        return s1;
    }
    void reset(int h2,int m2,int s2)
    {
        if (h2 >= 0 && h2 < 24 && m2 >= 0 && m2 < 60 && s2 >= 0 && s2 < 60)
        {
            h1 = h2;
            m1 = m2;
            s1 = s2;
        }
        else
            cout << "Invalid time" << endl;
    }
    void advance(int h2, int m2, int s2)
    {
        s1 += s2;
        if (s1 >= 60)
        {
            m1 += s1 / 60;
            s1 = s1 % 60;
        }
        m1 += m2;
        if (m1 >= 60)
        {
            h1 += m1 / 60;
            m1 = m1 % 60;
        }
        h1 += h2;
        if (h1 >= 24)
            h1 = h1 % 24;
    }
    void print(){
        cout<<h1<<":"<<m1<<":"<<s1<<endl;
    }
};
int main()
{
    Time t;
    t.print();
    t.reset(5,20,10);
    t.print();
    t.advance(6,7,8);
    t.print();
    t.reset(9,9,9);
    t.print();
}
