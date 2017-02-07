// FILE:            calcdriver.cpp ( CIS.279 )
// Description:     Test Driver: instantiates an AddSubMult
//                  object and mutates and displays the test
//                  case...
// Name:            Anthony Nash
// Date:            February 1, 2017 (Wed)


#include <iostream> // provides: INPUT OUTPUT STREAM DATA.
#include "calculator.hpp"

#ifndef calculator_hpp
#define calculator_hpp




namespace ANTHONY_NASH_TEST_DRIVER
{
    
    class Test_Driver
    {
        
        public:
        
        
        private:
        
        
        // MODIFICATION MEMBER FUNCTIONS...
        
        
        
        // Functional requirements per instructor...
        
        //1. Initializes a ‘new customer balance’ total to 0: AddSubMult()
        
//        AddSubMult();       //? Precondition: Default Constructor; takes no parameters...
        //? Postcondition: initialize an AddSubMult object;
        //  a ‘new customer balance’ total to 0: int total = 0;
        // it has no return value of any type...
        
        //2. Adds an integer input to the running total: addNum()
        
        //? why the "bools" and not void or int or something like that ??
        
        int test_addNum( int );
        //? Precondition: incoming value must be
        // a legitimate type INT varible...
        
        //? Postcondition:
        // adds the int parameter to the
        // private instance member:
        // int total...

        
        //3. Subtracts an integer input to the running total: subNum()
        
        int test_subNum( int );
        
        //? Precondition: incoming value must be
        // a legitimate type INT varible...
        
        //? Postcondition:
        // from the private instance member:
        // int total;
        
        
        //4. Multiplies the current total by an integer input: multNum()
        
        int test_multNum( int );
        
        //? Precondition: bool multNum...
        
        //? Postcondition: ...
        // A muator that multiplies the private instance
        // member by the int parameter:
        // int total;
        
        
        // CONSTANT MEMBER FUNCTIONS...
        
        //5. Obtains current total: getTotal()
        
        test_getTotal() const;
        
        // Accessor / Mutator Method of type CONST
        //? Precondition:
        
        //? Postcondition ...
        // returning the private instance member(s):
        // int totoal ...
        

        
    };// END: CLASS: Test_Driver()
    
}// END: NAMESPACE: ANTHONY_NASH_ADDSUBMULT()




int test_addNum( int ) {

    return 0;
    
}




#endif /* AddSubMult_hpp */
