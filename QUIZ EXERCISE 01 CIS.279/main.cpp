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
 * Name your program files and included methods according to specification given.
 + Indicate the environment in which your program was developed (i.e. Visual Studio, Gnu C++, ...)
 + ONLY upload the files required, not an entire development environment.
 + Please DO NOT use packages, or create new namespaces, unless specifically requested in the assignment specification;
   If your IDE creates them, remove the package directive prior to submission.
 + Do NOT use names which include spaces for files or folders.
 + No zip files.
 
 **/



#include <iostream>
using namespace std;






//Provide the sqr( int) function declaration in main...
int sqr( const int passed_by_value );






int main (){
    
    int GID =0;
    int pass_by_value_for_sqr =0;
    const int ARRAY_SIZE =50;
    char student_name_data[ ARRAY_SIZE  ];
    
    cout
    << "*INPUT DATA: Enter your name: ";
    cin.getline(student_name_data, ARRAY_SIZE );

    cout
    << "*INPUT DATA: Enter your student ID (excluding the \"G\"): ";
    cin >> GID;

    cout
    << endl
    << student_name_data << " entered student ID: " << GID
    << endl
    << endl;
    
    //value comprised of the rightmost two digits of your GID...
    pass_by_value_for_sqr = GID % 100;
    
    cout
    << "Passing in the value of " << pass_by_value_for_sqr
    << " to be squared..."
    << endl
    << endl
    << "Squared results of " << pass_by_value_for_sqr
    << " is : " << sqr( pass_by_value_for_sqr );
    
    

    
    
    
    
    
    
    cout << endl << endl << endl << endl;
}
