#pragma once

#include <iostream>

class Point
{
private:
    
    double mX;
    double mY;
    
public:
    
    Point();
    Point(double x, double y);
    
    void setX(double inX);
    
    void setY(double inY);
    
    
    double getX();
    
    double getY();
    
    void print();
};

//Blue print --> don't just build a house, need a blue print