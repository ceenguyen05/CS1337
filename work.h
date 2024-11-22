#ifndef WORK_H
#define WORK_H

class Work 
{
    private :
    double hours ;
    double wages ;
    
    public :
    // constrcutor 
    Work () ;
    
    // mutator 
    void setHours (double) ;
    void setWages (double);
    
    // accesor 
    double getHours () const ;
    double getWages () const ;
    double getPay () const ;
    double getOvertimeHours () const ;
    double getOvertimeWages () const ;
    
    // set overtime pay multiplier 
    static const double overtimePay ;
    
} ;

#endif 
