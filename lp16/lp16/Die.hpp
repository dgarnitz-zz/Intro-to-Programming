//
//  Die.hpp
//  lp16
//
//  Created by David Garnitz on 10/27/15.
//  Copyright © 2015 David Garnitz. All rights reserved.
//

#ifndef Die_hpp
#define Die_hpp

#include <stdio.h>

#endif /* Die_hpp */

#pragma once

#include <string>

class Die
{
private:
    int mResult;
    int mNumSides;
    
public:
    Die();
    int roll();
    std::string toString();
};