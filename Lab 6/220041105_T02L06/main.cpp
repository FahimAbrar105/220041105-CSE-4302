#include "Coordinate.h"

int main()
{
    Coordinate coord[10];
    randomAssignment(coord,10);
    coord[2].display();
    highest(coord,10);
    lowest(coord,10);
}
