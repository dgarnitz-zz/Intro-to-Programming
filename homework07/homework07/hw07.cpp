//David Garnitz
//ITP 165, Fall 2015
//Homework 07
//garnitz@usc.edu

#include <iostream>
#include <string>
#include <cstdlib>

struct Card
{
    int cardRank = 0;
    std::string suite;
};

std::string cardToString(Card& first)
{
    std::string cardString = "";
    
    
    if(first.cardRank == 11)
    {
        cardString += "Jack of "+ first.suite;
    }
    else if(first.cardRank == 12)
    {
        cardString += "Queen of "+ first.suite;
    }
    else if(first.cardRank == 13)
    {
        cardString += "King of "+ first.suite;
    }
    else if(first.cardRank == 14)
    {
        cardString += "Ace of "+ first.suite;
    }
    else
    {
        cardString += std::to_string(first.cardRank);
        cardString += " of "+ first.suite;
    }
    
    return cardString;
    
    
}

Card makeCard(int &finalRank, std::string &finalSuite)
{
    Card card;
    card.cardRank = finalRank;
    card.suite = finalSuite;
    
    return card;
}

int getRandRank()
{
    const int numberRange = 13;
    int randomRank = 0;
    
    randomRank = (std::rand() % numberRange) + 2;
    
    return randomRank;
}

std::string getRandSuite()
{
    const int suiteRange = 4;
    int suiteNumber = 0;
    std::string randomSuite;
    
    suiteNumber = std::rand() % suiteRange + 1;
    
    if(suiteNumber == 1)
    {
      randomSuite = "Spades";
    }
    else if(suiteNumber == 2)
    {
        randomSuite = "Hearts";
    }
    else if(suiteNumber == 3)
    {
        randomSuite = "Clubs";
    }
    else if(suiteNumber == 4)
    {
        randomSuite = "Diamonds";
    }
    
    return randomSuite;
    
}

bool isEqual(Card& first, Card& second)
{
    bool Equal;
    
    if(first.cardRank == second.cardRank)
    {
        Equal = true;
    }
    else
    {
       Equal = false;
    }
    
    return Equal;
}

bool isLess(Card& first, Card& second)
{
    bool Less;
    
    if(first.cardRank < second.cardRank)
    {
        Less = true;
    }
    else
    {
        Less = false;
    }
    
    return Less;
}


bool isGreater(Card& first, Card& second)
{
    bool Greater;
    
    if(first.cardRank > second.cardRank)
    {
        Greater = true;
    }
    else
    {
        Greater = false;
    }
    
    return Greater;
}



int main()
{
    
    std::srand(std::time(0));
    int round = 1;
    int yourScore = 0;
    int myScore = 0;
    std::string playAgain = "";
    
    std::cout << "Welcome to the world champion High-Card tournament finals" << std::endl;
    std::cout << "It is you against me" << std::endl;
    
    do
    {
        std::cout << "They are starting round " << round << std::endl;
        std::cout << "The players are shuffling ... " << std::endl;
        std::cout << "Isn't this exciting!!!" << std::endl;
        
        int rankOne = getRandRank();
        std::string suiteOne = getRandSuite();
        int rankTwo = getRandRank();
        std::string suiteTwo = getRandSuite();
        
        
        Card myCard = makeCard(rankOne, suiteOne);
        Card yourCard = makeCard(rankTwo, suiteTwo);
        
        if(isEqual(myCard, yourCard))
        {
            std::cout << "My " << cardToString(myCard) << " is equal to your " << cardToString(yourCard)<< std::endl;
        }
        else if(isLess(myCard, yourCard))
        {
            std::cout << "My " << cardToString(myCard) << " lost to your " << cardToString(yourCard)<< std::endl;
            yourScore += 1;
        }
        else if(isGreater(myCard, yourCard))
        {
            std::cout << "My " << cardToString(myCard) << " beat your " << cardToString(yourCard)<< std::endl;
            myScore += 1;
        }
        
        std::cout << "The score is me with " << myScore << " and you with " << yourScore << std::endl;
        std::cout << "Would you like to play again? Please enter y for Yes and n for No" << std::endl;
        std::cin >> playAgain;
        
        bool responseCheck = false;
        if(playAgain != "y" && playAgain != "n")
        {
            responseCheck = true;
        }
        
        while(responseCheck)
        {
            std::cout << "You entered an invalid option. Please enter y to play again and n to quit" << std::endl;
            std::cin >> playAgain;
            if(playAgain == "y" || playAgain == "n")
            {
                responseCheck = false;
            }
        }
        
        round += 1;
        
    }
    while(playAgain == "y");
    
    return 0;
}









