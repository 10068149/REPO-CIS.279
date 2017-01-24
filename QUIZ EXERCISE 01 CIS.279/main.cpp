/* File: squares.cpp
 
// Functions:
// main(), sqr()
-------------------------------------------------- */

#include <iostream>
using namespace std;
const int ARRAY_SIZE =50;


/*--------------------------------------------------
Functions: main(), sqr()

 Title: Quiz Exercise # 1, Multiple File Compilation

 Description:
 calculates and displays the squares of 1 - 6 as a double

 Programmer: Student Name

 Date: 8/17/2016

 Version: 1.0

 Environment: // Hardware: Intel Xeon PC Software: Windows 7

 Compiles under Microsoft Visual Studio 2010

 Output: squares of numbers 1 through 6 to console 
 
 Parameters: void

 Returns: EXIT_SUCCESS

 History Log:
 8/17/16 <student initials> completed version 1.0

*/

//
//  main.cpp
//  QUIZ EXERCISE 01 CIS.279
//
//  Created by Anthony Nash on 1/22/17.
//  Copyright © 2017 CIS.279. All rights reserved.
//  IDE type: Apple Xcode ( Version 8.2.1 (8C1002) )

// Homework Guidelines:
/*
 
 Homework Guidelines:
 
 + Be sure your name is included in an initial comment of EACH file submitted.
 + Name your program files and included methods according to specification given.
 + Indicate the environment in which your program was developed (i.e. Visual Studio, Gnu C++, ...)
 + ONLY upload the files required, not an entire development environment.
 + Please DO NOT use packages, or create new namespaces, unless specifically requested in the assignment specification;
   If your IDE creates them, remove the package directive prior to submission.
 + Do NOT use names which include spaces for files or folders.
 + No zip files.
 
 **/












//Provide the sqr( int) function declaration in main...
int sqr( const int passed_by_value );









int main ()

{
    
    int GID =0;
    int value_for_sqr =0;
    char student_name [ ARRAY_SIZE  ];
    
    cout
    << "* INPUT DATA: Enter your name: ";
    cin.getline(student_name, ARRAY_SIZE );

    cout
        << "* INPUT DATA: Enter your student ID (excluding the \"G\"): ";
    cin >> GID;

    cout
        << endl
        << student_name << " entered student ID: " << GID
        << endl
        << endl;
    
    //value comprised of the rightmost two digits of your GID...
    value_for_sqr = GID % 100;
    
    cout
        << "* Passing in the value of " << value_for_sqr
        << " to be squared..."
        << endl
        << "* Squared results of " << value_for_sqr
        << " is: " << sqr( value_for_sqr );
    
    cout
        << endl << endl << endl << endl << endl << endl << endl;
}









