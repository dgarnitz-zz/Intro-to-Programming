//David Garnitz
//ITP 165, Fall 2015
//Lab 5
//garnitz@usc.edu

#include <string>
#include <iostream>
#include <cmath>

int main ()
{
    //DAVID is 5 characters long
    const int ARR_SIZE = 5;
    //Make an array with each letter of my name
    //name as an element of the array
    std::string myName[ARR_SIZE] =
    {
        "D",
        "A",
        "V",
        "I",
        "D"
    };
    
    std::string poem[ARR_SIZE];
    
    std::cout << "Let's make a poem!" << std::endl;
    
    //Prompt for input
    for (int i = 0; i < ARR_SIZE; i++)
    {
        std::cout << "What word describes you, starting with a " << myName[i] << ":";
        std::cin >> poem[i];
        //poem is an array, poem[i] is a single string, must cin to single string
    }
    
    //Make a blank line
    std::cout << std::endl;
    //Display user's name
    for (int i=0; i < ARR_SIZE; i++)
    {
        std::cout << myName[i];
    }
    
    std::cout << std::endl;
    //Display poem
    for (int i=0; i < ARR_SIZE; i++)
    {
        std::cout << myName[i] << " is for " << poem[i] << std::endl;
        //since you are accessing singular elements in one array and matching them to singular elements in another array, you must include the square brackets
    }
    
    return 0;
}


