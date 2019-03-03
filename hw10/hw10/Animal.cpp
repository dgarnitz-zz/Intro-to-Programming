
#include <string>
#include <iostream>
#include <fstream>
#include "Animal.h" 

Animal::Animal()
{
    mName = "Animal";
    mHealth = 70;
    mPower = 60;
    mArmour = 50;
    
}

Animal::Animal(std::string name, int health, int power, int armour)
{
    mName = name;
    mHealth = health;
    mPower = power;
    mArmour = armour;
}

Animal::Animal(std::string fileName)
{
    std::ifstream fin(fileName);
    if (fin.is_open())
    {
        fin >> mHealth;
        fin >> mPower;
        fin >> mArmour;
        fin.ignore();
        std::getline(fin, mName);
    }
}

std::string Animal::getName()
{
    return mName;
}

void Animal::setName(std::string name)
{
    mName = name;
}

int Animal::getHealth()
{
    if(mHealth <0)
    {
        mHealth = 0;
    }
    
    else if(mHealth > 100)
    {
        mHealth = 100;
    }
    
    return mHealth;
}

void Animal::setHealth(int health)
{
    mHealth = health;
}

int Animal::getPower()
{
    if(mPower < 0)
    {
        mPower = 0;
    }
    
    else if(mPower > 100)
    {
        mPower = 100;
    }
    
    return mPower;
}

void Animal::setPower(int power)
{
    mPower = power;
}

int Animal::getArmour()
{
    if(mArmour < 0)
    {
        mArmour = 0;
    }
    
    else if(mArmour > 100)
    {
        mArmour = 100; 
    }
    
    return mArmour;
}

void Animal::setArmour(int armour)
{
    mArmour = armour;
}

//Name: Load
//Purpose: Opens file to read in animal data to temporary variables, CLOSES the file,
//then sets animal data with temp variable values - sets animal data to default values if file open failed
//Parameters: string of file name to be opened
//Return: none
void Animal::Load(std::string fileName)
{
    std::ifstream fin(fileName);
    if (fin.is_open())
    {
        fin >> mHealth;
        fin >> mPower;
        fin >> mArmour;
        fin.ignore();
        std::getline(fin, mName);
    }
    else
    {
        std::cout << fileName << " failed to load." << std::endl;
    }
   
}

//Name: Save
//Purpose: Opens a file to write CURRENT animal data to, then CLOSES the file, does nothing if file open failed
//Parameters: string of file name to be opened
//Return: none
void Animal::Save(std::string fileName)
{
    std::ofstream fout(fileName);
    if (fout.is_open())
    {
        fout << mHealth << std::endl;
        fout << mPower << std::endl;
        fout << mArmour << std::endl;
        fout << mName << std::endl;
        std::cout << "Your save was successful" << std::endl; 
    }
    else
    {
        std::cout << fileName << " failed to save." << std::endl;
    }
}





