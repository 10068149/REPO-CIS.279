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
    
    int student_ID_data =0;
    int squared_results =0;
    const int ARRAY_SIZE =50;
    char student_name_data[ ARRAY_SIZE  ];
    
    cout
    << "*INPUT DATA: Enter your name: ";
    cin.getline(student_name_data, ARRAY_SIZE );

    cout
    << "*INPUT DATA: Enter your student ID (excluding the \"G\"): ";
    cin >> student_ID_data;

    cout
    << endl
    << student_name_data << " entered student ID: " << student_ID_data
    << endl
    << endl;
    
    squared_results = sqr(student_ID_data);
    
    cout
    << "Passing in the value of " << squared_results
    << " to be squared..."
    << endl
    << endl
    << "Squared results of " << squared_results
    << " is : " << ( squared_results*squared_results);
    
    

    
    
    
    
    
    
    cout << endl << endl << endl << endl;
}
