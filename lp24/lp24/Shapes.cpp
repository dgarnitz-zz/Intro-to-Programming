// Shapes.cpp
#include "Shapes.h"
#include <iostream>
#include <cmath>

// Default constructor
Point::Point() {
	set(0, 0);
}

// Constructor w/ parameters
Point::Point(double x, double y) {
	set(x, y);
}

// Getters/setters
double Point::getX() {
	return mX;
}

double Point::getY() {
	return mY;
}

void Point::set(double x, double y) {
	mX = x;
	mY = y;
}

void Point::print() {
	std::cout << " (" << mX << ", " << mY << ") ";
}

double Point::getDist(Point other)
{
	double xdist = other.getX() - mX;
	xdist = xdist * xdist;
	double ydist = other.getY() - mY;
	ydist = ydist * ydist;
	double retval = std::sqrt(xdist + ydist);
	return retval;
}

// In Shapes.cpp, after Point implementations
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

double Circle::calcPer()
{
    return 2.0 * mRadius * 3.141592;
}

void Circle::print()
{
    std::cout << "Circle centered at ";
    mCenter.print();
    std::cout << " with radius " << mRadius << std::endl;
}

// In Shapes.cpp, after Circle implementations
// Constructor w/ parameters
Rect::Rect(double botX, double botY,
		   double topX, double topY) {
	set(botX, botY, topX, topY);
}

// Getters/setter
Point Rect::getBotLeft() {
	return mBotLeft;
}

Point Rect::getTopRight() {
	return mTopRight;
}

void Rect::set(double botX, double botY,
			   double topX, double topY) {
	mBotLeft.set(botX, botY);
	mTopRight.set(topX, topY);
}

// Calculate area of rectangle
double Rect::calcArea() {
	double length = mTopRight.getX() -
					mBotLeft.getX();
	double width = mTopRight.getY() -
				   mBotLeft.getY();
	return length * width;
}

double Rect::calcPer()
{
    double length  = std::abs(mTopRight.getX() - mBotLeft.getX());
    double width = std::abs(mTopRight.getY() - mBotLeft.getY());
    double per = (2 * length) + (2 * width);
    return per;
}

void Rect::print()
{
    std::cout << "Rectangle with corners ";
    mTopRight.print();
    std::cout << " , ";
    mBotLeft.print();
  
}

// In Shapes.cpp, after Rect implementations
Tri::Tri(double x0, double y0,
		 double x1, double y1,
		 double x2, double y2) {
	set(x0, y0, x1, y1, x2, y2);
}

// Getter/setter
Point Tri::getCorner(unsigned int index) {
	// Note: we should validate index
	return mCorners[index];
}

void Tri::set(double x0, double y0,
			  double x1, double y1,
			  double x2, double y2) {
	mCorners[0].set(x0, y0);
	mCorners[1].set(x1, y1);
	mCorners[2].set(x2, y2);
}

// calcArea() on next slide (it's too long!)
// Calcuate area of triangle
double Tri::calcArea() {
	// Area =
	// | (Ax(By-Cy) + Bx(Cy-Ay) + Cx(Ay-By)) |
	// | ----------------------------------- |
	// |                  2                  |

	// (Thanks Internet!)
	
	Point A = mCorners[0];
	Point B = mCorners[1];
	Point C = mCorners[2];
	// i = Ax(By-Cy)
	double i = A.getX() * (B.getY() - C.getY());
	// j = Bx(Cy-Ay)
	double j = B.getX() * (C.getY() - A.getY());
	// k = Cx(Ay - By)
	double k = C.getX() * (A.getY() - B.getY());

	double area = (i + j + k) / 2;

	// std::abs is absolute value in <cmath>
	area = std::abs(area);
	return area;
}

double Tri::calcPer()
{
    Point A = mCorners[0];
    Point B = mCorners[1];
    Point C = mCorners[2];
    
    return A.getDist(B) + A.getDist(C) + C.getDist(B);
}

void Tri::print()
{
    std::cout << "Triangle with corners ";
    mCorners[0].print();
    std::cout << " , ";
    mCorners[1].print();
    std::cout << " , ";
    mCorners[2].print();
    std::cout << " , ";
    
}




