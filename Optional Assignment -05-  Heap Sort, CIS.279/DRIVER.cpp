// TO REPLACE LABE #04
//  main.cpp
//  Optional Assignment -05-  Heap Sort, CIS.279
//
//  Created by CIS on 5/10/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
#include "heap.hpp"
using namespace std;


int main()
{

    cout << endl << endl << "// int MAIN(): " << endl << endl;
    
    string a[6] = {"D", "B", "A", "C", "F", "E"};
    //...
    
    scribe( a, 6); //printg out array data: a[]
    
    heapSort(a, 6); //calling heapsort()...
    
    scribe( a, 6); //printg out array data: a[]
    
    cout << " Sorted array"
         << endl << endl;
    
//    string b[6] = {"25", "30", "20", "80", "40", "60"};
//    heapSort(b, 6);
//    cout << endl << endl << endl;
    
    
//    for (int i = 0; i < 6; i++)
//        
//        cout << b[i] << " "
//             << endl;
//    
//        cout << endl << endl
//             << " Sorted array" << endl;

    cout << endl << endl << "// END: MAIN() " << endl << endl << endl;
}  // end main
