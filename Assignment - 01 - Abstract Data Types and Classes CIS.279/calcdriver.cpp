// FILE:            calcdriver.cpp ( CIS.279 )
// Description:     Test Driver: instantiates an AddSubMult
//                  object and mutates and displays the test
//                  case...
// Name:            Anthony Nash
// Date:            February 1, 2017 (Wed)


//  Created by CIS on 1/31/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//







#include <iostream> // provides: INPUT OUTPUT STREAM DATA.
#include <climits>  // provides: SPECIFIC MAXIMUM SYSTEM AND...
                    // INTEGRAL TYPES COMPILER IMPLEMENTATION USED:
                    // INT is: INT_MAX & INT_MIN

#include "calculator.hpp"



using namespace std;
using namespace ANTHONY_NASH_ADDSUBMULT;



// define constants...
const int AddSubMult :: MIN_INT_VARIABLE_TYPE_SIZE = -2147483647;
const int AddSubMult :: MAX_INT_VARIABLE_TYPE_SIZE = 2147483647;





int main ()
{
    
    //    * Main function can only create objects and call
    //    functions.
    
    //    * All functional requirements for this
    //    program must be met in one or more functions
    //    (member or no-member) and not in main.
    
    //    * Use main as the driver for your program only.
    
    AddSubMult test_number;
    
    
    
    
    
    return 0;
}














        //1. Initializes a ‘new customer balance’ total to 0: AddSubMult()
        
        int test_AddSubMult( int );       //? Precondition: Default Constructor; takes no parameters...
        //? Postcondition: initialize an AddSubMult object;
        //  a ‘new customer balance’ total to 0: int total = 0;
        // it has no return value of any type...






        //2. Adds an integer input to the running total: addNum()
        
        //? why the "bools" and not void or int or something like that ??
        
        int test_addNum( int );
        //? Precondition: incoming value must be
        // a legitimate type INT varible...
        
        //? Postcondition:
        // adds the int parameter to the
        // private instance member:
        // int total...







        //3. Subtracts an integer input to the running total: subNum()
        
        int test_subNum( int );
        
        //? Precondition: incoming value must be
        // a legitimate type INT varible...
        
        //? Postcondition:
        // from the private instance member:
        // int total;
        






        //4. Multiplies the current total by an integer input: multNum()
        
        int test_multNum( int );
        
        //? Precondition: bool multNum...
        
        //? Postcondition: ...
        // A muator that multiplies the private instance
        // member by the int parameter:
        // int total;
        





        // CONSTANT MEMBER FUNCTIONS...
        
        //5. Obtains current total: getTotal()
        
        int test_getTotal( int );
        
        // Accessor / Mutator Method of type CONST
        //? Precondition:
        
        //? Postcondition ...
        // returning the private instance member(s):
        // int totoal ...
        

        



int test_addNum( int ) {

    return 0;
    
}

