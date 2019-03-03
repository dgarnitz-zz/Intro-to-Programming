//David Garnitz
//ITP 165, Fall 2015
//Homework 10
//garnitz@usc.edu

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Animal.h"


void PrintStats(Animal* animals)
{
    std::cout << "Your animal's name is: " << animals->getName() << std::endl;
    std::cout << "Your animal's health is: " << animals->getHealth() << std::endl;
    std::cout << "Your animal's power is: " << animals->getPower() << std::endl;
    std::cout << "Your animal's armour is: " << animals->getArmour() << std::endl;
}

int main()
{
    Animal* animal = nullptr;
    std::srand(std::time(0));
    bool play = true;
    int option = 0;
    std::string fileSave;
    std::string fileLoad;
    const int healRange = 10;
    
    std::cout << "Welcome to ITP 165 training arena" << std::endl;
    
    while(play)
    {
        std::cout << "Menu Options" << std::endl;
        std::cout << "1: Save and Quit" << std::endl;
        std::cout << "2: New Animal" << std::endl;
        std::cout << "3: Load Animal" << std::endl;
        std::cout << "4: Rename Animal" << std::endl;
        std::cout << "5: Print Stats" << std::endl;
        std::cout << "6: Heal Animal" << std::endl;
        std::cout << "7: Train Animal COMING SOON" << std::endl;
        std::cout << "What would you like to do?" << std::endl;
        std::cin >> option;
        
        
        if(option == 1)
        {
            std::cout << "Please enter the name of the file you would like to save" << std::endl;
            std::cin >> fileSave;
            animal->Save(fileSave);
            delete animal;
            play = false;
        }
        
        else if(option == 2)
        {
            std::cout << "You have a created a new animal" << std::endl;
            animal = new Animal();
            PrintStats(animal);
        }
       
        else if(option ==3)
        {
            std::cout << "Please enter the name of the file you would like to load" << std::endl;
            std::cin >> fileLoad;
            animal = new Animal(fileLoad);
            PrintStats(animal);
        }
        
        else if(option == 4)
        {
            std::string newName = "";
            std::cout << "Please enter a new name for your pet" << std::endl;
            std::cin >> newName;
            animal->setName(newName);
            PrintStats(animal);
        }
        
        else if(option == 5)
        {
            PrintStats(animal);
        }
       
        else if (option == 6)
        {
            int healAmount;
            healAmount = std::rand() % healRange + 1;
            std::cout << "You pet's health increased by " << healAmount << "!" << std::endl;
            int temp = animal->getHealth();
            healAmount += temp;
            animal->setHealth(healAmount);
            PrintStats(animal);
            
        }
        
        else if (option == 7)
        {
            std::cout << "This feature is not available yet, but will be soon!" << std::endl;
        }
        else
        {
            std::cout << "You picked an invalid option. Please enter the number that represents the choice you want to make" << std::endl;
            continue;
        }
        
        
    }
    
    return 0;
}