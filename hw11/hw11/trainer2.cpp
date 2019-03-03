//David Garnitz
//ITP 165, Fall 2015
//Homework 11
//garnitz@usc.edu

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "animal.h"



Animal* RandOpponent()
{
    Animal* animals = nullptr;
    animals = new Animal();
    
    animals->setHealth(50);
    
    const int levelRange = 5;
    int level = std::rand() % levelRange + 1;
    animals->setLevel(level);
    
    const int powerRange = 20;
    int power = std::rand() % powerRange + 20;
    animals->setPower(power);
    
    const int armourRange = 20;
    int armour = std::rand() % armourRange + 20;
    animals->setArmour(armour);

    animals->setXP(0); 
    
    std::string OppName = "Opponent";
    animals->setName(OppName);
    
    return animals;
}

int main()
{
    std::srand(std::time(0));
    Animal* animal = nullptr;
    std::string petName = "";
    const int healRange = 40;
    int option = 0;
    bool play = true;
    std::vector<Animal*> enemies;
    
    std::cout << "Please input a name for your new animal" << std::endl;
    std::getline(std::cin, petName);
    animal = new Animal(petName);
    
    while(play)
    {
        std::cout << "Please pick from the following menu options" << std::endl;
        std::cout << "1: Quit" << std::endl;
        std::cout << "2: Print Stats" << std::endl;
        std::cout << "3: Heal Animal" << std::endl;
        std::cout << "4: Train Animal" << std::endl;
        std::cin >> option;
        
        if(option == 1)
        {
            std::cout << "The program will now end" << std::endl;
            delete animal;
            play = false;
        }
        
        else if(option == 2)
        {
            animal->PrintStats();
        }
        
        else if(option == 3)
        {
            int petHeal = std::rand() % healRange + 10;
            std::cout << "You healed your pet by " << petHeal << "!" << std::endl;
            petHeal += animal->getHealth();
            animal->setHealth(petHeal);
            
        }
        
        else if (option == 4)
        {
            const int possibleOpponents = 3;
            int numOpponents = std::rand() % possibleOpponents + 1;
            
            for(int i = 0; i < numOpponents; i++)
            {
                Animal* opp = RandOpponent();
                enemies.push_back(opp);
            }
            
            while (!enemies.empty())
            {
                Animal* ene = enemies.back();
                
                if(animal->isAwake())
                {
                    std::string keepFighting = "";
                    std::cout << "Ready for the next fight? Enter anything to continue" << std::endl;
                    std::cin >> keepFighting;

                    animal->PrintStats();
                    std::cout << "VERSUS" << std::endl;
                    ene->PrintStats();
                    
                    animal->FightOpponent(ene);
                }
                
                enemies.pop_back();
            }
        }
        
        else
        {
            std::cout << "You have entered an invalid option. Pick input only a number" << std::endl;
        }
        
    }
    
    
    
    return 0;
}

