#include "info.h"
#include <string>

// constructor initializing the variables 
Info :: Info ()
{
    name = "" ;
    id = 0 ;
    years = 0 ;
}

// mutator getting the name 
void Info :: setName (const std :: string & name0)
{
    name = name0 ;
}

// mutator getting the id 
void Info :: setId (int id0)
{
    id = id0 ;
}

// mutator getting the years 
void Info :: setYears (double years0)
{
    years = years0 ;
}

// accessor to get the name 
std :: string Info :: getName () const 
{
    return name ;
}

// accesor to get the id 
int Info :: getId () const 
{
    return id ;
}

// accesor to get the years 
double Info :: getYears () const 
{
    return years ;
}
