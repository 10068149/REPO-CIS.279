//
//  unsorted.cpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//
#include <iostream> // !!! FOR TESTING ONLY !!!
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
        head_pointer =NULL;     // : points to first node in list...
        tail_pointer =NULL;      // : points to last node in list...
        currentPos =NULL;// : point to the curent node in list...
        length = 0;
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

    
    
    
    
    ItemType unsorted :: GetItem( ItemType item, bool& found) const
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
        NodeType* current_pointer = head_pointer;
        
        while ( current_pointer != NULL &&
               current_pointer->listData.ComparedTo(item) != item.EQUAL )
            // checking the inter list of data for: " ( ItemType item )"
            
        {
            current_pointer = current_pointer->next_location;
        }
        
        if ( current_pointer == NULL)
        {
            found = false;
            return item;
            
        }// if()
        
        found = true;
        return current_pointer->listData;
    }//: ItemType unsorted :: GetItem( ItemType item, bool& found) const {}
    

    
    
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


        NodeType* new_node = new NodeType;
        //* CREATED: new node: new_node: NodeType...
        
        if ( tail_pointer != NULL ) {
            tail_pointer->next_location = new_node;
        }
        tail_pointer = new_node;
        
        if ( head_pointer == NULL) {
            head_pointer = new_node;
        }
        
        new_node->next_location = NULL ;
        // ->, ACCESS to the memeber item: next (a pointer);
        // makes this item point to nothing; forces it to be
        // the last node in list (up to) with a max of: int MAX_ITEMS =5...
        
        new_node->listData = item;
        // ->, allows access to the memeber item: ListaData;
        // then adds data to this node data portion:
        // "( ItemType item ) "
        

        length++;
        
    }//: void unsorted :: PutItem(ItemType item) ...}

    

    
    
    
    
void unsorted :: DeleteItem(ItemType item)
    //    // F():  Deletes the element whose key matches item’s key...
    //    // PRE:  XXX List has been initialized...
    //    // POST: One and only one element in list has a key matching item’s key...

{
    
    if ( head_pointer == NULL)
    //IF(): LIST IS EMPTY; RETURN...
    {
        cout << "   // TEST CASE:  1: List is empty..." << endl;
        return;
        
    }//if ( head_pointer == NULL) {...}
    
    //5 *DeleteItem(): INTIAITING LIST SEARCH...
    cout << "   //5 *DeleteItem(): INTIAITING LIST SEARCH..." << endl;
    
    NodeType* current_pointer = head_pointer;
    // staring at / pointing at the beging of the list...

    NodeType* trailing_pointer = head_pointer;
    // staring at / pointing at the beging of the list...

    while ( current_pointer != NULL
           && current_pointer->listData.ComparedTo(item)
           != item.EQUAL)
    // DO(): SEARCHING LIST...
    {
            trailing_pointer = current_pointer;
            // set to the HEADS current positon;
            // used to keep track of the original NODES/items  ...
            
            current_pointer = current_pointer->next_location;
            // set to the current pointer to that of of the NEXT NODE locaiton...
        
            cout << "   //5 *DeleteItem(): SEARCHING..." << endl;
        
    }// WHILE(): not at the END of the list...
    
    cout << "   //5 *DeleteItem(): ITEM LOCATED..." << endl;
    cout << "   //5 *DeleteItem(): WHEN CURRENT_POINTER = TAIL_POINTER && ...DATA" << endl;

    if ( current_pointer == tail_pointer
         && current_pointer->listData.ComparedTo(item)
         == item.EQUAL)
    {
        tail_pointer = trailing_pointer->next_location;
        //REASSIGING HEAD TO THE NEXT KNOWN POINTER IN LIST...
        
//        delete tail_pointer;
        length--;
        //POINTER DELETED; MEMORY CLEARED...

    }
    
    cout << "   //5 *DeleteItem(): ITEM LOCATED..."<< endl;
    cout << "   //5 *DeleteItem(): WHEN HEAD_POINTER = CURRENT_POINTER..."<< endl;
    
    if (head_pointer == current_pointer )
    {
        head_pointer = head_pointer->next_location;
        //REASSIGING HEAD TO THE NEXT KNOWN POINTER IN LIST...
        
        delete current_pointer;
        length--;
        //POINTER DELETED; MEMORY CLEARED...
    }// if (head_pointer == current_pointer )...

        
        if ( current_pointer == NULL
             && current_pointer->listData.ComparedTo(item)
            != item.EQUAL )
    //5 *DeleteItem(): IF(): LIST SEAERCHED; NOT FOUND...
    {
        cout << "   //5 *DeleteItem(): IF(): LIST SEAERCHED; NOT FOUND..." << endl;
        return;
    }// if ( current_pointer == NULL ) {...


/**
            else
            cout << "   //5 *DeleteItem(): CASE 4: ITEM LOCATED; CURRENT > HEAD..." << endl;
            {
                //5 *DeleteItem(): CASE 4: ITEM LOCATED; CURRENT > HEAD...
                trailing_pointer->next_location = current_pointer->next_location;
                //RECONECTING TRAINLING NODE TO THE NEXT KNOWN NODE IN LIST...
                
                delete current_pointer;
                length--;
                //POINTER DELETED; MEMORY CLEARED...
            }// ELSE{} :: if (head_pointer == current_pointer ) ...
 **/
 

}//DeleteItem(ItemType item)...

    
    

    
    
    
    
    void unsorted :: ResetList()
    // F():  current position for an iteration through the list...
    // PRE:  XXX List has been initialized...
    // POST: Current  position is prior to list..
    {
            currentPos = head_pointer;
    }

    
    
    
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
        
        ItemType value;
        
        value = currentPos->listData;
        currentPos = currentPos->next_location;
        return value;
        
    }// ItemType unsorted :: GetNextItem() {}

    
    
    


} // namespace ANTHONY_NASH_ASSIGNMENT_3 ...}

