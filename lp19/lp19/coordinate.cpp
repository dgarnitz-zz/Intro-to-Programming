#include <iostream>
#include "coordinate.h"

Point::Point()
{
    mX = 0.0;
    mY = 0.0;
}

Point::Point(double x, double y)
{
    mX = x;
    mY = y;
}

void Point::setX(double inX)
{
    mX = inX;
}

void Point::setY(double inY)
{
    mY = inY;
}

double Point::getX()
{
    return mX;
}

double Point::getY()
{
    return mY;
}

void Point::print()
{
    std::cout << "(" << mX << "," << mY << ")";
}