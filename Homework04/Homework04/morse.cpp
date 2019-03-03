// David Garnitz
// ITP 165, Fall 2015
// Homework 4
// garnitz@usc.edu


#include <iostream>
#include <string>
#include <cstdlib>


int main ()
{
    //Part One
    std::string morse[26];
    
    morse[0] = ".-";
    morse[1] = "-...";
    morse[2] = "-.-.";
    morse[3] = "-..";
    morse[4] = ".";
    morse[5] = "..-.";
    morse[6] = "--.";
    morse[7] = "....";
    morse[8] = "..";
    morse[9] = ".---";
    morse[10] = "-.-";
    morse[11] = ".-..";
    morse[12] = "--";
    morse[13] = "-.";
    morse[14] = "---";
    morse[15] = ".--.";
    morse[16] = "--.-";
    morse[17] = ".-.";
    morse[18] = "...";
    morse[19] = "-";
    morse[20] = "..-";
    morse[21] = "...";
    morse[22] = ".--";
    morse[23] = "-..-";
    morse[24] = "-.--";
    morse[25] = "--..";
    
    

    std::string sentence = "";
    std::cout << "Please type a sentence" << std::endl;
    std::getline(std::cin, sentence);
    
    //Part Two
    std::string morseCode = "";
    int length = sentence.length();
    
    
    std::string translation = "";
    int index = 0;
    
    for (int i=0; i < length; i++)
    {
        char letter = sentence[i];
        if (letter ==' ')
        {
           translation += " ";
        }
        if (letter >= 'A' && letter <= 'Z')
        {
            index = letter - 'A';
            translation += morse[index] + " ";
        }
        if (letter >= 'a' && letter <= 'z')
        {
            index = letter - 'a';
            translation += morse[index] + " ";
        }
    }
    
    std::cout << translation << std::endl;
    
    return 0;
}