//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 13
//garnitz@usc.edu

#include <string>
#include <iostream>
#include <fstream>

//Function: toUpper
//Purpose: upper case a string given as input
//Parameters: string passed by reference
//Return: string

std::string toUpper(std::string& str)
{
    std::string upperCase;
    int len = str.length();
    
    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    
    return str;
}

int main ()
{
    std::string iFileName;
    std::string oFileName;
    
    std::cout << "Enter the name of the file to capitalize: " << std::endl;
    std::cin >> iFileName;
    std::cout << "Enter the name of the output file: " << std::endl;
    std::cin >> oFileName;
    
    std::ifstream ifile(iFileName);
    std::ofstream ofile(oFileName);
    
    if (ifile.is_open() && ofile.is_open())
    {
        while (!ifile.eof())
        {
            std::string line;
            
            std::getline(ifile, line);
            
            line = toUpper(line);
            
            ofile << line << std::endl;
        }
        ifile.close();
        ofile.close();
        
    }
    else
    {
        std::cout << "File could not open" << std::endl;
    }
    
}
