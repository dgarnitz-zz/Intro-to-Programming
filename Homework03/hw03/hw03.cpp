//David Garnitz
//ITP 165, Fall 2015
//Homework 3
//garnitz@usc.edu

#include <string>
#include <iostream>
#include <cmath>

int main ()
{
    //Part One
    
    std::string questions[13];
    
    questions[0]= "It is easy for you to communicate in social situations";
    questions[1]= "You are a person somewhat reserved and distant in communication";
    questions[2]= "You enjoy having a wide circle of acquaintances";
    questions[3]= "After prolonged socializing you feel you need to get away and be alone";
    questions[4]= "You spend your leisure time actively socializing with a group of people, attending parties, shopping, etc";
    questions[5]= "You find it difficult to speak loudly";
    questions[6]= "You rapidly get involved in the social life of a new workplace";
    questions[7]= "Often you prefer to read a book than go to a party";
    questions[8]= "The more people you speak to, the better you feel";
    questions[9]= "You prefer to isolate yourself from outside noises";
    questions[10]= "When with a group of people, you enjoy being directly involved and being at the center of attention";
    questions[11]= "You prefer to spend your leisure time alone or relaxing in a tranquil atmosphere";
    questions[12]= "You feel at ease in a crowd";
    
    int responses[13];
    double calculations = 0;
    
    //Part Two
    
    std::cout << "Please answer the following questions using the following numbers" << std::endl;
    std::cout << "1. YES 2. yes 3. uncertain 4. no 5. NO" << std::endl;
    
    for(int i=0; i<13; i++)
    {
        std::cout << questions[i] << std::endl;
        std::cin >> responses[i];
    }
    
    //Part Three
    
    for (int i=0; i<13; i++)
    {
        if (i % 2 == 0)
        {
            if (responses[i] == 1)
            {
                calculations -= 10;
            }
            if (responses[i] == 2)
            {
                calculations -=5;
            }
            if (responses[i] == 3)
            {
                calculations -= 0;
            }
            if (responses[i] == 4)
            {
                calculations += 5;
            }
            if (responses[i] == 5)
            {
                calculations += 10;
            }
        }
        if (i % 2 == 1)
        {
            if (responses[i] == 1)
            {
                calculations += 10;
            }
            if (responses[i] == 2)
            {
                calculations +=5;
            }
            if (responses[i] == 3)
            {
                calculations += 0;
            }
            if (responses[i] == 4)
            {
                calculations -= 5;
            }
            if (responses[i] == 5)
            {
                calculations -= 10;
            }
  
        }
    }
    
    //Part Four
    int final = 0;
    
    if (calculations < 0)
    {
        final = -1 * (calculations / 130) * 100;
        std::cout << "You are " << final << "% introvert" << std::endl;
    }
    if (calculations > 0)
    {
        final = (calculations / 130) * 100;
        std::cout << "You are " << final << "% extrovert" << std::endl;
    }
    
    return 0;
}