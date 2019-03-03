//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 22
//garnitz@usc.edu


#include "Circle.h"
#include "Rect.h"
#include "Tri.h"
#include <iostream>
#include <cmath>

int main() {
    std::cout << "Pick a shape (1, 2, or 3):";
    int option = 0;
    std::cin >> option;
    
    if (option == 1)
    {
        std::cout << "Making a circle!" << std::endl;
        Circle* myCircle = new Circle(0, 0, 5);
        std::cout << "Area is: " << myCircle->calcArea() << std::endl;
    }
    else if (option == 2)
    {
        std::cout << "Making a rectangle!" << std::endl;
        Rect* myRect = new Rect(0, 0, 5, 5);
        std::cout << "Area is: " << myRect->calcArea() << std::endl;
    }
    else
    {
        std::cout << "Making a triangle!" << std::endl;
        Tri* myTri = new Tri(0, 0, 0, 5, 5, 5);
        std::cout << "Area is: " << myTri->calcArea() << std::endl;
    }
    
    return 0;
}

