#ifndef CIRCLE_H
#define CIRCLE_H

#include "shapes.h"
#include <cmath>

class Circle : public Shapes 
{
    public :
    // static variable PI 
    static const double PI ;
    
    // get the area 
    double getCircleArea () const 
    {
        return PI * getRadius() * getRadius() ;
    }
    
} ;

// initialize static const outside the class 
const double Circle :: PI = M_PI ;
#endif 
