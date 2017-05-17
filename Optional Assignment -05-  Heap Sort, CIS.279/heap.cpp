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







void heapSort ( string* anArray, int size_of_data )
//What: heap sort; sorts the items in an array into ASCENDING order.
//Pre:  1) array[] is not empty; there is at least one element in the array.
//Post: 1) returns sorrted array
{
    
    print(anArray, size_of_data);
    cout << "Origiinal Array" << endl;
    
    for (int index = size_of_data -1; index >= 0; --index) {
        // For(int i=n-1; i>=0;--i)
        
        rebuild( index, anArray, size_of_data);
        
    }//FOR(): INDEX...

    print(anArray, size_of_data);
    swap(anArray[0], anArray [size_of_data -1] );

    cout << "After swapping " << anArray[ 0] << " and " << anArray [ size_of_data -1 ] << endl;
    
    
    for ( int counter = 1; counter < size_of_data ; counter++)
    {


        //rebuild( counter, data, size_of_data);
        rebuild( 0, anArray, size_of_data - counter);
        
        print(anArray, size_of_data);
        
        cout
        << "rebuild ( 0, anArray, " << size_of_data - counter
        << " )" << endl;

        
        // do swap after this line
        swap(anArray[0], anArray [size_of_data - counter-1] );
        
        // do swap before this line

        print(anArray, size_of_data);
        
        cout
        << "After swaping " << anArray [ 0 ]
        << " and " << anArray [ size_of_data - counter-1 ] << endl;
    }//for(): COUNTER...
    
}//void heapSort ( string* data, int size_of_data ) {..}



//void rebuild( int, string* left_data, int size_of_data )...

void rebuild( int index, string* data, int size_of_data)
{

    // find max value using
                                            // DATA[] START, DATA[] END )
        string largest_value = *max_element( data, data + size_of_data );

        auto position = find( data, data + size_of_data , largest_value);
         int located = position-(data);
        swap(data[0], data [located] );
    
    // check for nodes ...
    int left_child_position = (index+1)*2-1;
    int right_child_position = (index+1)*2;
          // A=ROOT...
    //B= index*2...    //C=index*2+1...
 //D    //E         //F
    
    
    if(left_child_position > size_of_data-1) {
        
        // this is a leaf since position of both children are outside of allowed range
        return;
        
    } else if (right_child_position > size_of_data-1) {
        
        // this node has single child...
        if (right_child_position > size_of_data-1) { swap( data[index], data[right_child_position] ); }
        
    } else {
        // this node has 2 children
    }
    
}//VOID REBUILD(): INT INDEX, STRING *DATA, SIZE_OF_DATA




void print(string* data, int size_of_data )
{
    
    for (int index = 0; index < size_of_data ; index++) {
        cout << data[ index ] << " ";
    }
}//void scribe()

