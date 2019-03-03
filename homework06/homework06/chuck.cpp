//David Garnitz
//ITP 165, Fall 2015
//Homework 06
//garnitz@usc.edu

#include <string>
#include <iostream>
#include <cstdlib>

int roll()
{
    const int numberRange = 6;
    int randomDiceRoll = 0;
    
    randomDiceRoll = std::rand() % numberRange + 1;
    return randomDiceRoll;
}

void roll(int diceRolls[], int numberOfDice)
{
    for(unsigned int i = 0; i < numberOfDice; i++)
    {
        diceRolls[i] = roll();
    }
}

void displayRoll(int diceRolls[], int numberOfDice)
{
    for (unsigned int i = 0; i < numberOfDice; i++)
    {
        std::cout << "You rolled a  " << diceRolls[i] << std::endl;
    }
}

int computeBetResult(int diceRolls[], int numberOfDice, int userBet, int userNumberBet)
{
    int amountWon = 0;
    int counter = 0;
    
    for (unsigned int i = 0; i < numberOfDice; i++)
    {
        if (diceRolls[i] == userNumberBet)
        {
            counter += 1;
        }
    }
    
    if (counter == 0)
    {
        amountWon = (-1) * userBet;
        std::cout << "You matched 0 dice!" << std::endl;
        std::cout << "You lost your bet" << std::endl;
    }
    
    if (counter == 1)
    {
        amountWon = userBet;
        std::cout << "You matched 1 dice!" << std::endl;
        std::cout << "You won $"<< amountWon << std::endl;
    }
    
    if (counter == 2)
    {
        amountWon = 3 * userBet;
        std::cout << "You matched 2 dice!" << std::endl;
        std::cout << "You won $"<< amountWon << std::endl;
    }
    
    if (counter == 3)
    {
        amountWon = 10 * userBet;
        std::cout << "You matched 3 dice!" << std::endl;
        std::cout << "You won $"<< amountWon << std::endl;
    }
    
    return amountWon;
}



int main()
{
    const int numberOfDice = 3;
    std::srand(std::time(0));
    int Money = 100;
    int userBet = 0;
    int userNumberBet = 0;
    std::string answer;
    int diceRolls[numberOfDice];
    bool keepRunning;
    
    do
    {
        std::cout << "Welcome to Chuck-A-Luck" << std::endl;
        std::cout << "You have $" << Money << ". How much would you like to bet?" << std::endl;
        std::cin >> userBet;
        
        while (userBet < 0 || userBet > Money)
        {
            std::cout << "You have entered an invalid bet" << std::endl;
            std::cout << "You may not bet less than 0 or money than " << Money << std::endl;
            std::cout << "Please enter a new bet" << std::endl;
            std::cin >> userBet;
        }
        
        std::cout << "Choose a number between 1 and 6 to bet on" << std::endl;
        std::cin >> userNumberBet;
        
        while (userNumberBet < 1 || userNumberBet > 6)
        {
            std::cout << "You have picked an invalid number to bet on " << std::endl;
            std::cout << "Enter a number between 1 and 6 to bet on" << std::endl;
            std::cin >> userNumberBet;
        }
        
        std::cout << "You have bet $" << userBet << " on " << userNumberBet << std::endl;
        
        roll(diceRolls, numberOfDice);
        
        displayRoll(diceRolls, numberOfDice);
        
        Money += computeBetResult(diceRolls, numberOfDice, userBet, userNumberBet);
        
        
        std::cout << "You have $" << Money << " left to bet." << std::endl;
        std::cout << "Would you like to play again? Please enter Y/y for yes and N/n for no." << std::endl;
        std::cin >> answer;
        
        if (answer == "y")
        {
            keepRunning = true;
            if (Money == 0)
            {
                std::cout << "You have run out of money. Game Over!" << std::endl;
                keepRunning = false;
            }
        }
        else if (answer == "Y")
        {
            keepRunning = true;
            if (Money == 0)
            {
                std::cout << "You have run out of money. Game Over!" << std::endl;
                keepRunning = false;
            }
        }
        else
        {
            keepRunning = false;
        }
        
            
        
    }
    while (keepRunning);
    
    
    return 0;
}