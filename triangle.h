#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shapes.h"

class Triangle : public Shapes 
{
    public :
    
    double getTriangleArea () const 
    {
        return (getBase() * getHeight())/2 ;
    }
} ;

#endif 
