#include "Counter.h"

Counter::Counter(int step_val) : count(0), incrementStep(1)
{
    if (step_val > 0)
        incrementStep = step_val;
}
void Counter::setIncrementStep(int step_val)
{
    if (count == 0 && step_val > 0)
        incrementStep = step_val;
    else
        cout<<"Cannot set the increment step"<<endl;
}
int Counter::getCount() const
{
    return count;
}

void Counter::increment()
{
    count += incrementStep;
}
void Counter::resetCount(int step)
{
    count = 0;
    incrementStep = 1;
    if (step > 0)
        incrementStep = step;
}
Counter Counter::operator+(const Counter& operand) const
{
    Counter temp;
    if (incrementStep == operand.incrementStep)
    {
        temp.count = count + operand.count;
        temp.incrementStep = incrementStep;
    }
    else
        cout << "Increment steps are not the same" << endl;
    return temp;
}
Counter& Counter::operator+=(const Counter& operand)
{
    if (incrementStep == operand.incrementStep)
        count += operand.count;
    else
        cout << "Increment steps are not the same" << endl;
    return *this;
}
Counter Counter::operator++(int)
{
    return Counter(count++);
}
Counter Counter::operator++()
{
    return Counter(++count);
}
bool Counter::operator>(const Counter& operand) const
{
    return count > operand.count;
}
bool Counter::operator<(const Counter& operand) const
{
    return count < operand.count;
}
bool Counter::operator>=(const Counter& operand) const
{
    return count >= operand.count;
}
bool Counter::operator<=(const Counter& operand) const
{
    return count <= operand.count;
}
bool Counter::operator==(const Counter& operand) const
{
    return count == operand.count;
}
bool Counter::operator!=(const Counter& operand) const
{
    return count != operand.count;
}

