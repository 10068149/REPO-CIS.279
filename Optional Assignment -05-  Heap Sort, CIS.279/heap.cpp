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
    for ( int counter = 0; counter < size_of_data ; counter++)
        
    {

        cout << "// FOR() loop pass COUNTER @: " << counter << endl;

        scribe(data, size_of_data);
        
        rebuild( counter, data, size_of_data);

        scribe(data, size_of_data);
        cout << endl << endl << endl;

    }//for ( int counter = 0; counter < 1; counter++) {..}
    
}//void heapSort ( string* data, int size_of_data ) {..}



//void rebuild( int, string* left_data, int size_of_data )...
void rebuild( int index, string* data, int size_of_data)
{
    
    // find max value using: std::max_element ...
    
        string largest_value = *min_element( (data+index), data + size_of_data );
        string temporary[ size_of_data ];


        auto position = find( data, data + size_of_data, largest_value);
        int located = position - (data);

    // swap 0 element with: position...
    
        temporary [ index ] = data[ index ]; // MAKING COPY OF MAX VALUE / LOCAITON ...
        data[ index ] = data[ located ]; // ORIGINAL LOCATION SWAPED WITH FOUND MAX-VALUE / LOCAITON ...
        data[ located] = temporary[ index ];// MOVE ORIGINAL TO THE FOUND LOCATION ...
    
}




void scribe(string* data, int size_of_data )
{
    cout
    << endl
    << "    * DATA[]: ";
    
    for (int index = 0; index < size_of_data ; index++) {
        cout << "[" << index << "]\"" << data[ index ] << "\"" << " ";
    }
}//void scribe()

