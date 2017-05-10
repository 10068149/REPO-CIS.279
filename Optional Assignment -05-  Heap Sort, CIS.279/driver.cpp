// TO REPLACE LABE #04
//  main.cpp
//  Optional Assignment -05-  Heap Sort, CIS.279
//
//  Created by CIS on 5/10/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
using namespace std;


int main()

{
    
    string a[6] = {"D", "B", "A", "C", "F", "E"};
    
    //heapSort(a, 6);
    
    for (int i = 0; i < 6; i++)
        
        cout << a[i] << " ";
    
    cout << " Sorted array" << endl;
    
    string b[6] = {"25", "30", "20", "80", "40", "60"};
    
    //heapSort(b, 6);
    
    for (int i = 0; i < 6; i++)
        
        cout << b[i] << " ";
    
    cout << " Sorted array" << endl;
    
}  // end main
