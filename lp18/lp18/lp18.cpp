//David Garnitz
//ITP 165, Fall 2015
//Lab Practical 18
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
    int counter = 0;
    int sizeArray = 0;
    int temp = 0;
    std::string fileName = "";
    int* point = nullptr;
    

    
    std::cout << "PLease input a file to read" << std::endl;
    std::cin >> fileName;
    
    std::ifstream inFile(fileName);
    if(!inFile.is_open())
    {
        std::cout << ":(";
        return 0;
    }
    
    inFile >> sizeArray;
    //How did we know this would read in the size of the array?
    
    point = new int[sizeArray];
    //this points to the location of the int array, correct?
    //how do we translate from memory address of array to value stored in the array?
    
    while(!inFile.eof() && counter < sizeArray)
    {
        inFile >> temp;
        point[counter] = temp;
        counter++;
    }
    
    printArrWithAdd(point, sizeArray);

    std::cout << "The maximum value in the array is " << getMax(point, sizeArray) << std::endl;
    
    delete point;
    
    point = nullptr;
    
    return 0;
    
}
