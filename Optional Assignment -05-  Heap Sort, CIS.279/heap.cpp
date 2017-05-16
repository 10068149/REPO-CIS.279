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
    
    for ( int counter = 0; counter < size_of_data ; counter++)
        
    {

        cout << "// FOR() loop pass COUNTER @: " << size_of_data - counter << endl;
//        cout << "// FOR() loop pass COUNTER @: " << counter << endl << endl;

        
        rebuild( counter, data, size_of_data);
        cout << "Heap:     ";
        printer(data, size_of_data);

        
        // do swap after this line
        //swap(counter, data, size_of_data);
        swap(data[0], data [size_of_data - counter-1] );
        
        // do swap before this line
        cout << "Swapped:  ";

        printer(data, size_of_data);
        cout << endl << endl;

    }//for ( int counter = 0; counter < 1; counter++) {..}
    
}//void heapSort ( string* data, int size_of_data ) {..}



//void rebuild( int, string* left_data, int size_of_data )...
void rebuild( int index, string* data, int size_of_data)
{
    
    // find max value using: std::max_element ...
    
        string largest_value = *max_element( (data+index), data + size_of_data );
        string temporary[ size_of_data ];


        auto position = find( data, data + size_of_data, largest_value);
        int located = position-(data);

    // swap 0 element with: position...
    
//        temporary [ index ] = data[ index ]; // MAKING COPY OF MAX VALUE / LOCAITON ...
//        data[ index ] = data[ located ]; // ORIGINAL LOCATION SWAPED WITH FOUND MAX-VALUE / LOCAITON ...
//        data[ located] = temporary[ index ];// MOVE ORIGINAL TO THE FOUND LOCATION ...
        swap(data[0], data [ located] );
    
}


//void rebuild( int, string* left_data, int size_of_data )...
void swap( int index, string* data, int size_of_data)
{
    
    // find max value using: std::max_element ...
    
    string largest_value = *max_element( (data+index), data + size_of_data );
    string temporary[ size_of_data ];
    
    
    auto position = find( data, data + size_of_data, largest_value);
    int located = position - (data);
    
    // swap 0 element with: position...
    
    temporary [ index ] = data[ index ]; // MAKING COPY OF MAX VALUE / LOCAITON ...
    data[ index ] = data[ located ]; // ORIGINAL LOCATION SWAPED WITH FOUND MAX-VALUE / LOCAITON ...
    data[ located] = temporary[ index ];// MOVE ORIGINAL TO THE FOUND LOCATION ...
    
}




void printer(string* data, int size_of_data )
{
    
    for (int index = 0; index < size_of_data ; index++) {
        cout << "[" << index << "]\"" << data[ index ] << "\"" << " ";
    }
    cout<<endl;
}//void scribe()

