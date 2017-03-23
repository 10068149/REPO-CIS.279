//
//  unsorted.hpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#ifndef unsorted_hpp
#define unsorted_hpp

#include <stdio.h>


class unsorted {
    
public:
    
    unsorted();
    
    // Initializes list to empty state...
    // PRE: NONE
    // POST: List is empty...
    

    
    bool IsFull();
    
    // Determine whether list is full...
    // PRE: List has been initialaized...
    // POST: "F()" value is: list is full...
    
    

    int GetLength();
    
    // Determins the number of elements in list...
    // PRE:
    // POST:

    
    
    ItemType GetItem( ItemType Item, Boolean& found);
    
    // PRE:     List has been initialized;
    //          Key member of item is initialized...
    // POST:    If there is an elemnt someitem whos keymatches item's
    //          key, then found = true and copy of someItem is
    //          returned; otherwise found = false and item is returned
    //          List unchnaged

    
    
    void PutItem(ItemType item);
    
    // WHAT:    Puts item into list...
    // PRE:     1) List has been initialized; 2) List is not full;
    //          3) ITEM IS NOT IN LIST...
    // POST:    Item is in the list

    
    
    void DeleteItem(ItemType item);
    
    // WHAT:    Deletes the element whose key matches item’s key...
    // PRE:     List has been initialized...
    // POST:    One and only one element in list has a key matching item’s key...

    
    
    void ResetList();
    // WHAT:    current position for an iteration through the list...
    // PRE:     List has been initialized...
    // POST:    Current  position is prior to list..

    
    
    ItemType GetNextItem();
    <WHY DOES "ItemType" NOT WORK ON THIS LINE AS IT DOES WITH: "GetItem()">
    // F(): Gets the next element in list...
    // PRE:  1) List has been initialized..
    //       2) Current position is defined..
    //       3) Element at current position is not last in list..
    
    // POST: Current position is updated to next position;
    //       returns a copy of element at current position...

    
private:
    
    //code...
    
};

#endif /* unsorted_hpp */
