//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 15
//garnitz@usc.edu

#include <iostream>
#include <cmath>

class Coordinate
{
private:
    
    int mX;
    int mY;
    
public:
    
    void setX(double inX)
    {
        mX = inX;
    }
    
    void setY(double inY)
    {
        mY = inY;
    }
    
    double getX()
    {
        return mX;
    }
    
    double getY()
    {
        return mY;
    }
    void print()
    {
        std::cout << "(" << mX << "," << mY << ")";
    }
};

double calcDist(Coordinate& point1, Coordinate& point2)
{
    double distance = 0;
    double Xdist = 0;
    double Ydist = 0;
    
    Xdist = point1.getX() - point2.getX();
    Ydist = point1.getY() - point2.getY();
    
    distance = std::sqrt((std::pow(Xdist, 2) + std::pow(Ydist, 2)));
    
    return distance;
}

int main()
{
    Coordinate first;
    Coordinate second;
    
    double xOne = 0;
    double xTwo = 0;
    double yOne = 0;
    double yTwo = 0;
    
    std::cout << "Enter 1st x" << std::endl;
    std::cin >> xOne;
    first.setX(xOne);
    std::cout << "Enter 1st y" << std::endl;
    std::cin >> yOne;
    first.setY(yOne);
    std::cout << "Enter 2nd x" << std::endl;
    std::cin >> xTwo;
    second.setX(xTwo);
    std::cout << "Enter 2nd y" << std::endl;
    std::cin >> yTwo;
    second.setY(yTwo);
    
    std::cout << "Distance between ";
    first.print();
    std::cout<< " and ";
    second.print();
    std::cout << " is " << calcDist(first, second) << std::endl;
    
    
    
    
    return 0;
}