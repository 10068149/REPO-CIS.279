//
//  unsorted.cpp
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


    unsorted :: unsorted()
    
    // "Make Empty"
    // F(): Initializes list to empty state...
    // PRE: NONE
    // POST: List is empty...
    {
        head =NULL;     // : points to first node in list...
        tail =NULL;      // : points to last node in list...
        currentPos =NULL;// : point to the curent node in list...
    }

    
    
    bool unsorted :: IsFull() const
    
    // F(): Determine whether list is full...
    // PRE:  - - -List has been initialaized...
    // POST: "F()" value is: list is full...
    {
        return !( length < MAX_ITEMS );
    }


    
    
    
    int unsorted :: GetLength() const
    
    // F(): Determins the number of elements in list...
    // PRE: XXX List has been initialized ...
    // POST: F() = returns of elements in list
    {
         return length;
    }

    
    
    
    
    ItemType unsorted :: GetItem( ItemType Item, bool& found) const
//
//    // F():  Get list element whose key matches item’s key (if present)
//    // PRE:  XXX List has been initialized;
//    //       Key member of item is initialized...
//    
//    // POST: If there is an elemnt some item whos keymatches item's
//    //       key, then found = true and copy of someItem is
//    //       returned; otherwise found = false and item is returned
//    //       List unchnaged
//    
    {
        return Item;
    }
    

    
    
    void unsorted :: PutItem(ItemType item)
    
    // F():  Puts item into list...
    
    // PRE:  1) XXX List has been initialized;
    //       2) List is not full;
    //       3) ITEM IS NOT IN LIST...
    
    // POST:  Item is in the list
    
    {
        // 2) List is not full;
        assert( !IsFull() );
        
        // 3) ITEM IS NOT IN LIST...
        // !!!
        // assert( GetItem( ItemType Item, bool& found) const );
        // !!!

        NodeType* current_position;
        length++;

            NodeType* new_node = new NodeType;
            //* CREATED: new node: new_node: NodeType...
            
            new_node->next_node = NULL;
            // ->, ACCESS to the memeber item: next (a pointer);
            // makes this item point to nothing; forces it to be
            // the last node in list (up to) with a max of: int MAX_ITEMS =5...
            
            new_node->listData = item;
            // ->, allows access to the memeber item: ListaData;
            // then adds data to this node data portion:
            // "( ItemType item ) "
            
            if ( tail != NULL )
            // *CHECKS: if a node/list exsist; CONTINUE if so...
            {
                current_position = tail;
                // POINTS: the new pointer to the end of list
                
                current_position->next_node = new_node;
                
            }//: if ( head != NULL ) ...}
            
            else
            // if there is no currenlt list this new node is now at
            // the END of the list of nodes...
            {
                new_node = tail;
            }

        
        
    }//: void unsorted :: PutItem(ItemType item) ...}

    
    
    
    void unsorted :: DeleteItem(ItemType item)
    
    // F():  Deletes the element whose key matches item’s key...
    // PRE:  XXX List has been initialized...
    // POST: One and only one element in list has a key matching item’s key...
    {
        NodeType* current_pointer = head;
        NodeType* temporary_pointer = head;
        NodeType* delete_pointer = NULL;
        
        while ( current_pointer != NULL &&
                current_pointer->listData.ComparedTo(item) != item.EQUAL )
        // checking the inter list of data for: " ( ItemType item )"
            
        {
            temporary_pointer = current_pointer;
            current_pointer = current_pointer->next_node;
        }
        
        if ( current_pointer == NULL) {
            delete delete_pointer;
        /*  cout
                << endl
                << "![ NOTICE ]: DATA WAS NOT LOCATED ..."
                << endl; 
         **/
        }// if()
        
        else
            
        {
            delete_pointer = current_pointer;
            // *SETS: node for deletion...
            
            current_pointer = current_pointer->next_node;
            // *ADVAMCES: sets current pointer to that OF the next node...
            
            temporary_pointer->next_node = current_pointer;
            // *SAVES:  record of current pointer after deletion...
            
            delete delete_pointer;
            // *RETURNS: removed the NODE and returnes memory location
            // to heap...
            
            length--;
            // *DEINCREMENT: length of the list...
            
        }// else()
        
    }// void unsorted :: DeleteItem(ItemType item) {}

    
    
    
    
//    void unsorted :: ResetList()
    // F():  current position for an iteration through the list...
    // PRE:  XXX List has been initialized...
    // POST: Current  position is prior to list..
//    {
        //code to: reset the list ...
//    }

    
    
    
    ItemType unsorted :: GetNextItem()
    
    // F(): Gets the next element in list...
    
    // PRE: 1) XXX List has been initialized..
    //      2) Current position is defined..
    //      3) Element at current position is not last in list..
    
    // POST: Current position is updated to next position;
    //       returns a copy of element at current position...

    {
        assert( currentPos != NULL );
        // *2) CHECK: Current position is defined..
        
        //currentPos = currentPos->next_node;
        // *ASSIGNS: points to next NODE
        
        return currentPos->listData;

    }// ItemType unsorted :: GetNextItem() {}

    
    


} // namespace ANTHONY_NASH_ASSIGNMENT_3 ...}

