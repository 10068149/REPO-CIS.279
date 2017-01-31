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
#include <time.h>   // for SYSTEM TIME FUNCTIONS() ...

using namespace std;



int sqr ( int ); //function declaration; Square root: sqr()...
void printer ( int );//
int MAX_INT_VALUE_SIZE = 2147483647;


int main () {
    
    
    srand( time(0) );
    
    int input =0;
    
    
    cout
        << "// This app is designed to test for the following ranges" << endl
        << "// of INT type variables, "
        << "respectively, for both positive " << endl
        << "// and negative inputs values..." << endl << endl
        << "* NOTE: The maximum allowed value for INT variable types is: 2147483647."
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




int sqr ( int input ) {
    return ( input * input );
}



void printer ( int input ) {
    
    cout
        << endl
        << "- INPUT: " << input << endl
        << "- FUNCTION CALL: SQR( " << input << " );" << endl;
    
    int range = sqr( input );
    
    assert( (input*input) == range );
    
    if ( (input < MAX_INT_VALUE_SIZE) && (range >= 0) ) {
        
        cout
            << "- FUNCTION RETURN: " << range << endl
            << "- RESULTS: This input, " << input << ", when squared, is in the"
            << " expected" << endl
            << "  range of INT type variables."
            << endl << endl << endl;
        
    } else
    {
        cout
            << "* ERROR: " << range << endl
            << "  This input, " << input << ", when squared, is out of range " << endl
            << "  of the maximum value allowed for an INT type " << endl
            << "  variable!"
            
            << endl
            << "* NOTE: The maximum allowed value for INT variables respectively is: 2147483647."
            
            << endl << endl << endl << endl ;
    }
    
    
    
    
}



/* --------- OUTPUT: START ----------------------------------------------------
 
 // This app is designed to test for the following ranges
 // of INT type variables, respectively, for both positive
 // and negative inputs values...
 
 * NOTE: The maximum allowed value for INT variable types is: 2147483647.
 
 
 
 // Range A: negative inputs whose results is too large to fit (error):
 
 - INPUT: -46341
 - FUNCTION CALL: SQR( -46341 );
 * ERROR: -2147479015
 This input, -46341, when squared, is out of range
 of the maximum value allowed for an INT type
 varable!
 * NOTE: The maximum allowed value for INT variables is: 2147483647.
 
 
 
 // Range B: negative inputs whose result is acceptable (normal):
 
 - INPUT: -28764
 - FUNCTION CALL: SQR( -28764 );
 - FUNCTION RETURN: 827367696
 - RESULTS: This input, -28764, when sqaured, is in the expsected
 range of INT type variables.
 
 
 // Range C: positive inputs whose result is acceptable (normal):
 
 - INPUT: 3845
 - FUNCTION CALL: SQR( 3845 );
 - FUNCTION RETURN: 14784025
 - RESULTS: This input, 3845, when sqaured, is in the expsected
 range of INT type variables.
 
 
 // Range D: positive input whose result is too large to fit (error):
 
 - INPUT: 46341
 - FUNCTION CALL: SQR( 46341 );
 * ERROR: -2147479015
 This input, 46341, when squared, is out of range
 of the maximum value allowed for an INT type
 varable!
 * NOTE: The maximum allowed value for INT variables is: 2147483647.
 
 
 
 
 
 Program ended with exit code: 0
 
 --------- OUTPUT: END ------------------------------------------------------*/






 //Miss Darya Comments:
/**   Miss Darya Comments:
 
 
 Darya Prokurat:
	1. usually you should always keep in mind everything you learned in previouse lessons and follow that
	at least to yourself, because othervise you will build a habit
 [i] Anthony Nash:
	( I see an error; my indents . .  )
 Darya Prokurat:
	at most because you teacher can always - some your mark (I would do if I was a techer...)
	what would you expect method printer do, if it was written by someone else and you can't see his implementation?
	would you guess that it takes a number do sqr logic inside (keeping the actual sqr logic! assuming that this time it is 100% correct), call sqr method for testing and print lots of lines with result?
	I would never guess that by the function name
	int range = sqr( input );
	what? why sqr resulkt is range?
	>
 
 "* NOTE: The maximum allowed value for INT variables respectively is: 2147483647."
	2147483647 is max allowed value to save in int
	you function accept int and return sqr(int)
	so the max allowed INPUT is sqrt(
 
 2147483647) =
 
 46340
	if you put
 
 46340 + 1, sqr of itt will be more then
 
 2147483647
 [i] Anthony Nash:
	I see and understand your advice; on the question regarding is (46340+1)^2 >  2147483647 , . . .
	Screen Shot |
	https://drive.google.com/open?id=0B-emntWxvDlccWFkREdCYTFWb0U
 
 
 
 
 
 
 
 
 
 
 Darya Prokurat:
	2.
 while this
  input = -( ( rand() % 46339) + 1) ;
 will provide correct number from group B, using rand in tests is considered harmful. the reason is because with rand it possible to get next situation:
 a) I run  a tests and one of them fail
 b) I start beduging to find a problem but test pass
 c) I can't find a problem because can't reproduce a situation when test fail and spend a lot of time on useless debugging because on bedugging a different number was generated with rand()
 [i] Anthony Nash:
	( got it; no “rand()” values . . .  )
 Darya Prokurat:
	2147483647 <
 
 2147488281
	didn't get what you was trying to show me with that screenshot?)
 [i] Anthony Nash:
	oh , . . .
	you asked , . . .
 Darya Prokurat:
	it was not a sqution
 [i] Anthony Nash:
	never mind!
 Darya Prokurat:
	question
	it was a comment
 [i] Anthony Nash:
	you were showing me a statement; I understand , : )
 Darya Prokurat:
	the text you print
	says that the max value is
 
 2147483647
	yes, this is max value
 [i] Anthony Nash:
	yes, I understand what you were saying , : )
 Darya Prokurat:
	of the int variable
 [i] Anthony Nash:
	you were saying that , . . .
 Darya Prokurat:
	but the sqr input must be less then
 
 46340
 [i] Anthony Nash:
	“2147483647” is not the issue but the sqr() of “2147483647” is the issue . . .
	got it !!
 Darya Prokurat:
	so if I would get this comment as the result of execution my sqr function
	I would not understand why are you telling me about max value as
 
 2147483647
	like I am asking for the sqr (this mean I do *not* know what is the sqr, right?) so I do not know that my sqr will be more that this max value
	if you are going to tell me something about max value, it should be max allowed value for the sqr input
	line 26:
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 int MAX_INT_VALUE_SIZE = 2147483647;
	3.
 
 line 26: int MAX_INT_VALUE_SIZE = 2147483647;
	there is a defined values in http://www.cplusplus.com/reference/climits/
	there is a defined values in http://www.cplusplus.com/reference/climits/
	you should #include this file and use
 
 INT_MAX const instead of defining you own
	the reason is that the size of each type is actually vary depends on the system there you run the program. 2147483647 is *most often* number, but on somevery-very-old computer from 2000, it may be a
 
 32767  instead
	and finally
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 4.
	you was asked to submit txt file
	I am 100% sure it does NOT mean to same the cpp code! in txt file by changing .cpp ti .txt
	*I am 100% sure it does NOT mean to save the cpp code! in txt file by changing .cpp ti .txt
	write your teacher/other students and find the format of txt file. it is NOT a cpp code.
	it most likelly will be either
	a)
	-46341
 
 -10 10
 
 46341
	or
	b)
	-46341
 -10
 10
 46341
	or
	c)
	-46341
 -10 100
 10 100
 46341
	any code you write for this task is only for yourself. you was asked to only provide numbers
	if you do not have a way to find the format
	I would made a bet for the #a

 
 
 
 
 
 */


