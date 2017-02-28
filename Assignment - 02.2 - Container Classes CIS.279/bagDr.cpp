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
    cout
        << "// Instance object created ..."
        << endl
        << "** [OBJECT]: bag object; "
        << endl << endl;
    
    bag object;
    
    
    
    
    
    cout
        << "// Insert a “four” into the bag..."
        << endl
        << "** [FUNCTION CALL]: object.insert(4); "
        << endl << endl;
    
    object.insert(4);
    


    
    cout
        << "// Fill the bag to capacity..."
        << endl
        << "** [FUNCTION CALL]: object.insert_full(); "
        << endl << endl;
    
    object.insert_full();
    
    
    
    cout
        << "//Show the size of the bag..."
        << endl
        << "** [FUNCTION CALL]: object.count(); "
        << endl << endl;
    
    object.count();
    

    
    
    cout
        << endl << endl
        << "// Display the number of “fours” in the bag..."
        << endl
        << "** [FUNCTION CALL]: find_coppies(); "
        << endl;
    
    object.find_coppies(4);
    
    
    
    
    
    cout
        << "//Remove a four from the bag..."
        << endl
        << "** [FUNCTION CALL]: erase( object );"
        << endl << endl;
    
    
    
    
    
    
    
    //Show the size of the bag
    //...
    
    
    
    
    
    
    
    //Display the number of fours in the bag
    //...
    
    
    
    
    
    
    
    //Display the number of fives in the bag
    //...
    
    
    
    
    
    
    
    //Remove all fives in the bag
    //...
    
    
    
    
    
    
    
    //Display the number of fives in the bag
    //...
    

    
    
    
    
    
    
    
    cout << endl << endl << endl; 
    return 0;
    
}
