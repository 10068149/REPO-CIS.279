
//  bag.hpp
//  CIS.279
//
//  Created by ANTHONY NASH on 2/26/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.

//FILE: bag1.h
//CLASS PROVIDED: bag (part of the namespace main_savitch_3)

// TYPEDEFS and MEMBER CONSTANTS for the bag class:
// typedef ____ bag_type
// bag::value_type is the data type of the objects in the bag.
// It may be any of the C++ built-in types (int, char, etc.),
// or a class with a default constructor, an assignment operator,
// and operators to test for equality (x == y) and non-equality (x != y).




// < "Documentation for a Header File" >



#ifndef bag_hpp
#define bag_hpp

#include <stdio.h>






namespace ANTHONY_NASH_BAG {
    
    //Container: BAG { ...
    class bag
    //a Bag container class that holds a collection of bag_type data
    //objects supporting the operations as specified above in the functional
    // requirements:
    {
        
    public:
        
        typedef int bag_type;//as a synonym for a data type: int (Chp. 3, Pg.5)
        typedef size_t size_type;//"can hold only non-negative numbers" (Chp. 3, Pg.5)
        
        // PROTOTYPES for functions used by this demonstration program:
        
        //Constructors: bag();...
        bag();
        
        
        //Inserts an object in the bag: VOID()
        void insert( const bag_type& object );
        //Pre: object + object.count() <= CAPACITY
        //Pro:

        
        
        //Determines if an object is in the bag: BOOL()
        bool find( const bag_type& object ) const;
        
        
        
        //Determines the number of copies of an object in the bag: int()
        int find_coppies( const bag_type& object) const;
        
        
        //Determines the total number of objects in the bag: size_type()
        size_type size();

        
        //Removes (one) objects from the bag: VOID()
        bool erase( const bag_type& object );
        // Pre: The target (object) is actually in the bag;
        // function removes one copy of target and returns true.
        // Pro: If target is not in the bag, attempting to erase one
        // copy has no effect on the bag, and the function returns false.
        // (Chp.3, Pge6)
        
        //Removes all objects from the bag: VOID()
        void clear();
        
    private:
        
        static const size_type CAPACITY = 20;
        bag_type _data [ CAPACITY];
        size_type _size;
        
    }; //END OF: CONTAINER BAG

}




#endif /* bag_hpp */



