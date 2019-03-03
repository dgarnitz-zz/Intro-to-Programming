#include <iostream>
#include <cmath>
#include "coordinate.h"


double calcDist(Point c1, Point c2)
{
    double distance = 0;
    
    distance += std::pow((c1.getX() -c2.getX()), 2.0);
    distance += std::pow((c1.getY() -c2.getY()), 2.0);
    distance = std::sqrt(distance);
    
    return distance;
    
}

int main(){
    
    
    double temp;
    Point* first = new Point();
    Point* second = new Point();
    
    std::cout << "Enter 1st x: ";
    std::cin >> temp;
    first->setX(temp);
    std::cout << "Enter 1st y: ";
    std::cin >> temp;
    first->setY(temp);
    
    
    std::cout << "Enter 2nd x: ";
    std::cin >> temp;
    second->setX(temp);
    std::cout << "Enter 2nd y: ";
    std::cin >> temp;
    second->setY(temp);
    
    std::cout << "Distance between ";
    first->print();
    std::cout << " and";
    second->print();
    std::cout << " is " << calcDist(*first, *second) << std::endl;
    
    delete first;
    delete second;
    
    return 0;
}