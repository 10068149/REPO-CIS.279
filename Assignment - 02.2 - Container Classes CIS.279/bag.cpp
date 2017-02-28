//
//  bag.cpp
//  CIS.279
//
//  Created by CIS on 2/26/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "bag.hpp"

using namespace std;
using namespace ANTHONY_NASH_BAG;





// EMPLEMENTATION: for functions used by this demonstration program:


//Inserts an item in the bag: VOID()
void bag::insert( const value_type& item )
//Pre: item + item.count() <= CAPACITY
//Pro:
{
    for (int index =0; index < CAPACITY; index++)
    {
    
        if ( data[ index ] == 0 ) {
            data [ index ] = item;
        }
    
    }

}






//Determines if an item is in the bag: BOOL()
bool bag::find()
{
    return true;
}






//Determines the number of copies of an item in the bag: VOID()
void bag::find_coppies( const value_type& item)
{
    //code...
}







//Determines the total number of items in the bag: size_type()
bag::size_type bag::count()
{
    
    cout << "// size_type count() {...}" << endl <<endl;

    //reading the array for totoal itmes counted: none "0"  / "empty" iteams
    for (int index =0; index < CAPACITY; index++) {
        
        if ( data [index] > 0 ) { used_data++; }
        
        cout
            << "DATA [ " << index
            << " ]:" << data [ index ]
            << endl;
        
        }
    
    cout
        << endl << endl
        << "Total items in Bag: " << used_data
        << endl << endl;
    
    return 0;
}







//Removes (one) items from the bag: VOID()
bool bag::erase( value_type& item )
// Pre: The target (item) is actually in the bag;
// function removes one copy of target and returns true.
// Pro: If target is not in the bag, attempting to erase one
// copy has no effect on the bag, and the function returns false.
// (Chp.3, Pge6)
{
    return true;
}






//Removes all items from the bag: VOID()
bag::size_type bag::erase_all()
{
    return 0;
}





