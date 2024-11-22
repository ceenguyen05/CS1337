#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include "grades.h"

class Assignment : public Grades
{
    private :
    
    int questions ;
    int correctChoices ;
    double result ;
    
    public :
    
    // constructor 
    Assignment () 
    {
        questions = 0 ;
        correctChoices = 0 ;
        result = 0.0 ;
    }
    
    // mutator 
    void setQuestions (int questions0)
    {
        questions = questions0 ;
    }
    
    // mutator 
    void setCorrectChoices (int correctChoices0)
    {
        correctChoices = correctChoices0 ;
    }
    
    // mutator to get the assignment grade 
    double getAssignmentGrade () const
    {
        return static_cast<double> (correctChoices) / questions * 100 ;
    }
    
    // uses base class in this derived class 
    char getAssignmentLetter ()
    {
        setGrade (getAssignmentGrade()) ;
        return getLetterGrade() ;
    }
} ;

#endif 
