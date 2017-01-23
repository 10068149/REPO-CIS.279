//
//  main.cpp
//  QUIZ EXERCISE 01 CIS.279
//
//  Created by Anthony Nash on 1/22/17.
//  Copyright © 2017 CIS.279. All rights reserved.
//

// In this exercise you will demonstrate a multiple file program compilation:...
/*
 
 In this exercise you will demonstrate a multiple file program compilation:
 
 1) Declare a main.cpp and a square.cpp file...
 2) Provide the sqr( int) function declaration in main...
 3) Provide the function definition in another file...
 4) Pass in the int value comprised of the rightmost two digits of your GID for the int value to be
    squared...
 
 For example:
 
 Student:  Anne San Mateo
 
 GID:  G00123456
 
 Pass in the value 56 to be squared.
 
 Before getting started on this assignment become familiar with the topics discussed in our week 1 modules.
 
 Objectives:
 
 The following are the primary objectives of this exercise session:
 
 * Get up and running with your C++ compiler.
 * Perform a multiple file compilation.
 
 **/


#include <iostream>
#include "square.cpp"

using namespace std;






//Provide the sqr( int) function declaration in main...
int sqr( int );






int main (){
    
    char student_name_data[0];
    float student_ID_data;
    
    cout
    << "*INPUT DATA: Enter your name: ";
    cin.getline(student_name_data, 99);

    cout
    << "*INPUT DATA: Enter your student ID (excluding the: \"G\"): ";
    cin >> student_ID_data;

    cout
    << endl
    << student_name_data << " entered student ID: " << student_ID_data
    << endl
    << "*FUNCTION CALL: SQR()"
    << sqr(1);
    
    
    
    
    cout << endl << endl << endl << endl;
    
}
