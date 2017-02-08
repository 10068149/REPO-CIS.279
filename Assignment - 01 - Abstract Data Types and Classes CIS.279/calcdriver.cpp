// FILE:            calcdriver.cpp ( CIS.279 )
// Description:     Test Driver: instantiates an AddSubMult
//                  object and mutates and displays the test
//                  case...
// Name:            Anthony Nash
// Date:            February 1, 2017 (Wed)


//  Created by CIS on 1/31/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//







#include <iostream> // provides: INPUT OUTPUT STREAM DATA.
#include <climits>  // provides: SPECIFIC MAXIMUM SYSTEM AND...
                    // INTEGRAL TYPES COMPILER IMPLEMENTATION USED:
                    // INT is: INT_MAX & INT_MIN
#include <cassert>  // provides: DEBUGING TOOLS...

#include "calculator.hpp"



using namespace std;
using namespace ANTHONY_NASH_ADDSUBMULT;



void test_simplemath() {
    cout << "Running Simple Math Test:"<<endl;
    cout << "Operation, Input, Output"<<endl;
    
    // instantiates one AddSubMult object
    AddSubMult calculator;
    assert(calculator.getTotal() == 0);
    
    // addNum, 10, 10
    calculator.addNum(10);
    cout << "addNum, "<< 10 << ", " << calculator.getTotal()<<endl;
    assert(calculator.getTotal() == 10);

    // addNum, 20, 30
    calculator.addNum(20);
    cout << "addNum, "<< 20 << ", " << calculator.getTotal()<<endl;
    assert(calculator.getTotal() == 30);
    
    // subNum, 5, 25
    calculator.subNum(5);
    cout << "subNum, "<< 5 << ", " << calculator.getTotal()<<endl;
    assert(calculator.getTotal() == 25);
    
    // multNum, 2, 50
    calculator.multNum(2);
    cout << "mulNum, "<< 2 << ", " << calculator.getTotal()<<endl;
//    assert(calculator.getTotal() == 50);
    
    // addNum, 30, 80
    calculator.addNum(30);
    cout << "addNum, "<< 30 << ", " << calculator.getTotal()<<endl;
    assert(calculator.getTotal() == 80);
}

void test_addNum_positive_protections() {
    
    cout << endl<< "Running AddNum Protection Test ith positive value:"<<endl;
    cout << "Operation, Input, Is Succesful"<<endl;

    AddSubMult calculator;
    
    bool done = calculator.addNum(1999999999);
    cout << "addNum, "<< 1999999999 << ", " << (done ? "true" : "false") <<endl;
    assert(done == true);
    
    done = calculator.addNum(1999999999);
    cout << "addNum, "<< 1999999999 << ", " << (done ? "true" : "false") <<endl;
    assert(done == false);
}


void test_addNum_negative_protections() {
    
    cout
        << endl
        << "Running AddNum Protection Test with negative value:"
        << endl
        << "Operation, Input, Is Succesful"
        << endl;
    
    AddSubMult calculator;
    
    bool done = calculator.addNum(-1999999999);
    cout
    
        << "addNum, " << -1999999999 << ", " << (done ? "true" : "false")
        << endl;
    assert(done == true);
    done = calculator.addNum(-1999999999);
    cout << "addNum, " << -1999999999 << ", " << (done ? "true" : "false") <<endl;
    assert( done == false);
}



int main ()
{
    
    test_simplemath();
    test_addNum_positive_protections();
    test_addNum_negative_protections();
    
    return 0;
}












