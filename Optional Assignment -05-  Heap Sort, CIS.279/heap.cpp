// TO REPLACE LABE #04
//  heap.cpp
//  CIS.279
//
//  Created by ANTHONY NASH on 5/10/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include "heap.hpp"
#include <iostream>
#include <algorithm>
#include <iterator>     // distance
//#include <vector>

using namespace std;







void heapSort ( string* data, int size_of_data )
//What: heap sort; sorts the items in an array into ASCENDING order.
//Pre:  1) array[] is not empty; there is at least one element in the array.
//Post: 1) returns sorrted array
{
    
    cout << "Original: ";
    printer(data, size_of_data);
    cout<<endl;
    
    for (int loop = 0; loop < size_of_data; loop++) {
        
        rebuild( 0, data, size_of_data - loop);
        swap(data[0], data [size_of_data - loop-1] );
    
        for ( int counter = 1; counter < size_of_data ; counter++)
        {

            cout << "// FOR() loop pass COUNTER @: " << size_of_data - counter << endl;

            //rebuild( counter, data, size_of_data);
            rebuild( 0, data, size_of_data - counter);
            cout << "Heap:     ";
            printer(data, size_of_data);

            
            // do swap after this line
            swap(data[0], data [size_of_data - counter-1] );
            
            // do swap before this line
            cout << "Swapped:  ";

            printer(data, size_of_data);
            cout << endl << endl;

        }//for(): COUNTER...
    }//FOR(): LOOP...
    
}//void heapSort ( string* data, int size_of_data ) {..}



//void rebuild( int, string* left_data, int size_of_data )...

void rebuild( int ZERO, string* data, int size_of_data)
{
    // find max value using
                                            // DATA[] START, DATA[] END )
        string largest_value = *max_element( data, data + size_of_data );

        auto position = find( data, data + size_of_data , largest_value);
         int located = position-(data);
        swap(data[0], data [located] );
}

void printer(string* data, int size_of_data )
{
    
    for (int index = 0; index < size_of_data ; index++) {
        cout << "[" << index << "]\"" << data[ index ] << "\"" << " ";
    }
    cout<<endl;
}//void scribe()

