#ifndef DIVIDE_H
#define DIVIDE_H

#include <stdexcept>

class Divide 
{
    private : 
    double number1 , number2 ;
    
    public : 
    // constructor 
    Divide () : number1(0) , number2() {} 
    
    // exception class 
    class Below50 
    {
        
    } ;
    
    class No0 
    {
        
    } ;
    // mutators 
    void setNumbers (double num1 , double num2)
    {
        number1 = num1 ;
        number2 = num2 ;
    }
    // accessor and throw 
    double getResult () const 
    {
        if (number1 == 0 || number2 == 0)
        {
            throw No0 () ;
        }
        else if (number1 / number2 < 50)
        {
            throw Below50 () ;
        }
        else 
        {
            return number1 / number2 ;
        }
    }
} ;

#endif 
