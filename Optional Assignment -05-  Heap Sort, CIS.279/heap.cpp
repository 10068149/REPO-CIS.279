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
#include <iostream>
#include <vector>


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

    for ( int counter = 0; counter < 1; counter++)
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
        << "        // ..."
        << endl << endl << endl << endl;

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



/**
 void rebuild(string* left_data, int size_of_data )
 {
 find LARGEST item and swap with the data[0]
 cout << endl << endl << endl;
 scriber( left_data, size_of_data);
 
 
 
 string right_data[ size_of_data];
 
 
 for ( int counter = 0; counter < size_of_data ; counter++) {
 
 for (int index= counter; index < (size_of_data)-1; index++) {
 
 right_data[index] = left_data[index+1];
 
 cout << "   *TEST: " << left_data[counter]
 << " compared to " << right_data[index]
 << endl;
 
 
 if ( (left_data[counter].compare( right_data[index]) != 0) )
 cout << "*RESULTS: " << left_data[counter]
 << " is NOT equal to " << right_data[index]
 << endl << endl;
 
 
 if ( (left_data[counter].compare( right_data[index]) == 0) )
 cout << "*RESULTS: " << left_data[counter]
 << " is EQUAL to " << right_data[index]
 << endl << endl;
 
 if ( (left_data[counter].compare( right_data[index]) < 0) )
 cout << "*RESULTS: " << left_data[counter]
 << " is LESS than " << right_data[index]
 << endl << endl;
 
 if ( (left_data[counter].compare( right_data[index]) > 0) )
 cout << "*RESULTS: " << left_data[counter]
 << " is GREATER than " << right_data[index]
 << endl << endl;
 
 }//FOR()....
 }
 
 }//rebuild()...
 
 **///void rebuild( int, string* left_data, int size_of_data )...
void rebuild( int index, string* data, int size_of_data)
{
    
    // find max value using: std::max_element ...
    
        string largest_value = *max_element( data, data + size_of_data );

        cout
        << endl
        << "            // find max value using: std::max_element ..." << endl
        << "            * largest Value IS: " << largest_value << endl
        << endl;

    
    
    // find position using: std::distance...
    
        cout
        << "            // find position using: ..." << endl;

        auto position = find( begin(data), end(data), largest_value);
        
        cout << "       * index: " << position-begin(data) << endl;
        cout << "       * item: " << *position;
    
    

    
    
    // swap 0 element with: position...
    
        cout
        << "            // swap 0 element with: position..."
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

