//David Garnitz
//ITP 165, Fall 2015
//Lab Practical
//garnitz@usc.edu

#include <iostream>
int main ()
{
    double x;
    std::cout << "Please input the first number of the two numbers";
    std::cin >> x;
    double y;
    std::cout << "Please input the second of the two numbers";
    std::cin >> y;
    std::cout << "Would you like to 1 Add" <<std::endl;
    std::cout << "Would you like to 2 Subtract" <<std::endl;
    std::cout << "Would you like to 3 Multiply" <<std::endl;
    std::cout << "Would you like to 4 Divide" <<std::endl;
    int select;
    std::cout << "Select Your Option" <<std::endl;
    std::cin >> select;
    double result;
    switch (select)
    {
    case 1:
            result = x + y;
            std::cout << x<<  "+"<< y<< "=" <<result;
        break;
    case 2:
            result = x - y;
            std::cout << x<<  "-"<< y<< "=" <<result;
        break;
    case 3:
            result = x * y;
            std::cout << x<<  "*"<< y<< "=" <<result;
        break;
    case 4:
            if (y == 0) std::cout << "The Operation is Invalid";
            else {
                result = x / y;
                std::cout << x<<  "/"<< y<< "=" <<result;
            }
        break;
        
    }
    return 0;
}