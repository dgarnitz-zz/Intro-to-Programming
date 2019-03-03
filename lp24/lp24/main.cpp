//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 24
//garnitz@usc.edu


// main.cpp
#include "Shapes.h"
#include <iostream>
#include <ctime>
#include <vector>

int main()
{
	//shapes list
    std::srand(std::time(0));
    std::vector<Shape*> shapeList;
	int option = 0;
	const int QUIT = 4;

	while (option != QUIT)
    {

		std::cout << "Pick a shape: " << std::endl;
		std::cout << " 1) Circle" << std::endl;
		std::cout << " 2) Rectangle" << std::endl;
		std::cout << " 3) Triangle" << std::endl;
		std::cout << " 4) Quit" << std::endl;
		std::cout << " > ";
		std::cin >> option;

    //add shapes
        switch(option)
        {
            case 1:
                shapeList.push_back(new Circle(std::rand(), std::rand(), std::rand()));
                break;
            case 2:
                shapeList.push_back(new Rect(std::rand(), std::rand(), std::rand(), std::rand()));
                break;
            case 3:
                shapeList.push_back(new Tri(std::rand(), std::rand(), std::rand(), std::rand(), std::rand(), std::rand()));
                break;
            case 4:
                std::cout << "Quitting!" << std::endl;
                break;
            default:
                std::cout << "Not a valid option. Please try again" << std::endl;
                break;
        }
		
	}
    
    //end add shapes while loop
    
    for(int i; i< shapeList.size(); i++)
    {
        shapeList[i]->print();
        std::cout << "Its area is " << shapeList[i]->calcArea() << std::endl;
        std::cout << "Its perimeter is " << shapeList[i]->calcPer() << std::endl;
        std::cout << std::endl;
        delete shapeList[i];
        
    }

	return 0;
}
