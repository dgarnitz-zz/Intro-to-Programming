//David Garnitz
//ITP 165, Fall 2015
//Homework 2
//garnitz@usc.edu

#include <iostream>
#include <string>
#include <cmath>

int main ()
{
   //Part One
    
    //variables
    double purchasePrice = 0;
    double downPayment = 0;
    char tradeIn;
    double tradeValue = 0;
    double amountOwed = 0;
    double totalDownPayment = 0;
    double loanAmount = 0;
    double salesTax = 0;
    
    //Prompting user for car information
    std::cout << "Please enter the total purchase price of the vehicle" << std::endl;
    std::cin >> purchasePrice;
   
    std::cout << "Please enter the down payment on the car" << std::endl;
    std::cin >> downPayment;
    
    std::cout << "Do you have a car to trade in (y/n)" << std::endl;
    std::cin >> tradeIn;
    
    //Checking if user has a car to trade
    if (tradeIn == 'y' || tradeIn == 'Y')
    {
        std::cout << "What is the trade-in value of your car?" << std::endl;
        std::cin >> tradeValue;
        std::cout << "How much do you owe on the car your plan to trade in?" << std::endl;
        std::cin >> amountOwed;
    }
    
    else if (tradeIn == 'n' || tradeIn == 'N')
    {
        tradeValue = 0;
        amountOwed = 0;
    }
    
    //Sales Tax
    std::cout << "Please enter the sales tax on the transaction (for 8.25% type 8.25)" << std::endl;
    std::cin >> salesTax;
    
    //Calculating Total Down Payment & Loan Amount
    totalDownPayment = downPayment + (tradeValue - amountOwed);
    std::cout << "Your total down payment is " << totalDownPayment << std::endl;
    loanAmount = (purchasePrice - totalDownPayment) * (1 + (salesTax / 100));
    std::cout << "Your total loan amount is " << loanAmount << std::endl;
    
    
    //Part Two
    
    //variables
    int selection = 0;
    int loanYears;
    int numberOfPayments;
    
    std::cout << "Enter the length of your loan by picking from options 1 through 4" << std::endl;
    std::cout << "1: 3 Years" << std::endl;
    std::cout << "2: 4 Years" << std::endl;
    std::cout << "3: 5 Years" << std::endl;
    std::cout << "4: 6 Years" << std::endl;
    std::cout << "Select an Option" << std::endl;
    std::cin >> selection;
    
    //switch
    switch (selection)
    {
        case 1:
            loanYears = 3;
            numberOfPayments = 36;
            std::cout << "You selected a 3 year loan with 36 monthly payment" << std::endl;
            break;
        case 2:
            loanYears = 4;
            numberOfPayments = 48;
            std::cout << "You selected a 4 year loan with 48 monthly payment" << std::endl;
            break;
        case 3:
            loanYears = 5;
            numberOfPayments = 60;
            std::cout << "You selected a 5 year loan with 60 monthly payment" << std::endl;
            break;
        case 4:
            loanYears = 6;
            numberOfPayments = 72;
            std::cout << "You selected a 6 year loan with 72 monthly payment" << std::endl;
            break;
            
        default:
            loanYears = 5;
            numberOfPayments = 60;
            std::cout << "You selected a 5 year loan with 60 monthly payment" << std::endl;
            break;
    }
    
    //Part Three
    
    //Variables
    double percentDown = 0;
    double interestRate = 0;
    
    //Down Payment as a Percentage of Purchase Price
    percentDown = (totalDownPayment / purchasePrice) * 100;
    
    //Picking Interest Rate
    if (percentDown < 20)
    {
        if (loanYears == 3)
        {
            interestRate = 4.00;
            std::cout << "With " << percentDown << "% down and a 3 Year Loan, we can offer you an interest rate of 4.00%" << std::endl;
        }
        if (loanYears == 4)
        {
            interestRate = 4.33;
            std::cout << "With " << percentDown << "% down and a 4 Year Loan, we can offer you an interest rate of 4.33%" << std::endl;
        }
        if (loanYears == 5)
        {
            interestRate = 4.66;
            std::cout << "With " << percentDown << "% down and a 5 Year Loan, we can offer you an interest rate of 4.66%" << std::endl;
        }
        if (loanYears == 6)
        {
            interestRate = 5.00;
            std::cout << "With " << percentDown << "% down and a 6 Year Loan, we can offer you an interest rate of 5.00%" << std::endl;
        }
    }
    
    else if (percentDown >= 20)
    {
        if (loanYears == 3)
        {
            interestRate = 3.70;
            std::cout << "With " << percentDown << "% down and a 3 Year Loan, we can offer you an interest rate of 3.70" << std::endl;
        }
        if (loanYears == 4)
        {
            interestRate = 3.80;
            std::cout << "With " << percentDown << "% down and a 4 Year Loan, we can offer you an interest rate of 3.80%" << std::endl;
        }
        if (loanYears == 5)
        {
            interestRate = 3.90;
            std::cout << "With " << percentDown << "% down and a 5 Year Loan, we can offer you an interest rate of 3.90%" << std::endl;
        }
        if (loanYears == 6)
        {
            interestRate = 4.00;
            std::cout << "With " << percentDown << "% down and a 6 Year Loan, we can offer you an interest rate of 4.00%" << std::endl;
        }
 
    }
    
    //Part Four
    
    //Variables
    double monthlyInterest = 0;
    double monthlyPayment = 0;
    
    //Monthly Payment Calculation
    monthlyInterest = interestRate / 1200;
    double y = std::pow((1 + monthlyInterest),(-1 * numberOfPayments));
    monthlyPayment = loanAmount * ((monthlyInterest / (1 - y)));
    std::cout << "Your monthly payment is $" << monthlyPayment << " per month" << std::endl;
    
    
    return 0;
}
