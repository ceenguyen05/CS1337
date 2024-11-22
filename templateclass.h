#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H

template <class check> // template classed check , check is a fill in data type 
class Template 
{
    private :
    check number1 , number2 ;
    
    public :
    // constructor
    Template () : number1(0) , number2(0) {}
    
    // mutator 
    void setNumbers (check n1,  check n2) 
    {
        number1 = n1 ;
        number2 = n2 ;
    }
    
    // accessor 
    check getResult () const 
    {
        return number1 * number2 ;
    }
} ;

#endif 
