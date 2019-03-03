// David Garnitz
// ITP165, FAll 2015
// Homework 1
// garnitz@usc.edu

#include <iostream>
#include <string>

int main ()
{
    //variables
    int feet = 0;
    int inches = 0;
    double weight = 0;
    int height = 0;
    double meters = 0;
    double kilograms = 0;
    double bmi = 0;
    std::string name = "";
    
    std::cout << "Please input your name" << std::endl;
    std::cin >> name;
    
    std::cout << "What is your height in feet and inches? Please enter the number of feet first" << std::endl;
    std::cin >> feet;
    
    std::cout << "Please enter the number of inches" << std::endl;
    std::cin >> inches;
    
    std::cout << "Please enter your weight in pounds" << std::endl;
    std::cin >> weight;
    
    //calculations
    height = (feet * 12) + inches;
    meters = height / 39.3701;
    
    kilograms = weight / 2.20462;
    
    bmi = kilograms / (meters * meters);
    
    std::cout << name << " your BMI is " << bmi << std::endl;
    
    return 0;
    
}