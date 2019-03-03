//David Garnitz
//ITP 165, Fall 2015
//Homework 09
//garnitz@usc.edu

#include <string>
#include <iostream>
#include <fstream>
#include "Animal.h"
#include "FileIO.h"


//Name: PrintStats
//Purpose: Display statistics
//Parameters: object of your animal class
//Return: None
void PrintStats(Animal& animal)
{
    std::cout << "The happiness level of your pet is: " << animal.getHappiness()  << std::endl;
    std::cout << "The hunger level of your pet is: " << animal.getHunger() << std::endl;
    std::cout << "The health level of your pet is: " << animal.getHealth() << std::endl;
    std::cout << "The energy level of your pet is: " << animal.getEnergy() << std::endl;
    std::cout << "The age of your pet is: " << animal.getAge() << std::endl;
    std::cout << "The name of your pet is: " << animal.getName() << std::endl;
    
}

int main()
{
    int hungry = 0;
    int happy = 0;
    int health = 0;
    int energy = 0;
    int age = 0;
    std::string name;
    std::string fileName = "";
    std::string saveFile = "";
    bool menu = true;
    bool upload = false;
    bool save = false;
    int option;
    
    Animal myDog(hungry, happy, health, energy, age, name);
    
    
    while(menu == true)
    {
        std::cout << "Please pick an option" << std::endl;
        std::cout << "1: Save and Quit" << std::endl;
        std::cout << "2: Load Animal" << std::endl;
        std::cout << "3: Feed" << std::endl;
        std::cout << "4: Play" << std::endl;
        std::cout << "5: Sleep" << std::endl;
        std::cout << "6: Give Medicine" << std::endl;
        std::cout << "7: Rename" << std::endl;
        std::cout << "8: Print Stats" << std::endl;
        std::cin >> option;
        
        switch(option)
        {
            case 1:
                std::cout << "Please input file name" << std::endl;
                std::cin >> saveFile;
                save = SaveAnimalData(saveFile, name, health, happy, hungry, energy, age);
                break;
            case 2:
                std::cout << "Please input file name" << std::endl;
                std::cin >> fileName;
                upload = GetAnimalData(fileName, name, health, happy, hungry, energy, age);
                break;
            case 3:
                myDog.Feed();
                std::cout << "You fed " << name << "! Now " << name << " is very happy!" << std::endl;
                break;
            case 4:
                myDog.Play();
                std::cout << "You played with " << name << "! Now " << name << " is very happy!" << std::endl;
                break;
            case 5:
                myDog.Sleep();
                std::cout << name << " went to sleep!" << std::endl;
                break;
            case 6:
                myDog.GiveMedicine();
                std::cout << "You gave " << name << " some medicine!" << std::endl;
                break;
            case 7:
                name = "";
                std::cout << "Enter a new name for the dog" << std::endl;
                std::cin.ignore();
                std::getline(std::cin, name);
                myDog.setName(name);
                break;
            case 8:
                PrintStats(myDog);
                break;
            default:
                std::cout << "You entered an invalid option. The program is quitting..." << std::endl;
                menu = false;
                break;
                
        }
     
       if(upload == false && option == 2)
        {
            std::cout << "Your upload was not successful. The program will now quit" << std::endl;
            menu = false;
        }
       else if(upload == true )
           {
               std::cout << "You successfully uploaded a file" << std::endl;
               myDog.setAge(age);
               myDog.setEnergy(energy);
               myDog.setHappiness(happy);
               myDog.setHealth(health);
               myDog.setName(name);
               myDog.setHunger(hungry);
               upload = false;
           }
        
        if(save == false && option == 1)
        {
            std::cout << "Your save attempt was not successful. The program will now quit" << std::endl;
            menu = false;
        }
        else if(save == true)
        {
            std::cout << "Your save attempt was successful. The program will now quit" << std::endl;
            menu = false; 
        }
        
    }
    
  
}








