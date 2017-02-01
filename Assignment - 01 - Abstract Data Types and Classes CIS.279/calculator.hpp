// FILE:            AddSubMult.hpp ( CIS.279 )
// Description:     Class declaration header file ...
// Name:            Anthony Nash
// Date:            February 1, 2017 (Wed)


//? what is the following here ...
#ifndef calculator_hpp
#define calculator_hpp



#include <stdio.h>



class AddSubMult
{
    public:
    
        // MODIFICATION MEMBER FUNCTIONS...
         // Functional requirements per instructor...
    
        //1. Initializes a ‘new customer balance’ total to 0: AddSubMult()
    
        //* AddSubMult(); // Constructors; takes no parameters...
    
        //2. Adds an integer input to the running total: addNum()
    
        //? why the "bools" and not void or int or something like that ??
    
        bool addNum( int );  // bool addNum; mutator()
                             // adds the int parameter to the
                             // private instance member:
                             // int total...
    
        //3. Subtracts an integer input to the running total: subNum()
    
        bool subNum( int );  // bool subNum:
                             // A mutator that subtracts the int parameter
                             // from the private instance member:
                             // int total;
    
        //4. Multiplies the current total by an integer input: multNum()
    
        bool multNum( int ); // bool multNum:
                             // A muator that multiplies the private instance
                             // member by the int parameter:
                             // int total;
    
        // CONSTANT MEMBER FUNCTIONS...
    
        //5. Obtains current total: getTotal()
        
        int getTotal() const;   // Accessor / Mutator Method of type CONST
                                // returning the private instance member(s):
                                // int totoal ...

    
    private:
    
        int total; //current running total of the accumulator...
    
};



#endif /* AddSubMult_hpp */
