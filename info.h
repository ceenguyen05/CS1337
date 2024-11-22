#ifndef INFO_H
#define INFO_H
#include <string>

class Info 
{
    // private variables for the class 
    private :
    std :: string name ;
    int id ;
    double years ;
    
    public :
    // constructor 
    Info () ;
    
    // mutators
    void setName (const std:: string &) ;
    void setId (int) ;
    void setYears(double) ;
    
    // accessors
    std:: string getName () const ;
    int getId () const ;
    double getYears () const ;
} ;

#endif 
