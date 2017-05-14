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
    cout
    << endl << endl
    << "    // HEAPSORT(): DATA[]: a[], int size_of_data: " << size_of_data
    << endl;

    for ( int counter = 0; counter < 2 ; counter++)
    {
        
        cout
        << endl
        << "        Loop pass: #" << counter+1
        << endl <<endl
        
        << "        //HEAPSORT():: REBUILD(): counter: " << counter << ", data: " << *data << ", size_of_data: " << size_of_data
        << endl;
        
        rebuild( counter, data, size_of_data);



        cout
        << endl
        << "        // HEAPSORT():: SWAP(???)..." << endl
        << "        // ..." << endl;
        
        scribe(data, size_of_data);
        
        cout << endl << endl << endl << endl;

    }//for ( int counter = 0; counter < 1; counter++) {..}
    
    /**
    //rebuild( 0, data, size_of_data);
    // initial rebuild is rebuild(0, data, size_of_data)
    // for ( i = size; i > 1; --i)
    // - call rebuild
    // - swap data[0] with last not sorted item
     **///rebuild( 0, data, size_of_data);
    
//    cout << endl << endl << endl;
}//void heapSort ( string* data, int size_of_data ) {..}



//void rebuild( int, string* left_data, int size_of_data )...
void rebuild( int index, string* data, int size_of_data)
{
    
    // find max value using: std::max_element ...
    
        string largest_value = *max_element( (data+index), data + size_of_data );
        string temporary[0];

        cout
        << endl
        << "            // find max value using: std::max_element ..."
        << endl << endl
        << "            * LARGEST VALUE: " << largest_value << endl
        << endl;

    
    // find position using: std::distance...
    
        cout
        << "            // find position using: ..."
        << endl << endl;

        auto position = find( data + index, data + size_of_data, largest_value);
        int located = position - (data + index);
    
        cout
        << "            * LARGEST VALUE: " << *position
        << "; LOCATED AT INDEX: " << located << endl
        << endl << endl;

    
    // swap 0 element with: position...
        temporary [ 0 ] = data[ index ]; // MAKING COPY OF MAX VALUE / LOCAITON ...
        data[ index ] = data[ located ]; // ORIGINAL LOCATION SWAPED WITH FOUND MAX-VALUE / LOCAITON ...
        data[ located] = temporary[ 0 ];// MOVE ORIGINAL TO THE FOUND LOCATION ...
    
        cout
        << "            // swap 0 element with: position..."
        << endl << endl
        << "            *  DATA [ 0 ]: " << temporary[ 0 ]
        << "; SWAPED with DATA [ located: " << located << " ]: " << data [ 0 ] << endl
        << "            *  DATA [ 0 ] is NOW: " << data [ index ]
        << endl << endl;
    
}




void scribe(string* data, int size_of_data )
{
    cout
    << endl << endl
    << "    // DATA[]: ";
    
    for (int index = 0; index < size_of_data ; index++) {
        cout << "[" << index << "]\"" << data[ index ] << "\"" << " ";
    }
}//void scribe()

