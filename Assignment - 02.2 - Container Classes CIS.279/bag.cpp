//
//  bag.cpp
//  CIS.279
//
//  Created by CIS on 2/26/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include "bag.hpp"

using namespace std;
using namespace ANTHONY_NASH_BAG;



bag :: bag()
{
    _size =0;// set the member: _size to zero
    
    for (int index =0; index < CAPACITY; index++)
    {
        _data [ index] = 0;
    }
    
}



// EMPLEMENTATION: for functions used by this demonstration program:



//Inserts an object in the bag: VOID()
void bag::insert( const bag_type& object )
//Pre: object + object.count() <= CAPACITY
//Pro:
{
    // index: [0, 1, 2, 3, 4]
    // value: [1, 2, 3, *, 0] => size = 3
    _data[_size] = object;
    _size++;
}



//Determines if an object is in the bag: BOOL()
bool bag::find( const bag_type& object ) const
{
    for (int index =0; index < _size; index++)
    {
        if ( _data[ index ] == object )
        {
            return true;
        }
    }
    
    return false;
}




//Determines the number of copies of an object in the bag: VOID()
int bag::find_coppies( const bag_type& object) const
{
    int counter =0;
    
    for (int index =0; index < _size; index++)
    {
        if ( _data[ index ] == object )
        {
            counter++;
        }
    }

    return counter;
}




//Determines the total number of objects in the bag: size_type()
bag::size_type bag::size()
{
    return _size;
}



//Removes (one) objects from the bag: VOID()
bool bag::erase( const bag_type& object )
// Pre: The target (object) is actually in the bag;
// function removes one copy of target and returns true.
// Pro: If target is not in the bag, attempting to erase one
// copy has no effect on the bag, and the function returns false.
// (Chp.3, Pge6)
{
    for (int index =0; index < _size; index++)
    {
        if (_data[index] == object) {

            for(int j = index + 1; j < _size; j++) {

                _data[j - 1] = _data[j];
            }
            _size--;
            return true;
        }

    }
    return false;
}



//Removes all objects from the bag: VOID()
void bag::clear( )
{
    _size=0;
    
}
    










