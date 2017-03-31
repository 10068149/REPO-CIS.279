//
//  ItemType.cpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <cstdlib>
#include <cassert>  // provides: DEBUGING TOOLS...

#include "unsorted.hpp"
#include "ItemType.hpp"

using namespace std;

namespace ANTHONY_NASH_ASSIGNMENT_3 {



    ItemType :: ItemType(){}
    
    void ItemType :: change_value( int number )
    
    // F():
    // PROL
    // PRE:
    
    {
        this->value = number;
    }

    
    ItemType :: RelationType ItemType :: ComparedTo( ItemType Item )
    // F(): Determines the ordering of two ItemType objects
    //      based on their keys...
    // PRO:
    // PRE: Self and item have their key members initialized.
    {

        if ( Item.value < this->value ) { return GREATER; }
        if ( Item.value > this->value ) { return LESS; }
        return EQUAL;
        
    }
    
} //namespace ANTHONY_NASH_ASSIGNMENT_3 ...}


