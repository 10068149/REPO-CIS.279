// TO REPLACE LABE #04
//  heap.hpp
//  CIS.279
//
//  Created by CIS on 5/10/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#ifndef heap_hpp
#define heap_hpp

#include <iostream>

using namespace std;

void heapSort ( string* data, int size_of_data );
void rebuild( int, string* data, int size_of_data);
void scribe(string* left_data, int size_of_data );

#endif /* heap_hpp */
