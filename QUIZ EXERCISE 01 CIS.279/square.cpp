//
//  square.cpp
//  QUIZ EXERCISE 01 CIS.279
//
//  Created by Anthony Nash on 1/22/17.
//  Copyright © 2017 CIS.279. All rights reserved.

#include <iostream>

using namespace std;


//3) Provide the function definition in another file ...
int sqr ( const int pass_by_value_data ) {

    int sqr_return_data = ( pass_by_value_data % 100 );
    
    return sqr_return_data;
}
