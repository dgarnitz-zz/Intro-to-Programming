//David Garnitz
//ITP 165
//Lab Practical #01 -- Solution
//garnitz@usc.edu

#include <iostream>
#include <string>

int main ()
{
    //variables
    std::string animal = "";
    std::string verb = "";
    int numAnimals = 0;
    int calculatedNumAnimals = 0;
    
    //prompt the user for input
    std::cout << "Welcome to madlibs 1.0!" << std::endl;
    std::cout << "Please give me a type of animal (in plural form): ";
    std::cin >> animal;
    std::cout << "Please can I have a verb ending with \"ing\"";
    std::cin >> verb;
    std::cout << "Can I please have a whole number";
    std::cin >> numAnimals;
    
    //calculations
    calculatedNumAnimals = numAnimals * 2;
    
    //output the results
    std::cout << std::endl;
    std::cout << "The " << animal << " goes " << verb << " in pair.";
    std::cout << "That means there were " << calculatedNumAnimals << "in total" << std::endl;
    
    return 0;
}