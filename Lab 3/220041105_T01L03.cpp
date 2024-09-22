#include<iostream>

using namespace std;

class Counter
{

private:
    int count;
    int incrementStep;

public:
    Counter(): count(0), incrementStep(1)
    {
    }
    void setIncrementStep(int x)
    {
        incrementStep=x;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=incrementStep;
    }
    void resetCount()
    {
        count=0;
    }

};
int main(){
    Counter obj;

    cout<<"Starting count value before increment: "<<obj.getCount()<<endl;
    obj.setIncrementStep(5);
    cout<<"Increment value has been set"<<endl;
    obj.increment();
    cout<<"After incrementing: "<<obj.getCount()<<endl;
    obj.resetCount();
    cout<<"After resettting: "<<obj.getCount()<<endl;
}
