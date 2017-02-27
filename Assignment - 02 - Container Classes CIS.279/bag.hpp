//
//  bag.hpp
//  CIS.279
//
//  Created by ANTHONY NASH on 2/26/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#ifndef bag_hpp
#define bag_hpp

#include <stdio.h>

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
    
        //Constructors: bag();...
        bag();

        //Inserts an item in the bag: VOID()
        void put_in( const value_type& item );

        //Determines if an item is in the bag: BOOL()
        bool is_this_in();

        //Determines the number of copies of an item in the bag: VOID()
        void how_many_of_these( const value_type& item);

        //Determines the total number of items in the bag: VOID()
        void total_in();

        //Removes (one) items from the bag: VOID()
        void remove_from( value_type& item );

        //Removes all items from the bag: VOID()
        void remove_all();
    
    private:
    
    

}; //END OF: CONTAINER BAG



#endif /* bag_hpp */
