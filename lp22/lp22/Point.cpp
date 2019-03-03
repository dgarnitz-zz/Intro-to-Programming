#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point()
{
	mXCoord = 0.0;
	mYCoord = 0.0;
}

Point::Point(double x, double y)
{
	mXCoord = x;
	mYCoord = y;
}

void Point::setX(double inX)
{
	mXCoord = inX;
}

void Point::setY(double inY)
{
	mYCoord = inY;
}

void Point::set(double inX, double inY)
{
	mXCoord = inX;
	mYCoord = inY;
}

double Point::getX()
{
	return mXCoord;
}

double Point::getY()
{
	return mYCoord;
}

void Point::print()
{
	std::cout << "(" << mXCoord << "," << mYCoord << ")";
}

double Point::getDistance(Point first)
{
    double distance = 0;
    double xDist = 0;
    double yDist = 0;
    xDist = mXCoord - first.mXCoord;
    yDist = mYCoord - first.mYCoord;
    xDist = std::pow(xDist, 2);
    yDist = std::pow(yDist, 2);
    distance = std::sqrt((xDist + yDist));
    return distance;
}
