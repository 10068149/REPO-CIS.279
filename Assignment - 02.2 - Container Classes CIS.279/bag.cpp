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










bag :: bag()
{
    used_data =0;// set the member: used_data to zero
    
    for (int index =0; index < CAPACITY; index++)
    {
        data [ index] = 0;
    }
    
}


















// EMPLEMENTATION: for functions used by this demonstration program:


//Inserts an object in the bag: VOID()
void bag::insert( const bag_type& object )
//Pre: object + object.count() <= CAPACITY
//Pro:
{
    int counter =0;
    
    while ( (used_data < CAPACITY) && (counter < 1) )
    {
        for (int index =0; index < CAPACITY; index++)
        {
        
                if ( (data[ index ] == 0) && (counter == 0) )
                {
                    data [ index ] = object;
                    used_data++;
                    counter++;
                }
            
        }
    }

}




















































//Inserts an object in the bag: VOID()
void bag::insert_full()
//Pre: object + object.count() <= CAPACITY
//Pro:
{

    for (int index = used_data; index < CAPACITY; index++)
    {
            
            if ( data[ index ] == 0 && (index != 0) )
            {
                data [ index ] = index;
                
            }
            
    }
    
}




























//Determines if an object is in the bag: BOOL()
bool bag::find( const bag_type& object ) const
{
    for (int index =0; index < CAPACITY; index++)
    {
        if ( data[ index ] == object )
        {
            cout
                << "** [RETURN]: located a " << object
                << " object in this Bag..."
                << endl;

            return true;
        }
    }
    
    cout
        << "** [RETURN]: " << object
        << " object not located..."
        << endl;

    return false;
}





















//Determines the number of copies of an object in the bag: VOID()
void bag::find_coppies( const bag_type& object) const
{
    int counter =0;
    
    for (int index =0; index < CAPACITY; index++)
    {
        if ( data[ index ] == object )
        {
            cout
                << "** DATA [ " << index
                << " ]: " << data[ index ]
                << endl;
            
            counter++;
        }
    }

    cout
        << "** [RETURN]: " << counter
        << " \"" << object
        << " object(s)\" located!"
        << endl;
}






























//Determines the total number of objects in the bag: size_type()
bag::size_type bag::size()
{
    
    //reading the array for total itmes counted: none "0"  / "empty" iteams
    int counter =0;
    
    for (int index =0; index < CAPACITY; index++)
    {
        
        if ( data [index] > 0 ) { counter++; }
        
        cout
            << "** DATA [ " << index
            << " ]: " << data [ index ]
            << endl;
        
    }
    
    cout
        << endl
        << "** [RETURN] Total objects in Bag: " << counter
        << endl << endl;
    
    return 0;
}




















//Removes (one) objects from the bag: VOID()
bool bag::erase( const bag_type& object )
// Pre: The target (object) is actually in the bag;
// function removes one copy of target and returns true.
// Pro: If target is not in the bag, attempting to erase one
// copy has no effect on the bag, and the function returns false.
// (Chp.3, Pge6)
{

    for (int index =0; index < CAPACITY; index++)
        {
            
            if ( data[ index ] == object )
            {
                cout
                << "** [RETURN]: located a " << object
                << " object in this Bag," << endl
                << "   at location: DATA [" << index
                << "]" << endl;
                
                data [ index ] = 0;

                cout
                    << "** [ACNTION]: Deleted!"
                    << endl;
                
                return true;
            }
            
        }
        
    
    return false;
}
























//Removes all objects from the bag: VOID()
void bag::clear( const bag_type& object )
{
    
//    erase( find_coppies( object ) )

}









