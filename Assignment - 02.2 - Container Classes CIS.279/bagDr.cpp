//
//  bagDr.cpp
//  Assignment - 02 - Container Classes CIS.279
//
//  Created by ANTHONY NASH on 2/26/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//


// FILE: bag_demo.cxx
// This is a small demonstration program showing how the bag class is used.
#include <iostream> // Provides: COUT / CIN ...
#include <cstdlib> // Provides: EXIT_SUCCESS
#include <stdio.h>

#include "bag.hpp"



using namespace std;
using namespace ANTHONY_NASH_BAG;








int main()

// Test Run Requirements that shows:
// a sample client that instantiates a Bag object and displays
// the test cases shown below:

{
    // Instance object created ...
    cout
        << "// Instance object created ..."
        << endl
        << "** [OBJECT]: bag object; "
        << endl << endl;
    
    bag object;
    
    
    
    
    
    
    
    // Insert a \"four\" into the bag...
    
    cout
        << "// Insert a \"four\" into the bag..."
        << endl
        << "** [FUNCTION CALL]: object.insert(4); "
        << endl << endl;
    
    object.insert(4);
    


    
    
    
    
    // Fill the bag to capacity...
    cout
        << "// Fill the bag to capacity..."
        << endl
        << "** [FUNCTION CALL]: object.insert_full(); "
        << endl << endl;
    
    object.insert_full();
    
   
    
    
    
    
    //Show the size of the bag...
    cout
        << "//Show the size of the bag..."
        << endl
        << "** [FUNCTION CALL]: object.size(); "
        << endl << endl;
    
    object.size();
    

    
    // Display the number of \"fours\" in the bag...
    cout
        << endl << endl
        << "// Display the number of \"fours\" in the bag..."
        << endl
        << "** [FUNCTION CALL]: find_coppies(); "
        << endl;
    
    object.find_coppies(4);
    
    
    
    
    //Remove a \"four\" from the bag...
    cout
        << endl << endl
        << "//Remove a \"four\" from the bag..."
        << endl
        << "** [FUNCTION CALL]: erase( object );"
        << endl;
    
        object.erase(4);
    
    
    
    
    
    
    //Show the size of the bag
    cout
        << endl << endl
        << "//Show the size of the bag..."
        << endl
        << "** [FUNCTION CALL]: object.size(); "
        << endl << endl;
    
    object.size();

    
    
    
    
    
    
    
    //Display the number of fours in the bag
    cout
    << endl << endl
    << "// Display the number of \"fours\" in the bag..."
    << endl
    << "** [FUNCTION CALL]: find_coppies(); "
    << endl;
    
    object.find_coppies(4);

    
    
    
    
    
    
    
    //Display the number of fives in the bag
    cout
    << endl << endl
    << "// Display the number of \"fives\" in the bag..."
    << endl
    << "** [FUNCTION CALL]: find_coppies(); "
    << endl;
    
    object.find_coppies(5);

    
    
    
    
    
    
    
    //Remove all fives in the bag
    cout
        << endl << endl
        << "//Remove all \"fives\" in the bag..."
        << endl
        << "** [FUNCTION CALL]: erase( object );"
        << endl;
    
    object.erase(5);

    
    
    
    
    
    
    
    //Display the number of fives in the bag
    cout
    << endl << endl
    << "// Display the number of \"fives\" in the bag..."
    << endl
    << "** [FUNCTION CALL]: find_coppies(); "
    << endl;
    
    object.find_coppies(5);
    cout << endl;
    object.size();
    

    
    
    
    
    
    
    
    cout << endl << endl << endl; 
    return 0;
    
}
