//
//  unsorted.cpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
#include <cstdlib>

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
        temp =NULL;      // : used to temporaryly store a pointers current locaiton...

    }

    
    
    bool unsorted :: IsFull() const
    
    // F(): Determine whether list is full...
    // PRE: List has been initialaized...
    // POST: "F()" value is: list is full...
    {
        return !( length < MAX_ITEMS );
    }


    
    
    
    int unsorted :: GetLength() const
    
    // F(): Determins the number of elements in list...
    // PRE: List has been initialized ...
    // POST: F() = returns of elements in list
    {
         return length;
    }

    
    
    
    
//    ItemType unsorted :: GetItem( ItemType Item, bool& found) const
//    
//    // F():  Get list element whose key matches item’s key (if present)
//    // PRE:  List has been initialized;
//    //       Key member of item is initialized...
//    
//    // POST: If there is an elemnt some item whos keymatches item's
//    //       key, then found = true and copy of someItem is
//    //       returned; otherwise found = false and item is returned
//    //       List unchnaged
//    
//    {
//        return Item;
//    }
    

    
    
    void unsorted :: PutItem(ItemType item)
    
    // F():  Puts item into list...
    // PRE:  1) List has been initialized; 2) List is not full;
    //       3) ITEM IS NOT IN LIST...
    
    // POST:  Item is in the list
    {

        while (!IsFull())
        // check: if we have rechead the max number of noeds/list: int MAX_ITEMS =5;
        {
            
            length++;
            
            node_pointer new_node = new NodeType;   //creats a new node pointer and node: "node"...
            
            new_node->next = NULL;                  // ->, access the memeber item: next (a pointer);
            // makes this item point to nothing; forces it to be
            // the last node in list (up to) with a max of: int MAX_ITEMS =5...
            
            new_node->listData = item;              // ->, allows access to the memeber item: ListaData;
            // then adds data to this node data portion: "( ItemType item ) "
            
            if ( head != NULL )
            // returns that a node item / list is present; do this...
            {
                currentPos = head;
                // changes direciton of the head pointer to this newer pointer...
                
                while ( currentPos->next != NULL)
                // check the "next" member of the node to see if at the end of list...
                {
                    currentPos = currentPos->next;
                    // if not at end; changes the current positon from previours to that of
                    // of the new node location....
                    
                }
                
                currentPos->next = new_node;
                
            }//: if ( head != NULL ) ...}
            
                else
                // if there is no currenlt list this new node is now at
                // the front of the list of nodes...
                {
                    head = new_node;
                }
            
            
        }

        
        
    }//: void unsorted :: PutItem(ItemType item) ...}

    
    
    
    void unsorted :: DeleteItem(ItemType item)
    
    // F():  Deletes the element whose key matches item’s key...
    // PRE:  List has been initialized...
    // POST: One and only one element in list has a key matching item’s key...
    {
        node_pointer delete_node = NULL;
        // * deletion pointer...
        temp = head;
        currentPos = head;
        length--;
        
        
        while ( currentPos != NULL && (currentPos->listData).ComparedTo(item) != item.EQUAL)
        // checking the inter list of data for: " ( ItemType item )"
        {
            temp = currentPos;
            currentPos = currentPos->next;
        }
        
        if ( currentPos == NULL) {
            cout << endl << "[ NOTICE ]: DATA WAS NOT LOCATED ..." << endl;
            delete delete_node;
            length++;
        }
        else
        {
            delete_node = currentPos;
            currentPos = currentPos->next;
            temp->next = currentPos;
            
            delete delete_node;
        }
        
    }
    
    
    
    
    
//    void unsorted :: ResetList()
//    // F():  current position for an iteration through the list...
//    // PRE:  List has been initialized...
//    // POST: Current  position is prior to list..
//    {
//        //code to: reset the list ...
//    }

    
    
    
//    ItemType unsorted :: GetNextItem()
    
//    // F(): Gets the next element in list...
//    // PRE: 1) List has been initialized..
//    //      2) Current position is defined..
//    //      3) Element at current position is not last in list..
//    
//    // POST: Current position is updated to next position;
//    //       returns a copy of element at current position...
//    
//    {
//    
//         return item.;
//    
//    }
//    
    
    


} // namespace ANTHONY_NASH_ASSIGNMENT_3 ...}

