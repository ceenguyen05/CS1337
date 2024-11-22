#ifndef TRAP_H
#define TRAP_H

#include "shapes.h"

class Trap : public Shapes 
{
    private :
    double base2 ;
    
    public :
    // constructor
    Trap() 
    {
        base2 = 0.0 ;
    }
    // mutator 
    void setBase2 (double base2_0)
    {
        base2 = base2_0 ;
    }
    // mutator 
    void setBases (double base0)
    {
        setBase (base0) ;
    }
    // accessor 
    double getBase2 () const 
    {
        return base2 ;
    }
    // get the area 
    double getTrapArea () const
    {
        return ((getBase() + getBase2()) / 2) * getHeight() ;
    }
} ;

#endif 
