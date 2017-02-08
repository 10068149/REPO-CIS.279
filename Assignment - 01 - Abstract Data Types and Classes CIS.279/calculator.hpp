// FILE:            AddSubMult.hpp ( CIS.279 )
// Description:     Class declaration header file ...
// Name:            Anthony Nash
// Date:            February 1, 2017 (Wed)



#ifndef calculator_hpp
#define calculator_hpp



namespace ANTHONY_NASH_ADDSUBMULT
{
    
    class AddSubMult
    {
        
    public:
        
        // CONSTANT VARIABLES ...
        
        static const int MIN_INT_VARIABLE_TYPE_SIZE;
        static const int MAX_INT_VARIABLE_TYPE_SIZE;
        
        // MODIFICATION MEMBER FUNCTIONS...
        
        
        
        // Functional requirements per instructor...
        
        //1. Initializes a ‘new customer balance’ total to 0: AddSubMult()
        
        AddSubMult();       //? Precondition: Default Constructor; takes no parameters...
        //? Postcondition: initialize an AddSubMult object;
        //  a ‘new customer balance’ total to 0: int total = 0;
        // it has no return value of any type...
        
        //2. Adds an integer input to the running total: addNum()
        
        //? why the "bools" and not void or int or something like that ??
        
        bool addNum( int );  //? Precondition: incoming value must be
        // a legitimate type INT varible...
        
        //? Postcondition:
        // adds the int parameter to the
        // private instance member:
        // int total...
        
        //3. Subtracts an integer input to the running total: subNum()
        
        bool subNum( int );  //? Precondition: incoming value must be
        // a legitimate type INT varible...
        
        //? Postcondition:
        // from the private instance member:
        // int total;
        
        //4. Multiplies the current total by an integer input: multNum()
        
        bool multNum( int );    //? Precondition: bool multNum...
        
        //? Postcondition: ...
        // A muator that multiplies the private instance
        // member by the int parameter:
        // int total;
        
        
        
        // CONSTANT MEMBER FUNCTIONS...
        
        
        
        //5. Obtains current total: getTotal()
        
        int getTotal() const;   // Accessor / Mutator Method of type CONST
        //? Precondition:
        
        //? Postcondition ...
        // returning the private instance member(s):
        // int totoal ...
        
        
    private:
        
        int total;  //current running total of the accumulator...
        
    };// END: CLASS: AddSubMult()
    
}// END: NAMESPACE: ANTHONY_NASH_ADDSUBMULT()

#endif /* AddSubMult_hpp */
