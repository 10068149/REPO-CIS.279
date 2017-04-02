//
//  ItemType.hpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#ifndef ItemType_hpp
#define ItemType_hpp



namespace ANTHONY_NASH_ASSIGNMENT_3 {
    
    const int MAX_ITEMS =5;
    
    
    class ItemType {
        
    public:
        
        ItemType();
        
        //HELPER SETTER METHODS():
        
        void change_value( int number );
        // F():
        // PROL
        // PRE:


        // F(): changes the value of the private INT member: value...
        
        // PRO:
        // PRE:
        
        enum RelationType
        {
            LESS,   // if the key of self is less than the key of item
            GREATER,// if the key of self is greater than the key of item
            EQUAL   // if the keys are equal
        };
        
        RelationType ComparedTo( ItemType Item );
        
        // F(): Determines the ordering of two ItemType objects
        //      based on their keys...
        // PRO:
        // PRE: Self and item have their key members initialized.
        
        
        
        
        
    private:
        
        int value;
        
        
    };//class ItemType ...}

    
}//namespace ANTHONY_NASH_ASSIGNMENT_3 ...}






#endif /* ItemType_hpp */
