#include "Circle.h"
#include <iostream>

// Constructor
Circle::Circle(double x, double y, double rad) {
	set(x, y, rad);
}

// Getters/setters
Point Circle::getCenter() {
	return mCenter;
}

double Circle::getRadius() {
	return mRadius;
}

void Circle::set(double x, double y, double rad) {
	mCenter.set(x, y);
	mRadius = rad;
}

// Calculate area of circle
double Circle::calcArea() {
	return mRadius * mRadius * 3.141592;
}

double Circle::calcPerimeter()
{
    return mRadius * 2 * 3.141592; 
}
