// FILE:            AddSubMult.cpp ( CIS.279 )
// Description:     header implementation file ...
// Name:            Anthony Nash
// Date:            February 1, 2017 (Wed)


#include <cassert>
#include "calculator.hpp"



namespace ANTHONY_NASH_ADDSUBMULT {
    
    // Functional requirements per instructor...
    
    //1. Initializes a ‘new customer balance’ total to 0: AddSubMult()
    
    AddSubMult :: AddSubMult()
    
    {
    
        //? Precondition: Default Constructor; takes no parameters...
        //? Postcondition: initialize an AddSubMult object;
        //  a ‘new customer balance’ total to 0: int total = 0;
        // it has no return value of any type...
        
        total =0;
        
        
    }

    
    
    
    
    
    //2. Adds an integer input to the running total: addNum()
    
    //? why the "bools" and not void or int or something like that ??
    
    bool AddSubMult :: addNum( int number ) {
    
        //" Precondition: incoming value must be
        // a legitimate type INT varible...
        //? Postcondition:
        // adds the int parameter to the
        // private instance member:
        // int total...
        
        if ( number < INT64_MAX || number > INT64_MIN ) {
            total += number;
            return true;
        } else { return false; }
        
    }
        
        
        
        
    //3. Subtracts an integer input to the running total: subNum()
    
    bool AddSubMult :: subNum( int number ) {
        
        //? Precondition: incoming value must be
        // a legitimate type INT varible...

        //? Postcondition:
        // from the private instance member:
        // int total;
        
        if ( number < INT64_MAX || number > INT64_MIN ) {
            total -= number;
            return true;
        } else { return false; }
        
    }

    
        
        
        
    
    //4. Multiplies the current total by an integer input: multNum()
    
    bool AddSubMult :: multNum( int number ) {
            
        //? Precondition: bool multNum...

        //? Postcondition: ...
        // A muator that multiplies the private instance
        // member by the int parameter:
        // int total;

        if ( number < INT64_MAX || number > INT64_MIN ) {
            total *= number;
            return true;
        } else { return false; }
        
    }

        
        
        
        
        
        
        
        
        
        
    
    // CONSTANT MEMBER FUNCTIONS...
    
    
    
    //5. Obtains current total: getTotal()
    
    int AddSubMult :: getTotal() const {
        
        // Accessor / Mutator Method of type CONST
        //? Precondition:

        //? Postcondition ...
        // returning the private instance member(s):
        // int totoal ...
     
        return total;
    }
    
}
