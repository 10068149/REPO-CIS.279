// TO REPLACE LABE #04
//  heap.cpp
//  CIS.279
//
//  Created by ANTHONY NASH on 5/10/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include "heap.hpp"
#include <iostream>
using namespace std;



void heapSort ( string* data, int size_of_data )
//What: heap sort; sorts the items in an array into ASCENDING order.
//Pre:  1) array[] is not empty; there is at least one element in the array.
//Post: 1) returns sorrted array

{
    // call rebuild
    rebuild( data, size_of_data);
    // initial rebuild is rebuild(0, data, size_of_data)
    // for ( i = size; i > 1; --i)
    // - call rebuild
    // - swap data[0] with last not sorted item
}

void rebuild(string* left_data, int size_of_data )
{
    // find LARGEST item and swap with the data[0]
    print( left_data, size_of_data);

    
    
    string right_data[ size_of_data];
    
    for (int index= 0; index < (size_of_data)-1; index++) {
    
        right_data[ index ] = left_data[ size_of_data - (index+1) ];
        
        cout << "   *TEST: " << left_data[ index ]
             << " compared to " << right_data[ index]
             << endl;
        
        if ( (left_data[index].compare( right_data[index]) != 0) )
            cout << "*RESULTS: " << left_data[index]
            << " is NOT equal to " << right_data[index]
            << endl << endl;

        
//        if (left_data[index].compare(right_data[index]) == 0)
//            cout << left_data[index] << " is equal to " << right_data[index]
//                 << endl << endl;
//
//        if (left_data[index].compare(right_data[index]) < 0)
//            cout << left_data[index] << " is great than " << right_data[index]
//                 << endl << endl;
//
//        if (left_data[index].compare(right_data[index]) > 0)
//            cout << left_data[index] << " is great than " << right_data[index]
//                 << endl << endl;
        
    }//FOR()....
    
}//rebuild()...




// has some local variable
// which store the CURRENT largest value
// and the position of that value

// init position to 0 and value to data[0]



void print(string* left_data, int size_of_data )
{
    cout << "   *TEST: ARRAY[]: ";
    for (int index = 0; index < size_of_data ; index++) {
        cout << left_data[ index ] << " ";
    }
    cout << endl << endl;
    
}//rebuild()...
