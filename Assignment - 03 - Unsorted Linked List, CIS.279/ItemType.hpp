//
//  ItemType.hpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#ifndef ItemType_hpp
#define ItemType_hpp

#include <stdio.h>


class ItemType {

public:
    
    //<?>
    RelationType ComparedTo(ItemType Item);
    //STILL DON'T KNOW: WHAT THIS IS SUPPOSE TO BE / HOW SETUP
    //</?>
    
    enum RelationType
    
    {
        LESS,   // if the key of self is less than the key of item
        GREATER,// if the key of self is greater than the key of item
        EQUAL   // if the keys are equal
    };
    
    // F(): Determines the ordering of two ItemType objects
    //      based on their keys...
    // PRO:
    // PRE: Self and item have their key members initialized.
    
    
    
    
    
private:
    
    //code...
    

};



#endif /* ItemType_hpp */
