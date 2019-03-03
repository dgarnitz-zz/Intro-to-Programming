// Name
// ITP 165, Fall 2015
// Lab Practical 7
// garnitz@usc.edu

#include "Sound.h"
#include <iostream>
#include <string>
#include <cmath>

int main ()
{
    int beats = 0;
    
    std::cout << "Please input the number of beats per minute" << std::endl;
    std::cin >> beats;
    
    
    while (beats < 100 || beats > 1200)
    {
        if (beats < 100)
        {
            std::cout << "This number is too small and cannot be accepted" << std::endl;
            std::cout << "Please input a new number" << std::endl;
            std::cin >> beats;
        }
        
        if (beats > 1200)
        {
            std::cout << "This number is too big and cannot be accepted" << std::endl;
            std::cout << "Please input a new number" << std::endl;
            std::cin >> beats;
        }
        
    }
    
   
    std::cout << "Twinkle Twinkle Little Star is now playing" << std::endl;
    
    initSound();
    
    setBPM(beats);
    
    addC(1);
    addC(1);
    addG(1);
    addG(1);
    addA(1);
    addA(1);
    addG(2);
    
    playSound();
    
    
    return 0;
}