//
//  unsorted.hpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#ifndef unsorted_hpp
#define unsorted_hpp

#include "ItemType.hpp"
/**<!>
 I had to put this here, becuase my: unsroted class
 would not read the items related to my: ItemType class
<!>**/




namespace ANTHONY_NASH_ASSIGNMENT_3 {


    class unsorted {
        
    public:
        
        unsorted();
        
        // "Make Empty"
        // F(): Initializes list to empty state...
        // PRE: NONE
        // POST: List is empty...
        
        bool IsFull() const;
        
        // F(): Determine whether list is full...
        // PRE: List has been initialaized...
        // POST: "F()" value is: list is full...
        
        
        int GetLength() const;
        
        // F(): Determins the number of elements in list...
        // PRE: List has been initialized ...
        // POST: F() = returns of elements in list
        
        
        ItemType GetItem( ItemType Item, bool& found) const;
        
        // F():  Get list element whose key matches item’s key (if present)
        // PRE:  List has been initialized;
        //       Key member of item is initialized...
        
        // POST: If there is an elemnt someitem whos keymatches item's
        //       key, then found = true and copy of someItem is
        //       returned; otherwise found = false and item is returned
        //       List unchnaged
        
        
        void PutItem(ItemType item);
        
        // F():  Puts item into list...
        // PRE:  1) List has been initialized; 2) List is not full;
        //       3) ITEM IS NOT IN LIST...
        
        // POST:  Item is in the list
        
        
        void DeleteItem(ItemType item);
        
        // F():  Deletes the element whose key matches item’s key...
        // PRE:  List has been initialized...
        // POST: One and only one element in list has a key matching item’s key...
        
        void ResetList() ;
        // F():  current position for an iteration through the list...
        // PRE:  List has been initialized...
        // POST: Current  position is prior to list..
        
        ItemType GetNextItem();
        
        // F(): Gets the next element in list...
        // PRE: 1) List has been initialized..
        //      2) Current position is defined..
        //      3) Element at current position is not last in list..
        
        // POST: Current position is updated to next position;
        //       returns a copy of element at current position...
        
        
        
    private:
        
        /**
         <?>
         
         Nodetype* ListData;
         NodeType* currentPos;
         
         * THESE TWO ABOVE ITEMS ARE NOT WORKING...
         
         </?>
         **/
        
        
        
        int length;
        
        
    };//class unsorted {...

}//namespace ANTHONY_NASH_ASSIGNMENT_3 {...

#endif /* unsorted_hpp */
