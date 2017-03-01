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
#include <cassert>
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
        << "// 1, Instance of bag object created ..."
        << endl
        << "** [ OBJECT ]: bag bag; "
        << endl << endl << endl;
    
    bag bag;

    
    
    // Insert a \"four\" into the bag...
    
    cout
        << "// 2, Insert a \"four\" into the bag..."
        << endl
        << "** [ FUNCTION CALL ]: object.insert(4); "
        << endl << endl << endl;
    
    bag.insert(4);

    
    
    // Fill the bag to capacity...
    cout
        << "// 3, Fill the bag to capacity..."
        << endl
        << "** [ FUNCTION CALL ]: bag.insert( INDEX ); "
        << endl << endl << endl;
    
    for (int index = bag.size(); index < 20; index++)
    {
        bag.insert(index);
    }

    
    
    
    //Show the size of the bag...
    cout
        << "// 4, Show the size of the bag..."
        << endl
        << "** [ FUNCTION CALL ]: bag.size(); "
        << endl
        << "** [ RETURN ]: Size of bag is: " << bag.size()
        << endl << endl;
    

    
    // Display the number of \"fours\" in the bag...
    cout
        << endl << endl
        << "// 5, Display the number of \"fours\" in the bag..."
        << endl
        << "** [ FUNCTION CALL ]: find_coppies(4); "
        << endl
        << "** [ RETURN ]: The count is: " << bag.find_coppies(4)
        << endl;

    
    
    //Remove a \"four\" from the bag...
    cout
        << endl << endl
        << "// 6, Remove a \"four\" from the bag..."
        << endl
        << "** [ FUNCTION CALL ]: erase( object );"
        << endl;
    
    if ( bag.erase(4) )
    {
        cout
            << "** [ RETURN: TRUE ]: item was deleted ..."
            << endl << endl << endl;
    }
    else
    {
        cout
            << "** [RETURN: FALSE]: item was not deleted ..."
            << endl << endl << endl;
    }

    
    
    //Show the size of the bag...
    cout
        << "// 7, Show the size of the bag..."
        << endl
        << "** [ FUNCTION CALL ]: bag.size(); "
        << endl
        << "** [ RETURN ]: Size of bag is: " << bag.size()
        << endl << endl;

    
    
    //Display the number of fours in the bag
    cout
        << endl
        << "// 8, Display the number of \"fours\" in the bag..."
        << endl
        << "** [ FUNCTION CALL ]: find_coppies(); "
        << endl;
    
    int counter = bag.find_coppies(4);
    
    cout
        << "** [ RETURN ] There is/are " << counter
        << " coppies of \"four\" " << endl
        << "              objects in the bag!"
        << endl << endl;

    
    
    //Display the number of fives in the bag
    cout
    << endl
    << "// 9, Display the number of \"five\" in the bag..."
    << endl
    << "** [ FUNCTION CALL ]: find_coppies(); "
    << endl;
    
    counter = bag.find_coppies(5);
    
    cout
    << "** [ RETURN ] There is/are " << counter
    << " coppies of \"five\" " << endl
    << "              objects in the bag!"
    << endl << endl;

    
    
    //Remove all fives in the bag
    cout
        << endl
        << "// 10, Remove all \"fives\" in the bag..."
        << endl
        << "** [ FUNCTION CALL ]: erase( object );"
        << endl;
    
    bag.erase(5);

    
    
    //Display the number of fives in the bag
    cout
    << endl << endl
    << "// 11, Display the number of \"five\" in the bag..."
    << endl
    << "** [ FUNCTION CALL ]: find_coppies(); "
    << endl;
    
    counter = bag.find_coppies(5);
    
    cout
    << "** [ RETURN ] There is/are " << counter
    << " coppies of \"five\" " << endl
    << "              objects in the bag!"
    << endl << endl <<endl;
    
    //Show the size of the bag...
    cout
    << "// 12, Show the size of the bag..."
    << endl
    << "** [ FUNCTION CALL ]: bag.size(); "
    << endl
    << "** [ RETURN ]: Size of bag is: " << bag.size()
    << endl << endl;


    
    
    
    
    
    cout << endl << endl << endl;
    return 0;
    
}
