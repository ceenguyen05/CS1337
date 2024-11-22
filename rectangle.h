#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shapes.h"

class Rectangle : public Shapes 
{
    public :
    
    double getRectangleArea () const 
    {
        return getWidth() * getLength() ;
    }
} ;

#endif 
