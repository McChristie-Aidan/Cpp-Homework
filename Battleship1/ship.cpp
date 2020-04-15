#include <iostream>
#include <string>
#include <vector>
#include "ship.hpp"

void Ship()
{
    xLoc = rand() % 10 + 1;
    yLoc = rand() % 10 + 1;
}

Ship::SetLoc()
{
    xLoc = rand() % 10 + 1;
    yLoc = rand() % 10 + 1;
}

Ship::PrintLoc()
{
    cout << xLoc << ", " << yLoc << endl
    return;
}