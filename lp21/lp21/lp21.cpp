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
    std::string input = "";
    char split = ',';
    std::cout << "Please input a comma-sperated list of words" << std::endl;
    std::cin >> input;
    

    std::vector<std::string> words;
    words = strSplit(input, split);
    
}

