//David Garnitz
//ITP 165, FAll 2015
//Lab Practical 4
//garnitz@usc.edu

#include <iostream>
#include <string>

int main ()
{
    //variables
    long long number = 0;
    long long result = 1;
    
    while (number >= 0)
    {
    
        std::cout << "Please input a number" << std::endl;
        std::cout << "Enter a negative number to quit." << std::endl;
        std::cin >> number;
        if (number >=0)
        {
        while (number > 0)
        {
            result = result * number;
            number --;
            std::cout << "The result equals to " << result << std::endl;
        }
        std::cout << result << std::endl;
        }
    }
    
    std::cout << "Quitting!" << std::endl;
    
    return 0;
}
