#include <iostream>


//99 Bottles of beer on the wall

int main ()
{
    std::string response;
    std::cout << "Want to sing a song" << std::endl;
    std::cin >> response;
    
    if (response == "yes")
    {
        for (int bottles = 99; bottles > 0; bottles --)
        {
            std::cout << bottles << " of beer on the wall " << bottles << " of beer. Take one down, pass it around "<< bottles - 1 << " bottles of beer on the wall" << std::endl;
            
        }
    }
    
    else
    {
        std::cout << "Have a nice day" << std::endl; 
    }
    

    
    
    return 0;
   
}