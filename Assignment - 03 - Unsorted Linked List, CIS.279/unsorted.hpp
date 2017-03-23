//
//  unsorted.hpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#ifndef unsorted_hpp
#define unsorted_hpp

//#include <stdio.h>
#include "ItemType.hpp"


class unsorted {
    
public:
    
    unsorted();
    
    // "Make Empty"
    // F(): Initializes list to empty state...
    // PRE: NONE
    // POST: List is empty...

    
    /*
     CONST: NO!!
     
     + f(): designed to be a constructor...
     + No need for CONST here...
     
     **/

    
    bool IsFull() const;
    
    // F(): Determine whether list is full...
    // PRE: List has been initialaized...
    // POST: "F()" value is: list is full...
    
    /*
     
     CONST: YES!!
     + bool returns TRUE or FALSE ...
     + F(): is designed to check if a list is full or not ...
     + it should only return TRUE / FALSE and no list data should be
       changed , so I made it CONST to make sure nothing is changed !
     
     **/
    

    int GetLength() const;
    
    // F(): Determins the number of elements in list...
    // PRE: List has been initialized ...
    // POST: F() = returns of elements in list

    /*
     
     CONST: YES!!
     + returns a value of: INT...
     + f(): is designed to only CHECK list data; not change it...
     
     **/
    
    
    ItemType GetItem( ItemType Item, bool& found) const;
    
    // F():  Get list element whose key matches item’s key (if present)
    // PRE:  List has been initialized;
    //       Key member of item is initialized...
    
    // POST: If there is an elemnt someitem whos keymatches item's
    //       key, then found = true and copy of someItem is
    //       returned; otherwise found = false and item is returned
    //       List unchnaged

    /*
     
     CONST: YES!!
     + returns a value of: ItemType...
     + f(): is designed to return the list element that matches a
            given key (if present)
     + f(): is not designed to chaneg the keys or data..
     
     
     **/
    
    
    void PutItem(ItemType item);
    
    // F():  Puts item into list...
    // PRE:  1) List has been initialized; 2) List is not full;
    //       3) ITEM IS NOT IN LIST...
    
    // POST:  Item is in the list

    /*
     CONST: NO!!
     + f(): is designed to put DATA on the list
     + f(): needs access to make changes to DATA....
     **/
    
    
    void DeleteItem(ItemType item);
    
    // F():  Deletes the element whose key matches item’s key...
    // PRE:  List has been initialized...
    // POST: One and only one element in list has a key matching item’s key...

    /*
     CONST: NO!!!
     + f(): needs access to: delete DATA from list...
    
     **/
    
    
    void ResetList() ;
    // F():  current position for an iteration through the list...
    // PRE:  List has been initialized...
    // POST: Current  position is prior to list..

    /*
     CONST: NO!!
     + f(): designed to: RESET or Initialize of an iterator...
     + f(): needs access to make this change...
     **/
    
    
    ItemType GetNextItem() const;

    // F(): Gets the next element in list...
    // PRE: 1) List has been initialized..
    //      2) Current position is defined..
    //      3) Element at current position is not last in list..
    
    // POST: Current position is updated to next position;
    //       returns a copy of element at current position...

    /*
     CONST: YES!!
     + f(): only needs to read the list data to get the next element..
     + f(): there is no need to change the next element...
     **/

    
    
    
private:
    
    //code...
    
};

#endif /* unsorted_hpp */
