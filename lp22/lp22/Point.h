#pragma once

class Point
{
public:
	// Constructors
	Point();
	Point(double x, double y);

	// Getters
	double getX();
	double getY();

	// Setters
	void setX(double inX);
	void setY(double inY);
	void set(double inX, double inY);

	// Display
	void print();
    
    //Calculates distance between two points
    double getDistance(Point first);

private:
	double mXCoord;
	double mYCoord;
};
