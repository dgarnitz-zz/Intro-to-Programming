//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 11
//garnitz@usc.edu

#include <iostream>
#include <cstring>

//Part One

//function: Greeting
//purpose: print a greeting to the screen
//parameter: none
//return: nothing

void Greeting()
{
    std::cout << "Hello! Have a great day" << std::endl;
}


//function: Greeting
//purpose: print a generalized greeting
//parameters: a string
//return: nothing

void Greeting(std::string name)
{
    std::cout << "Hello " << name << "! Have a great day" << std::endl;
}


//function: greeting
//purpose: store the personalized message based on name into the name variable
    //passed by reference
//paramters: a string of type reference
//returns: nothing

//void Greeting(std::string& name)
// {
    //std::cout << "Hello " << name << "! Have a great day" << std::endl;
// }

//reverse function

void reverseString(std::string & referenceToUserInput)
{
    //return reverse string var
    std::string reversedString;
    
    //logic to reverse our inputString
    for (int i = referenceToUserInput.length() - 1; i>=0; i--)
    {
        //reversedString add the next character starting from end to beginning
        reversedString += referenceToUserInput[i];
    }
    
    referenceToUserInput = reversedString;
}


int main ()
{
    //Part One
    //1a
    Greeting();
    
    //1b
    Greeting("Fun Name");
    
    //1c
    std::string name;
    std::cout << "Enter your name please " << std::endl;
    std::cin >> name;
    Greeting(name);
    std::cin.ignore();
    
    //Part Two
    std::string referenceToUserInput;
    std::cout << "Enter a string to reverse, please" << std::endl;
    std::getline(std::cin, referenceToUserInput);
    reverseString(referenceToUserInput);
    std::cout << "Your reverse string is " << referenceToUserInput << std::endl;
    
    return 0;

}








