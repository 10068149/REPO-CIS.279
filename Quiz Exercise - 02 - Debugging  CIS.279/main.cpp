



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
    void printer ( int );//
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    int main () {
        
        
        srand( time(0) );
        
        //    int input = ( rand() % 2147483647 );
        //    int input = 2147483647;
        //    int exspected_output = input * input;
        //    int exspected_output = 25;
        

        //INT, Max/Min Value: 2147483647
        //Square Root of Max int is: 46,340
        int input;
        
        cout
            << "// This app is designed to test for the following ranges" << endl
            << "// of INT type variables, "
            << "respectively, for both positive " << endl
            << "// and negtaive inputs values..." << endl << endl
            << "* NOTE: The maximum allowed value for INT variables is: 2147483647."
            << endl << endl << endl << endl;
        
        //Range A: negative inputs whose results is too large to fit (error)
        cout
            << "// Range A: negative inputs whose results is too large to fit (error):"
            << endl;
            
        input = -46341;
        printer( input );
        
        //Range B: negative inputs whose result is acceptable (normal)
        cout
            << "// Range B: negative inputs whose result is acceptable (normal): "
            << endl;
        
        input = -( ( rand() % 46339) + 1) ;
        printer( input );
        
        //Range C: positive inputs whose result is acceptable (normal)
        cout
            << "// Range C: positive inputs whose result is acceptable (normal): "
            << endl;
        
        input = ( rand() % 46339 ) + 1;
        printer( input );
        
        
        //Range D: positive input whose result is too large to fit (error)
        cout
            << "// Range D: positive input whose result is too large to fit (error): "
            << endl;
        
        input = 46341;
        printer( input );
        
        cout
        << endl << endl ;
        
        return 0;
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    int sqr ( int input )
    {
        return ( input * input );
    }
    

    void printer ( int input )
    {
        
        cout
            << endl
            << "- INPUT: " << input << endl
            << "- FUNCTION CALL: SQR( " << input << " );" << endl;
        
        int range = sqr( input );//givne range value ....
        
        assert( (input*input) == range );
        
        if ( (input < 2147483647) && (range > 0) ) {
            
            cout
            << "- FUNCTION RETURN: " << range << endl
            << "- RESULTS: This input, " << input << ", is in the"
            << " expsected range of INT type variables."
            << endl << endl << endl;
            
        } else
        {
            cout
            
            << "* ERROR!!! " << range << endl << endl
            << "* This input, " << input << ", when squared is out of range " << endl
            << "* of the maximum value allowed for an INT type " << endl
            << "* varable!"
            
            << endl << endl
            << "* NOTE: The maximum allowed value for INT variables is: 2147483647."
            
            << endl << endl << endl << endl ;
        }
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    













