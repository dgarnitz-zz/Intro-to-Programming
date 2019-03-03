//David Garnitz
//ITP 165, Fall 2015
//Lap Practical 21
//garnitz@usc.edu

#include <string>
#include <iostream>
#include <vector>
#include "StrLib.h"

int main()
{
    double sum = 0;
    std::string input = "";
    char split = ',';
    std::cout << "Please input a comma-sperated list of words" << std::endl;
    std::cin >> input;
    
    
    std::vector<std::string> words;
    words = strSplit(input, split);
    
    for(int i = 0; i < words.size(); i ++)
    {
        sum += words[i].size();
    }
    
    sum = (sum / words.size());
    
    std::cout << "The average word length was " << sum << "." << std::endl;
    
    return 0;
    
}

