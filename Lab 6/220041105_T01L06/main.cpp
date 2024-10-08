#include "Counter.h"

int main()
{
    Counter c1, c2(1), c3(2);
    c1.setIncrementStep(3);
    c1.increment();
    c1.increment();
    cout <<c1.getCount() << endl;
    c2.increment();
    cout <<c2.getCount() << endl;
    Counter csum = c1 + c2;
    cout << "c4 count after c1 + c2: " << csum.getCount() << endl;

}
