//David Garnitz
//ITP 165, Fall 2015
//Lab practical 8
//garnitz@usc.edu

#include <iostream>
#include <cmath>

int main ()
{
    int binary[8];
    
    for (int i=7; i>=0; i--)
    {
        std::cout << "Please enter in a bit, with either a 0 or 1" << std::endl;
        std::cin >> binary[i];
    }
    
    int result =0;
    
    for (int j=7; j>=0; j--)
    {
        if (binary[j]==0)
        {
            result += 0;
        }
        if (binary[j] ==1)
        {
            result += std::pow(2,j);
        }
    }
    
    for (int k=7; k>=0; k--)
    {
        std::cout << binary[k];
    }
    
    std::cout << " in binary is " << result << " in decimal" << std::endl;
    
    return 0;
}

