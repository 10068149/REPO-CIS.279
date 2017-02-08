// FILE:            AddSubMult.cpp ( CIS.279 )
// Description:     header implementation file ...
// Name:            Anthony Nash
// Date:            February 1, 2017 (Wed)


#include <cassert>
#include "calculator.hpp"



namespace ANTHONY_NASH_ADDSUBMULT {
    
    
    
    // define constants...
    const int AddSubMult :: MIN_INT_VARIABLE_TYPE_SIZE = -2147483647;
    const int AddSubMult :: MAX_INT_VARIABLE_TYPE_SIZE = 2147483647;
    
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

    if ( total > 0 && number > 0) {
        
      if( total + number  < 0) { return false; }
        
    }

    else if ( total < 0 && number < 0) {
        
       if ( total + number  > 0) { return false; }
    }

        total += number;
        
        return true;
    }
    
    
    
    
    
    
    //3. Subtracts an integer input to the running total: subNum()
    
    bool AddSubMult :: subNum( int number ) {
        
        //? Precondition: incoming value must be
        // a legitimate type INT varible...
        
        //? Postcondition:
        // from the private instance member:
        // int total;
        
        
            if ( total > 0 && -(number) > 0) {
                
                  if( total + -(number)  < 0) { return false; }
                
            }
            
            else if ( total < 0 && -(number) < 0) {
                
                   if ( total + -(number)  > 0) { return false; }
            }
        
        total -= number;
        
        return true;
        
    }
    
    
    
    
    
    
    //4. Multiplies the current total by an integer input: multNum()
    
    bool AddSubMult :: multNum( int number ) {
        
        //? Precondition: bool multNum...
        
        //? Postcondition: ...
        // A muator that multiplies the private instance
        // member by the int parameter:
        // int total;
        
        
            // total + number < MAX
            // number < MAX - total
            if ( number > MAX_INT_VARIABLE_TYPE_SIZE - total ) {
                
                return false;
                
            }
        
            else {
                
                total *= number;
                
                return true; }
        
        
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
