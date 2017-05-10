// TO REPLACE LABE #04
//  main.cpp
//  Optional Assignment -05-  Heap Sort, CIS.279
//
//  Created by CIS on 5/10/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
#include "heap.hpp"
#include "heap.cpp"
using namespace std;


int main()

{
    
    string a[6] = {"D", "B", "A", "C", "F", "E"};
    int MAX_SIZE = ( sizeof(a) ) / ( sizeof(a[0]) );
    
    heapSort(a, MAX_SIZE);
    
    for (int i = 0; i < 6; i++)
        
        cout << a[i] << " ";
    
    cout << " Sorted array" << endl;
    
    string b[6] = {"25", "30", "20", "80", "40", "60"};
    MAX_SIZE = ( sizeof(a) ) / ( sizeof(a[0]) );
    
    heapSort(b, MAX_SIZE);
    
    
    for (int i = 0; i < 6; i++)
        
        cout << b[i] << " ";
    
    cout << " Sorted array" << endl;
    
}  // end main
