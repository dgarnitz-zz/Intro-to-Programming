// David Garnitz
// ITP 165, Fall 2015
// Lab Practical 9
// garnitz@usc.edu

#include <iostream>

//user functions
int add(int x, int y)
{
    return x + y;
}


int sub(int x, int y)
{
    return x - y;
}


int mul( int x, int y)
{
    return x * y;
}


int dev(int x, int y)
{
    if (y==0)
    {
        std::cout << "You can't do that! You may not have 0 in the denominator" << std::endl;
        return 0;
    }
    
    return x / y;
}


int exp(int x, int y)
{
    if (y < 0)
    {
        std::cout << "You can't have a negative exponent" << std::endl;
        return 0;
    }
    
    int retVal = 1;
    for (int j = y; j > 0; j--)
    {
        retVal *= x;
    }
    return retVal;
}

int main()
{
    int firstOperand, secondOperand;
    int operationChoice;
    
    do
    {
        std::cout << "Enter a number for your first operand please" << std::endl;
        std::cin >> firstOperand;
        std::cout << "Enter a number for your second operand please" << std::endl;
        std::cin >> secondOperand;
        
        std::cout << "Type 0 to quit" << std::endl;
        std::cout << "Type 1 to add" << std::endl;
        std::cout << "Type 2 to subtract" << std::endl;
        std::cout << "Type 3 to multiply" << std::endl;
        std::cout << "Type 4 to divide" << std::endl;
        std::cout << "Type 5 to exponent" << std::endl;
        std::cout << "Enter your option" << std::endl;
        std::cin >> operationChoice;
    
        switch (operationChoice)
        {
            case 1:
                std::cout << firstOperand << "+" << secondOperand << " = " << add(firstOperand, secondOperand) << std::endl;
                break;
            case 2:
                std::cout << firstOperand << "-" << secondOperand << " = " << sub(firstOperand, secondOperand) << std::endl;
                break;
            case 3:
                std::cout << firstOperand << "*" << secondOperand << " = " << mul(firstOperand, secondOperand) << std::endl;
                break;
            case 4:
                std::cout << firstOperand << "/" << secondOperand << " = " << dev(firstOperand, secondOperand) << std::endl;
                break;
            case 5:
                std::cout << firstOperand << "^" << secondOperand << " = " << exp(firstOperand, secondOperand) << std::endl;
                break;
            
        }
    } while (operationChoice != 0);
        std::cout << "Quitting" << std::endl;

    
    return 0;
   
}