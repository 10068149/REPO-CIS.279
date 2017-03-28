//
//  ItemType.cpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
#include "unsorted.hpp"
#include "ItemType.hpp"

using namespace std;

// !!!
namespace ANTHONY_NASH_ASSIGNMENT_3 {
//CHANGED NAMESPACE; USING ONLY ONE SPACE INSTEAD OF TWO...
// !!!



    ItemType :: ItemType()
    {
        //my constructor;
    }
    
    
    ItemType :: RelationType ItemType :: ComparedTo( ItemType Item )
    
    // F(): Determines the ordering of two ItemType objects
    //      based on their keys...
    // PRO:
    // PRE: Self and item have their key members initialized.
    
    {

        //if ( Item < this->value ) { return LESS; }
        return LESS;
        
    }
    
} //namespace ANTHONY_NASH_ASSIGNMENT_3 ...}


