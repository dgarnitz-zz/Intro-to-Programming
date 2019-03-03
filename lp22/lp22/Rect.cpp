#include "Rect.h"
#include <iostream>

Rect::Rect(double botX, double botY, double topX, double topY) 
{
	set(botX, botY, topX, topY);
}

// Getters/setter
Point Rect::getBotLeft() 
{
	return mBotLeft;
}

Point Rect::getTopRight() 
{
	return mTopRight;
}

void Rect::set(double botX, double botY, double topX, double topY) {
	mBotLeft.set(botX, botY);
	mTopRight.set(topX, topY);
}

// Calculate area of rectangle
double Rect::calcArea() {
	double length = mTopRight.getX() - mBotLeft.getX();
	double width = mTopRight.getY() - mBotLeft.getY();
	return length * width;
}

//Calculate perimeter
double Rect::calcPerimeter()
{
    double perimeter = 0;
    double length = mTopRight.getX() - mBotLeft.getX();
    double width = mTopRight.getY() - mBotLeft.getY();
    perimeter = (2 * length) + (2 * width); 
    return perimeter;
}
