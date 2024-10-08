#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Coordinate
{
private:
    float abscissa;
    float ordinate;

public:
    Coordinate();
    Coordinate(float x, float y);
    ~Coordinate();
    float operator-(const Coordinate& c) const;
    float getDistance() const;
    void move_x(float val);
    void move_y(float val);
    void move(float x_val, float y_val);
    void display() const;

    bool operator>(const Coordinate& c) const;
    bool operator<(const Coordinate& c) const;
    bool operator>=(const Coordinate& c) const;
    bool operator<=(const Coordinate& c) const;
    bool operator==(const Coordinate& c) const;
    bool operator!=(const Coordinate& c) const;
};

void randomAssignment(Coordinate c[], int size);
void highest(const Coordinate c[], int size);
void lowest(const Coordinate c[], int size);

#endif
