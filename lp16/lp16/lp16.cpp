//David Garnitz
//ITP 165, FAll 2015
//Lab Practical 16
//garnitz@usc.edu

#include <iostream>
#include "Die.hpp"

int main()
{
    Die d1, d2;
    int total, numTimes;
    
    //get and store input from the user num times
    std::cout << "How many times do you want to roll?"<< std::endl;
    std::cin >>numTimes;
    
    for(int i = 0; i < numTimes; i++)
    {
        total = d1.roll() +d2.roll();
        
        std::cout << "You rolled a " <<d1.toString() << " and a " << d2.toString()
        << " for a total of " << total << "!" << std::endl;
    }
    
    return 0;
}