

#pragma once

#include "Animal.h"
#include <string>

class Armadillo : public Animal
{
private:
    int happiness;
    int hunger;
    int energy;
    int age;
public:
    //constructors
    Armadillo(std::string petName);
    //getters
    int getHappiness();
    int getHunger();
    int getEnergy();
    int getAge();
    //setters
    void setHappiness(int happy);
    void setHunger(int hungry);
    void setEnergy(int energyLevel);
    void setAge(int ageLevel);
    //Name: Feed
    //Purpose: increase experience and happiness, decrease hunger and energy
    //Parameters: none
    //Return: none
    void Feed();
    //Name: Play
    //Purpose: increase experience, happiness and hunger, decrease energy
    //Paramters: none
    //Return: none
    void Play();
    //Name: GiveMedicine
    //Purpose: increase experience, health, and hunger, decrease happiness
    //Paramters: none
    //Return: none
    void GiveMedicine();
    //Name: Sleep
    //Purpose: increase experience, hunger, energy and age
    //Parameters: none
    //Return: none
    void  Sleep();
    //Name: Load
    //Purpose: open a file and read in information to a new animal
    //Paramters: a string variable for the file name
    //Return: none
    void Load(std::string fileLoad);
    //Name: Save
    //Purpose: saves information about the animal to a new file
    //Paramters: a string variable for the file name
    //Return: none
    void Save(std::string fileSave);
    //Name: PrintStats
    //Purpose: output the Armadillo's private member variables to the user
    //Parameters: none
    //Return: none
    void PrintStats();
    
};