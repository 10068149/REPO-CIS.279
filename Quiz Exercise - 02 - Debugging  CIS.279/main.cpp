//
//  main.cpp
//  Quiz Exercise - 02 - Debugging  CIS.279
//
//  Created by CIS on 1/28/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream> // for INPUT/OUTPUT
#include <cassert>  // for ASSERT()
#include <cstdlib>  // for RAND() & SRAND()
using namespace std;

int sqr ( int ); //function decloraetion; Squar root: sqr()...



int main ()
{
    srand( time(NULL) );
    
    int input_number = ( rand() % 1000000 ) + 1;
    int exspected_output_number = input_number * input_number;
    
    
    //Range A: negative inputs whose results is too large to fit (error)
    
    //Range B: negative inputs whose result is acceptable (normal)
    
    //Range C: positive inputs whose result is acceptable (normal)
    
    //Range D: positive input whose result is too large to fit (error)
    cout
        << "//Range D: positive input whose result is too large to fit (error)..."
    
        << endl << endl
    
        << "* INPUT: " << input_number << endl
        << "* EXSPECTED OUTPUT: " << exspected_output_number << endl
        << "* FUNCTION CALL: SQR( " << input_number << " );"
    << endl;
    
    int function_call_reslust = sqr( input_number );
    assert( exspected_output_number == function_call_reslust );
    
    cout
        << "* FUNCTION RETURN: " << function_call_reslust << endl
        << endl
    << endl;
    
    
    //Fucntion call: sqr ( number ) provide test...
    //Cases for integer input: number...
    
    cout
        << endl << endl << endl << endl
        << endl << endl << endl << endl
        << endl;
    
    return 0;
}




int sqr ( int number )
{
    return ( number * number );
}
