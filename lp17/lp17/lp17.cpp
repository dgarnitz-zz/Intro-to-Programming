//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 17
//garnitz@usc.edu

#include <iostream>
#include <string>
#include <fstream>

void printArrWithAdd(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << i << " = " << arr[i] << " @ " << &arr[i] <<std::endl;
    }
}

int getMax(int arr[], int size)
{
    
    int max = -1;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    return max;
}

int main()
{
    const unsigned int size = 100;
    int arr[size];
    std::string fileName = "";
    int counter = 0;
    int temp = 0;
    
    std::cout << "PLease input a file to read" << std::endl;
    std::cin >> fileName;
    
    std::ifstream inFile(fileName);
    if(!inFile.is_open())
    {
        std::cout << ":(";
        return 0;
    }
    
    counter = 0;
    while(!inFile.eof() && counter < size)
    {
        inFile >> temp;
        arr[counter] = temp;
        counter++;
        
    }
    
    printArrWithAdd(arr, size);
    
    std::cout << "The maximum value is " << getMax(arr, size) << std::endl;
    
    return 0;
}

