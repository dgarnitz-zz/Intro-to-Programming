#include "Die.hpp"
#include <cstdlib>
#include <ctime>

Die::Die()
{
    std::srand(std::time(0));
    mNumSides = 6;
    mResult = 0;
    
}

int Die::roll()
{
    mResult = (std::rand() % mNumSides) + 1;
    
    return mResult;
}

std::string Die::toString()
{
    std::string inToString = "";
    
    switch(mResult)
    {
        case 1:
            inToString = std::to_string(mResult);
            break;
        case 2:
            inToString = std::to_string(mResult);
            break;
        case 3:
            inToString = std::to_string(mResult);
        case 4:
            inToString = std::to_string(mResult);
            break;
        case 5:
            inToString = std::to_string(mResult);
            break;
        case 6:
            inToString = std::to_string(mResult);
            break;
        default:
            break;
    }
    
    return inToString;
    
}