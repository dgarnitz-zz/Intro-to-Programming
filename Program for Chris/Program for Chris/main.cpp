#include <iostream>
#include <string>


int main()
{
    std::string response = "";
    std::cout << "Please enter a word or phrase " <<std::endl;
    std::getline(std::cin, response);
    
    int len = response.length();
    
    for (int i=0; i < len; i++)
    {
        if(response[i]>= 'a' && response[i]<= 'z')
        {
            response[i]-=32;
        }
        
        std::cout << response[i];
    }
    
    std::cout << std::endl;
    std::cout << std::endl;
    
    //build a hex to binary converter
    //someone enters a hexidecimal, computer spits out a binary number
    
    std::string hex;
    bool looper = true;
    
    while(looper)
    {
        std::cout << "Please enter a number in hexidecimal, using lower case letters." << std::endl;
        std::cin >> hex;
        int sizes = hex.length();
        int counter = 0;
        
        for(int k=0; k < sizes; k++)
        {
            if(hex[k] >= 'a'&& hex[k] <= 'f')
            {
                counter+=1;
            }
            if(hex[k] >= '0' && hex[k] <= '9')
            {
                counter+=1;
            }
            
        }
        
        if(counter == sizes)
        {
            looper = false;
        }
        else
        {
            std::cout << "You did not enter a number in hexidecimal" << std::endl;
        }
    }
    
    //int a = 'a' - 87;
    //std::cout << a << std::endl;
    
    std::string binary;
    int sizesTwo = hex.length();
    
    for(int j; j < sizesTwo; j++)
    {
        
    }
    
    
    
    
    
    
    return 0;
}

