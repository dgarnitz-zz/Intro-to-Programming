

#include "Armadillo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

//constructors
Armadillo::Armadillo(std::string petName) : Animal(petName)
{
    happiness = 100;
    hunger = 0;
    energy = 100;
    age = 0;
}

//getters
int Armadillo::getHappiness ()
{
    return happiness;
}
int Armadillo::getHunger()
{
    return hunger;
}
int Armadillo::getEnergy()
{
    return energy;
}
int Armadillo::getAge()
{
    return age;
}

//Setters
void Armadillo::setHappiness(int happy)
{
    if(happy >= 1 && happy <=99)
    {
        happiness = happy;
    }
    else if(happy > 99)
    {
        happiness = 99;
    }
    else if(happy < 1)
    {
        happiness = 0;
        energy -= 10;
    }
}

void Armadillo::setHunger(int hungry)
{
    if(hungry >= 1 && hungry <= 99)
    {
        hunger = hungry;
    }
    else if(hungry > 99)
    {
        hunger = 99;
    }
    else if(hungry < 1)
    {
        hunger = 0;
        happiness -= 10;
    }
}

void Armadillo::setEnergy(int energyLevel)
{
    if(energyLevel >= 1 && energyLevel <= 99)
    {
        energy = energyLevel;
    }
    else if(energyLevel > 99)
    {
        energy = 99;
    }
    else if (energyLevel < 1)
    {
        energy = 0;
        mHealth -= 10; 
    }
}

void Armadillo::setAge(int ageLevel)
{
    if(ageLevel >= 0)
    {
        age = ageLevel;
    }
    else
    {
        age = 0; 
    }
}

//Feed
void Armadillo::Feed()
{
    int exp = mXP + 10;
    setXP(exp);
    int hap = happiness + 5;
    setHappiness(hap);
    int hung = hunger - 10;
    setHunger(hung);
    int ene = energy -10;
    setEnergy(ene);
}

//Play
void Armadillo::Play()
{
    int exp = mXP + 30;
    setXP(exp);
    int hap = happiness + 10;
    setHappiness(hap);
    int hung = hunger + 20;
    setHunger(hung);
    int ene = energy -20;
    setEnergy(ene);
}

//GiveMedicine
void Armadillo::GiveMedicine()
{
    int exp = mXP + 10;
    setXP(exp);
    int hel = mHealth + 20;
    setHealth(hel);
    int hap = happiness - 20;
    setHappiness(hap);
    int hung = hunger + 10;
    setHunger(hung);
    int ene = energy - 5;
    setEnergy(ene);
    
}

//Sleep
void Armadillo::Sleep()
{
    int exp = mXP + 5;
    setXP(exp);
    int hung = hunger + 10;
    setHunger(hung);
    int ene = energy + 20;
    setEnergy(ene);
    int ag = age + 1;
    setAge(ag);
}

//Load
void Armadillo::Load(std::string fileLoad)
{
    std::ifstream fin(fileLoad);
    if (fin.is_open())
    {
        fin >> mHealth;
        fin >> mPower;
        fin >> mArmour;
        fin >> mLevel;
        fin >> mXP;
        fin >> happiness;
        fin >> hunger;
        fin >> energy;
        fin >> age;
        fin.ignore();
        std::getline(fin, mName);
        std::cout << "Your load was successful" << std::endl;
        fin.close();
    }
    else
    {
        std::cout << "You load was unsuccessful" << std::endl;
    }
}

//Save
void Armadillo::Save(std::string fileSave)
{
    std::ofstream fout(fileSave);
    if (fout.is_open())
    {
        fout << mHealth << std::endl;
        fout << mPower << std::endl;
        fout << mArmour << std::endl;
        fout << mLevel << std::endl;
        fout << mXP << std::endl;
        fout << happiness << std::endl;
        fout << hunger << std::endl;
        fout << energy << std::endl;
        fout << age << std::endl;
        fout << mName << std::endl;
        std::cout << "Your save was successful" << std::endl;
        fout.close();
    }
    else
    {
        std::cout << "You save was unsuccessful" << std::endl;
    }
}

//PrintStats
void Armadillo::PrintStats()
{
    std::cout << "The stats of your animal are as follow" << std::endl;
    std::cout << "Health: " << mHealth << std::endl;
    std::cout << "Power: " << mPower << std::endl;
    std::cout << "Armour: " << mArmour << std::endl;
    std::cout << "Level: " << mLevel << std::endl;
    std::cout << "Experience: " << mXP << std::endl;
    std::cout << "Happiness: " << happiness << std::endl;
    std::cout << "Hunger: " << hunger << std::endl;
    std::cout << "Energy: " << energy << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Name: " << mName << std::endl; 
}



