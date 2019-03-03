//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 12
//garnitz@usc.edu

#include <iostream>
#include <cstdlib>



int main ()
{
    //declare global variables or constants
    const int NUM_RANGE = 10;
    int compyNum = 0;
    int userNum = 0;
    
    std::srand(std::time(0));
    compyNum = std::rand() % NUM_RANGE + 1;
    
        //Variable for user guess
    
    std::cout << "I'm think of a number between 1 and 10" << std::endl;
    std::cout << "Can you guess it?" << std::endl;
    
    
    do
    {
        std::cout << "Guess my number: " << std::endl;
        std::cin >> userNum;
        
        if (userNum < compyNum)
        {
            std::cout << "Too Low..." << std::endl;
        }
        else if (userNum > compyNum)
        {
            std::cout << "Too High..." << std::endl;
        }
        else
        {
            std::cout << "You guessed my number!" << std::endl;
        }

    }

    while (userNum != compyNum);
    

    return 0;
}