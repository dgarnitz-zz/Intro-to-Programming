//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 10
//garnitz@usc.edu

#include <iostream>
#include <string>


//Function: reverseString
//Purpose: reverse a string
//Parameters: string of type reference
//Returns: revered string

std::string reverseString(std::string & referenceToUserInput)
{
  //return reverse string var
    std::string reversedString;
    
    //logic to reverse our inputString
    for (int i = referenceToUserInput.length() - 1; i>=0; i--)
    {
        //reversedString add the next character starting from end to beginning
        reversedString += referenceToUserInput[i];
    }
    
    //return our reversedString
    return reversedString;
}

int main ()
{
    std::string userInput = "";
    std::cout << "Enter a string for me to reverse" << std::endl;
    std::getline (std::cin, userInput);
    
    //print reversed string
    std::cout<< userInput << " reversed is "<< reverseString(userInput) << std::endl;
    
    return 0;
}
