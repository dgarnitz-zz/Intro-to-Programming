//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 14
//garnitz@usc.edu

#include <iostream>
#include <string>
#include <cmath>

struct Coordinate
{
    double x;
    double y;
};

void printCoord(Coordinate& point)
{
    std::cout << "(" << point.x << "," << point.y << ")";
}

double calcDist(Coordinate& point1, Coordinate& point2)
{
    double distance = 0;
    double Xdist = 0;
    double Ydist = 0;
    
    Xdist = point1.x - point2.x;
    Ydist = point1.y - point2.y;
    
    distance = std::sqrt((std::pow(Xdist, 2) + std::pow(Ydist, 2)));
    
    return distance;
}

int main()
{
    Coordinate first, second;
    
    std::cout << "Enter 1st x value:" << std::endl;
    std::cin >> first.x;
    std::cout << "Enter 1st y value:" << std::endl;
    std::cin >> first.y;
    std::cout << "Enter 2nd x value:" << std::endl;
    std::cin >> second.x;
    std::cout << "Enter 2nd y value:" << std::endl;
    std::cin >> second.y;
    
    std::cout << "Distance between ";
    printCoord(first);
    std::cout<< " and ";
    printCoord(second);
    std::cout << " is " << calcDist(first, second) << std::endl;
    
    return 0;
}

