#include "work.h"
const double Work :: overtimePay = 1.5 ;

Work workClass ;

// initalizes variables from constrcutor 
Work :: Work () 
{
    hours = 0 ;
    wages = 0 ;
}

// mutator to assign variable value 
void Work :: setHours (double hours0) 
{
    hours = hours0 ;
}

// mutaor to assign variavle value 
void Work :: setWages (double wages0) 
{
    wages = wages0 ;
}

// accessor to retrieve info 
double Work :: getHours () const
{
    return hours ;
}

// accessor to retrieve info
double Work :: getWages () const 
{
    return wages ;
}

// accessor to compute how much was earned 
double Work :: getPay () const 
{
    return hours * wages ;
}

// accessor to compute overtime hours 
double Work :: getOvertimeHours () const
{
    return hours - 40 ;
}

// accessor to compute overtime pay 
double Work :: getOvertimeWages () const 
{
    return getOvertimeHours() * getWages() * overtimePay ;
}
