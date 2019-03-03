//David Garnitz
//ITP 165, Fall 2015
//Homework 12
//garnitz@usc.edu

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include "Animal.h"
#include "Armadillo.h"


Animal* RandOpponent()
{
    Animal* enemy = new Animal;
    const int enemyOption = 5;
    int enemyChoice = std::rand() % enemyOption + 1;
    std::string enemyName = "";
    
    switch(enemyChoice)
    {
        case 1:
            enemy->setLevel(1);
            enemy->setPower(25);
            enemy->setArmour(50);
            enemy->setHealth(50);
            enemyName = "Stew the Turtle";
            enemy->setName(enemyName);
            break;
        case 2:
            enemy->setLevel(2);
            enemy->setPower(50);
            enemy->setArmour(50);
            enemy->setHealth(50);
            enemyName = "Carl the Capybara";
            enemy->setName(enemyName);
            break;
        case 3:
            enemy->setLevel(3);
            enemy->setPower(50);
            enemy->setArmour(60);
            enemy->setHealth(70);
            enemyName = "Harold the Hyena";
            enemy->setName(enemyName);
            break;
        case 4:
            enemy->setLevel(4);
            enemy->setPower(60);
            enemy->setArmour(65);
            enemy->setHealth(75);
            enemyName = "Peter the Puma";
            enemy->setName(enemyName);
            break;
        case 5:
            enemy->setLevel(5);
            enemy->setPower(75);
            enemy->setArmour(75);
            enemy->setHealth(100);
            enemyName = "Earl the Elephant";
            enemy->setName(enemyName);
            break;
        default:
            break;
            
    }
    
    return enemy;
}

void TrainAnimal(Armadillo* arm)
{
    bool menu = true;
    int trainOption = 0;
    
    while(menu == true)
    {
        std::cout << "Welcome to the Training Menu! Please pick an option" << std::endl;
        std::cout << "1: Return to previous menu" << std::endl;
        std::cout << "2: Feed" << std::endl;
        std::cout << "3: Play" << std::endl;
        std::cout << "4: Give Medicine" << std::endl;
        std::cout << "5: Sleep" << std::endl;
        std::cin >> trainOption;
        
        switch(trainOption)
        {
            case 1:
                std::cout << "Returning to previous menu" << std::endl;
                menu = false;
                break;
            case 2:
                std::cout << "You fed " << arm->getName() << "! Now " << arm->getName() << " is very happy!" << std::endl;
                arm->Feed();
                arm->PrintStats();
                break;
            case 3:
                std::cout << "You played with " << arm->getName() << "!" << std::endl;
                std::cout << "Now " << arm->getName() << " is very happy!" << std::endl;
                arm->Play();
                arm->PrintStats();
                break;
            case 4:
                std::cout << arm->getName() << " went to sleep!" << std::endl;
                arm->Sleep();
                arm->PrintStats();
                break;
            case 5:
                std::cout << "You gave " << arm->getName() << " some medicine!" << std::endl;
                arm->GiveMedicine();
                arm->PrintStats();
                break;
            default:
                std::cout << "You entered an invalid option." << std::endl;
                break;
                
        }
    }

}

void BattleOpponents(Armadillo* arm, std::vector<Animal*> enemies)
{
    bool battleMenu = true;
    int battleOption = 0;
    int numOpponents = 0;
    
    while(battleMenu == true)
    {
        std::cout << "Welcome to the Battle Menu! Please pick from the following options" << std::endl;
        std::cout << "1: Return to previous menu" << std::endl;
        std::cout << "2: Generate New Opponents" << std::endl;
        std::cout << "3: Battle Opponents" << std::endl;
        std::cout << "4: Print Stats" << std::endl;
        std::cin >> battleOption;
        
        switch(battleOption)
        {
            case 1:
                std::cout << "Exiting Battle Menu" << std::endl;
                battleMenu = false;
                break;
            case 2:
                std::cout << "How many opponents would you like to generate?" << std::endl;
                std::cout << "Choose between 1 and 10" << std::endl;
                std::cin >> numOpponents;
                if(numOpponents >= 1 && numOpponents <= 10)
                {
                    for(int i = 0; i < enemies.size(); i++)
                    {
                        delete enemies[i];
                    }
                    enemies.clear();
                    
                    for(int i = 0; i < numOpponents; i++)
                    {
                        enemies.push_back(RandOpponent());
                    }
                    
                }
                else
                {
                    std::cout << "You entered an invalid number of opponenents" << std::endl;
                }
                break;
            case 3:
                if(enemies.size() == 0)
                {
                    std::cout << "Please generate opponents" << std::endl;
                }
                
                for (int i = 0; i < enemies.size(); i++)
                {
                    
                    if(!arm->isAwake())
                    {
                        std::cout << "Pet is not awake. Please go heal it" << std::endl;
                        break;
                    }
                    if(!enemies[i]->isAwake())
                    {
                        std::cout << "Enemy is not awake. Please generate new enemies" << std::endl;
                        break;
                    }
                    if(arm->isAwake() && enemies[i]->isAwake())
                    {
                        std::string keepFighting = "";
                        std::cout << "Ready for the next fight? Enter anything to continue" << std::endl;
                        std::cin >> keepFighting;
            
                        arm->PrintStats();
                        std::cout << "VERSUS" << std::endl;
                        enemies[i]->PrintStats();
                        
                        arm->FightOpponent(enemies[i]);
                    }
                   
                }
                break;
            case 4:
                arm->PrintStats();
                break;
            default:
                std::cout << "You have entered an invalid option. Please enter again" << std::endl;
                break;
        }
    }
}


int main ()
{
    int option = 0;
    int loadOption = 0;
    std::srand(time(0));
    Armadillo* myArm = nullptr;
    std::vector<Animal*> enemies;
    
    std::cout << "Welcome to Pocket Pets!" << std::endl;
    
    while(true)
    {
        std::cout << "Would you like to load an animal from a file or create a new one?" << std::endl;
        std::cout << "1: Load armadillo from file" <<std::endl;
        std::cout << "2: Create new armadillo" << std::endl;
        std::cin >> loadOption;
        
        if(loadOption == 1)
        {
            std::string fileName;
            std::cout << "Please enter file name" << std::endl;
            std::cin >> fileName;
            myArm = new Armadillo(fileName);
            myArm->Load(fileName);
            break;
        }
        else if (loadOption == 2)
        {
            std::string animalName;
            std::cout << "Please enter animal name" << std::endl;
            std::cin >> animalName;
            myArm = new Armadillo(animalName);
            break;
        }
        else
        {
            std::cout << "Invalid option. Please enter an option again again" << std::endl;
        }
    }
    
    myArm->PrintStats();
    
    while (option != 1)
    {
        std::cout << "Please pick from the following menu" << std::endl;
        std::cout << "1: Quit" << std::endl;
        std::cout << "2: TrainAnimal" << std::endl;
        std::cout << "3: BattleOpponents" << std::endl;
        std::cin >> option;
        
        if(option == 1)
        {
            std::string wantToSave = "";
            std::cout << "Would you like to save yor pet before you quit?" << std::endl;
            std::cin >> wantToSave;
            if(wantToSave == "Y" || wantToSave == "y")
            {
                std::string saveFile = "";
                std::cout << "Please enter a name to save your file under" << std::endl;
                std::cin >> saveFile;
                myArm->Save(saveFile);
            }
        }
        else if(option == 2)
        {
            TrainAnimal(myArm);
        }
        else if(option == 3)
        {
            BattleOpponents(myArm, enemies);
        }
        else
        {
            std::cout << "You have entered an invalid option. " << std::endl;
        }
        
    }
  
    delete myArm;
    
    return 0;
}

