//David Garnitz
//ITP 165, Fall 2015
//Homework 08
//garnitz@usc.edu

#include <string>
#include <iostream>
#include <fstream>



class dog
{
private:
    int hunger;
    int happiness;
    std::string petName;
public:
    void setHappiness(int happy)
    {
        happiness = happy;
    }
    
    int getHappiness()
    {
        return happiness;
    }
    
    void setHunger(int hungry)
    {
        hunger = hungry;
    }
    
    int getHunger()
    {
        return hunger;
    }
    
    void setName(std::string name)
    {
        petName = name;
    }
    
    std::string getName()
    {
        return petName;
    }
    
    //Name: PrintStats
    //Purpose: print the name, hunger, and happiness
    //Parameter: no parameters
    //Return: none
    void PrintStats()
    {
        std::cout << "Name: " << petName << std::endl;
        std::cout << "Hunger: " << hunger << std::endl;
        std::cout << "Happiness: " << happiness << std::endl;
    }
    
    //Name: Play
    //Purpose: output that you played with the dog, increase hunger and happiness
    //Paramter: no parameters
    //Return: none
    void Play()
    {
        std::cout << "Woof Woof! You played with " << petName << "!" << std::endl;
        hunger += 5;
        happiness += 10;
    }
    
    //Name: Feed
    //Purpose: output that you fed the dog, decrease hunger
    //Paramters: no paramters
    //Return: none
    void Feed()
    {
        std::cout << "Yum Yum! You fed " << petName << "!" << std::endl;
        hunger -= 10;
    }
    
};

int main()
{
    dog myDog;
    int hungry = 0;
    int happy = 0;
    std::string name = "";
    std::string fileName = "";
    std::string saveFile = "";
    bool menu = true;
    int option;
    
    std::cout << "Please input the file name" << std::endl;
    std::cin >> fileName;
    
    std::ifstream fileInput(fileName);
    
    
    if(fileInput.is_open())
    {
        fileInput >> happy;
        fileInput >> hungry;
        fileInput.ignore();
        std::getline(fileInput, name);
        myDog.setHappiness(happy);
        myDog.setHunger(hungry);
        myDog.setName(name);
        fileInput.close();
    }
    else
    {
        std::cout << "There was an error opening your file. The program is quitting..." << std::endl;
        return 0;
    }
    
    while(menu == true)
    {
        std::cout << "Please pick an option" << std::endl;
        std::cout << "1: Play with your dog" << std::endl;
        std::cout << "2: Feed your dog" << std::endl;
        std::cout << "3: Rename your dog" << std::endl;
        std::cout << "4: Print the stats of your dog" << std::endl;
        std::cout << "5: Save and Quit" << std::endl;
        std::cin >> option;
        
        switch(option)
        {
            case 1:
                myDog.Play();
                break;
            case 2:
                myDog.Feed();
                break;
            case 3:
                name = "";
                std::cout << "Enter a new name for the dog" << std::endl;
                std::cin.ignore();
                std::getline(std::cin, name);
                myDog.setName(name);
                break;
            case 4:
                myDog.PrintStats();
                break;
            case 5:
                menu = false;
                break;
            default:
                std::cout << "You entered an invalid option. The program is quitting..." << std::endl;
                menu = false;
                break;
                
        }
        
    }
    
    std::cout << "Please input the name you want to save the file as." << std::endl;
    std::cin >> saveFile;
    
    std::ofstream fileOutput(saveFile);
    
    if(fileOutput.is_open())
    {
        fileOutput << myDog.getHappiness() << std::endl;
        fileOutput << myDog.getHunger() << std::endl;
        fileOutput << myDog.getName() << std::endl;
        std::cout << "Your file was saved. THe program is quitting..." << std::endl;
        return 0;
        
    }
    else
    {
        std::cout << "Your file failed to save. The program is quitting..." << std::endl;
        return 0;
    }
    
}








