//David Garnitz
//ITP 165, Fall 2015
//Lab practical 2
//garnitz@usc.edu

#include <iostream>
int main()

{
    int x = 0;
    std::cout << "Enter your favorite number"
    std::cin >> x;
    
    if (x % 2 == 0 )
    {
    std:cout << "Your number is divisible by 2"
    }
    
    if (x % 3 == 0 )
    {
    std::cout << "Your number is divisible by 3"
    }
    
    if (x % 5 == 0 )
    {
    std:cout << "Your number is divisible by 5"
    }
    
    if (x % 7 == 0)
    {
    std:cout << "Your number is divisible by 7"
    }
    
    if (x % 11 == 0)
    {
    std:cout << "Your number is divisible by 11"
    }
    
    return 0;
        }