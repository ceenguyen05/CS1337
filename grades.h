#ifndef GRADES_H
#define GRADES_H

class Grades 
{
    private :
    
    double grade ;
    
    public :
    
    // constructor 
    Grades () 
    {
        grade = 0.0 ;
    }
    // mutator 
    void setGrade (double grade0) 
    {
        grade = grade0 ;
    }
    
    // gets letter grade 
    char getLetterGrade () const 
    {
        if (grade >= 90)
        {
            return 'A' ;
        }
        else if (grade >= 80)
        {
            return 'B' ;
        }       
        else if (grade >= 70)
        {
            return 'C' ;
        }        
        else
        {
            return 'F' ;
        }        
    }
} ;

#endif 
