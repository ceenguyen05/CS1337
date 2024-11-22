#ifndef EXCEPTIONCLASS_H
#define EXCEPTIONCLASS_H

class Exception 
{
    private : 
    double number1 , number2 ;
    
    public :
    // constructor
    Exception () : number1(0) , number2 (0) {}
    
    // mutators 
    void setNumbers (double n1 , double n2)
    {
        number1 = n1 ;
        number2 = n2 ;
    }
    
    // exception class 
    class no0 
    {
        
    } ;
    
    // get the return value and throw the exception if the n2 is 0 ;
    double getResult () const 
    {
        if (number2 == 0)
        {
            throw no0 () ;
        }
        else 
        {
            return number1 / number2 ;
        }
    }
} ; 

#endif 
