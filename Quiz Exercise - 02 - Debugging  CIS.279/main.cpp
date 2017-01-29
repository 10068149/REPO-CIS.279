



//
//  main.cpp
//  Quiz Exercise - 02 - Debugging  CIS.279
//
//  Created by Anthony Nash on 1/28/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//









































#include <iostream> // for INPUT/OUTPUT
#include <cassert>  // for ASSERT()
#include <cstdlib>  // for RAND() & SRAND()
#include <time.h>   // for system time functions ...

using namespace std;















































int sqr ( int ); //function decloraetion; Squar root: sqr()...




































int main ()
{
    srand( time(0) );
    
//    int input = ( rand() % 2147483647 ) + 2147483647;
    int input = 5;
//    int exspected_output = input * input;
//    int exspected_output = 25;
    
    
    //Fucntion call: sqr ( number ) provide test...
    //Cases for integer input: number...

    
    
    //Range A: negative inputs whose results is too large to fit (error)
    
    //Range B: negative inputs whose result is acceptable (normal)
    
    //Range C: positive inputs whose result is acceptable (normal)
    
    //Range D: positive input whose result is too large to fit (error)
    cout
        << "//Range D: positive input whose result is too large to fit (error)..."
        << endl << endl;
    
    cout
        << "* INPUT: " << input << endl;
    
//    cout
//        << "* EXSPECTED OUTPUT: " << exspected_output << endl;

    cout
        << "* FUNCTION CALL: SQR( " << input << " );" << endl;

    
    int function_call_reslust = sqr( input );
//    assert( exspected_output == function_call_reslust );
    
    if ( function_call_reslust < 2147483647 )
    {
    
    cout
        << "* FUNCTION RETURN: " << function_call_reslust << endl
        << endl
    << endl;
        
    } else
    {
    cout
        << "* ERROR! " << function_call_reslust << " is greater"
        << " than the maximum number allowed for an INT varable ("
        << " MAX: 2147483647 )!"
        << endl;
    }
    
    
    
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



















