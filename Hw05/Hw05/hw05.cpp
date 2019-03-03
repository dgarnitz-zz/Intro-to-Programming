//David Garnitz
//ITP 165, Fall 2015
//Homework 05
//garnitz@usc.edu

#include "tictactoe.h"
#include <iostream>

int main()
{
    
    while(true)
    {
    char winner = 'N';
    bool validInput;
    bool whoseTurn = true;
    int userInput;
    int turnsTaken=0;
    char gameboard[9];
    std::string playAgain = "";
    
    gameboard[0] = '1';
    gameboard[1] = '2';
    gameboard[2] = '3';
    gameboard[3] = '4';
    gameboard[4] = '5';
    gameboard[5] = '6';
    gameboard[6] = '7';
    gameboard[7] = '8';
    gameboard[8] = '9';
    
    PrintBoard(gameboard);
    
    while(winner=='N')
    {
        std::cout << "Where do you want to go? Pick an available number." << std::endl;
        std::cin >> userInput;
        userInput--;
        
        validInput = IsValidMove(gameboard, userInput);
        
        if(validInput == false)
        {
            std::cout << "Invalid Move! Pick Again." << std::endl;
            std::cin.clear();
            continue;
        }
        
        char input = (char)(userInput+49);
        
        for(int i = 0; i<9; i++)
        {
            if(gameboard[i] == input)
            {
                if(whoseTurn == true)
                {
                  gameboard[i] = 'X';
                }
                else if(whoseTurn == false)
                {
                    gameboard[i] = 'O';
                }
                break;
            }
        }
        
        PrintBoard(gameboard);
        
        winner = WinnerIfAny(gameboard);
        
        if(winner == 'N' && turnsTaken > 9)
        {
            winner = 'S';
            std::cout << "Stale mate! Game over" << std::endl;
        }
        
        else if(winner == 'X')
        {
            std::cout << "X is the winner! Game over" << std::endl;
        }
        
        else if(winner == 'O')
        {
            std::cout << "O is the winner! Game over" << std::endl;
        }
        
        
        turnsTaken++;
        std::cin.clear();
        
        if(whoseTurn == true)
        {
            whoseTurn = false;
        }
        else if(whoseTurn == false)
        {
            whoseTurn = true;
        }
        
       
    }
       
        
        std::cout << "Would you like to play again?" << std::endl;
        std::cin >> playAgain;
        while(playAgain != "y" && playAgain != "n")
        {
            std::cout << "Invalid response. Please enter (y/n)" << std::endl;
            std::cin >> playAgain;
            std::cin.ignore();
            
        }
        if(playAgain == "n")
        {
            return 0;
        }
        else
        {
            continue;
        }
    
  
    }
}

