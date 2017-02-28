
//  bag.hpp
//  CIS.279
//
//  Created by ANTHONY NASH on 2/26/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.

//FILE: bag1.h
//CLASS PROVIDED: bag (part of the namespace main_savitch_3)

// TYPEDEFS and MEMBER CONSTANTS for the bag class:
// typedef ____ value_type
// bag::value_type is the data type of the items in the bag.
// It may be any of the C++ built-in types (int, char, etc.),
// or a class with a default constructor, an assignment operator,
// and operators to test for equality (x == y) and non-equality (x != y).




// < "Documentation for a Header File" >



#ifndef bag_hpp
#define bag_hpp

#include <stdio.h>






//typedef int value_type;//as a synonym for a data type: int (Chp. 3, Pg.5)
//typedef size_t size_type;//"can hold only non-negative numbers" (Chp. 3, Pg.5)
//static const size_type CAPACITY = 20;







namespace ANTHONY_NASH_BAG {
    
    //Container: BAG { ...
    class bag
    //a Bag container class that holds a collection of bag_type data
    //items supporting the operations as specified above in the functional
    // requirements:
    {
        
    public:
        
        typedef int value_type;//as a synonym for a data type: int (Chp. 3, Pg.5)
        typedef size_t size_type;//"can hold only non-negative numbers" (Chp. 3, Pg.5)
        static const size_type CAPACITY = 20;
        
        // PROTOTYPES for functions used by this demonstration program:
        
        //Constructors: bag();...
        bag()
        {
            used_data =0;// set the member: used_data to zero
            
            for (int index =0; index < CAPACITY; index++) {
            
                data [ index] = 0;
            
            }
        }
        
        
        //Inserts an item in the bag: VOID()
        void insert( const value_type& item );
        //Pre: item + item.count() <= CAPACITY
        //Pro:
        
        //Determines if an item is in the bag: BOOL()
        bool find();
        
        //Determines the number of copies of an item in the bag: VOID()
        void find_coppies( const value_type& item);
        
        //Determines the total number of items in the bag: VOID()
        size_type count();
        
        //Removes (one) items from the bag: VOID()
        bool erase( value_type& item );
        // Pre: The target (item) is actually in the bag;
        // function removes one copy of target and returns true.
        // Pro: If target is not in the bag, attempting to erase one
        // copy has no effect on the bag, and the function returns false.
        // (Chp.3, Pge6)
        
        //Removes all items from the bag: VOID()
        size_type erase_all();
        
    private:
        
        value_type data [ CAPACITY];
        size_type used_data;
        
        
    }; //END OF: CONTAINER BAG

}



#endif /* bag_hpp */






