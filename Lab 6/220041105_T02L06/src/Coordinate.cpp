#include "Coordinate.h"

Coordinate::Coordinate()
{
    abscissa=0;
    ordinate=0;
}
Coordinate::Coordinate(float x, float y):abscissa(x),ordinate(y){}
Coordinate::~Coordinate(){}

void Coordinate::display() const
{
    cout << "Coordinate:" << abscissa << ", " << ordinate<< endl;
}

float Coordinate::operator-(const Coordinate& c) const
{
    return sqrt(pow(c.abscissa - abscissa, 2) + pow(c.ordinate - ordinate, 2));
}

float Coordinate::getDistance() const
{
    return sqrt(pow(abscissa, 2) + pow(ordinate, 2));
}

void Coordinate::move_x(float val)
{
    abscissa += val;
}

void Coordinate::move_y(float val)
{
    ordinate += val;
}

void Coordinate::move(float x_val, float y_val)
{
    abscissa += x_val;
    ordinate += y_val;
}

void randomAssignment(Coordinate c[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        float x = (rand() % 105);
        float y = (rand() % 105);
        c[i] = Coordinate(x, y);
    }
}


void highest(const Coordinate c[], int size)
{
    float max = c[0].getDistance();
    Coordinate highestCoord = c[0];

    for (int i = 1; i < size; i++)
    {
        float distance = c[i].getDistance();
        if (distance > max)
        {
            max = distance;
            highestCoord = c[i];
        }
    }

    cout << "Highest Coordinate: ";
    highestCoord.display();
}

void lowest(const Coordinate c[], int size)
{
    float min = c[0].getDistance();
    Coordinate lowestCoord = c[0];

    for (int i = 1; i < size; i++)
    {
        float distance = c[i].getDistance();
        if (distance < min)
        {
            min = distance;
            lowestCoord = c[i];
        }
    }

    cout << "Lowest Coordinate: ";
    lowestCoord.display();
}

bool Coordinate::operator>(const Coordinate& c) const
{
    return getDistance() > c.getDistance();
}

bool Coordinate::operator<(const Coordinate& c) const
{
    return getDistance() < c.getDistance();
}

bool Coordinate::operator>=(const Coordinate& c) const
{
    return getDistance() >= c.getDistance();
}

bool Coordinate::operator<=(const Coordinate& c) const
{
    return getDistance() <= c.getDistance();
}

bool Coordinate::operator==(const Coordinate& c) const
{
    return getDistance() == c.getDistance();
}

bool Coordinate::operator!=(const Coordinate& c) const
{
    return getDistance() != c.getDistance();
}


