#ifndef SHAPES_H
#define SHAPES_H

class Shapes 
{
    private :
    char shape ;
    double width ;
    double length ;
    double radius ;
    double base ;
    double height ;
    
    public : 
    // constructor 
    Shapes () 
    {
        shape = '\0' ;
        width = 0.0 ;
        length = 0.0 ;
        radius = 0.0 ;
        base = 0.0 ;
        height = 0.0 ;
    }
    // mutator 
    void setShape (char shape0)
    {
        shape = shape0 ;
    }
    // mutator 
    void setWidth (double width0)
    {
        width = width0 ;
    }
    // mutator 
    void setLength (double length0)
    {
        length = length0 ;
    }
    // mutator 
    void setBase (double base0)
    {
        base = base0 ;
    }
    // mutator 
    void setHeight (double height0)
    {
        height = height0 ;
    }
    // mutator 
    void setRadius (double radius0)
    {
        radius = radius0 ;
    }
    // accessor 
    char getShape () const 
    {
        return shape ;
    }
    // accessor 
    double getWidth () const 
    {
        return width ;
    }
    // accessor 
    double getLength () const 
    {
        return length ;
    }
    // accessor 
    double getRadius () const 
    {
        return radius ;
    }
    // accessor 
    double getBase () const 
    {
        return base ;
    }
    // accessor 
    double getHeight () const 
    {
        return height ;
    }
} ;

#endif 
