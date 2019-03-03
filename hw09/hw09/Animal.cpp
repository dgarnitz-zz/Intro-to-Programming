#include <string>
#include "Animal.h"

Animal::Animal()
    {
        happiness = 100;
        health = 100;
        energy = 100;
        hunger = 0;
        age = 0;
        petName = "no name";
    }

Animal::Animal(int hungry, int happy, int healthy, int energyLevel, int petAge, std::string name)
    {
        happiness = happy;
        health = healthy;
        energy = energyLevel;
        hunger = hungry;
        age = petAge;
        petName = name;
    }

void Animal::setHunger(int hungry)
    {
        hunger = hungry;
    }
    
int Animal::getHunger()
    {
        return hunger;
    }

void Animal::setHappiness(int happy)
    {
        happiness = happy;
    }
    
int Animal::getHappiness()
    {
        return happiness;
    }
    
void Animal::setHealth(int healthy)
    {
        health = healthy;
    }
    
int Animal::getHealth()
    {
        return health;
    }
    
void Animal::setEnergy(int energyLevel)
    {
        energy = energyLevel;
    }
    
int Animal::getEnergy()
    {
        return energy;
    }
    
void Animal::setAge(int petAge)
    {
        age = petAge;
    }
    
int Animal::getAge()
    {
        return age;
    }
    
void Animal::setName(std::string name)
    {
        petName = name;
    }
    
std::string Animal::getName()
    {
        return petName;
    }
    
    
    //Name: Play
    //Purpose: output that you played with the dog, increase hunger and happiness
    //Paramter: no parameters
    //Return: none
void Animal::Play()
    {
        hunger += 5;
        happiness += 10;
    }
    
    //Name: Feed
    //Purpose: output that you fed the dog, decrease hunger
    //Paramters: no paramters
    //Return: none
void Animal::Feed()
    {
        hunger -= 10;
    }
    
    //Name: GiveMedicine
    //Purpose: give the dog medicine, increase health and decrease happiness
    //Paramters: no parameters
    //Return: none
void Animal::GiveMedicine()
    {
        happiness -= 20;
        health += 20;
    }
    
    //Name: Sleep
    //Purpose: increase animal energy and age
    //Parameters: no parameters
    //Return: none
void Animal::Sleep()
    {
        energy += 20;
        age += 1;
    }
    
