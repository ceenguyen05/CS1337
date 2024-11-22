#ifndef BONUS_H
#define BONUS_H

class Bonus 
{
    private :
    double years ;
    
    public :
    Bonus () ;
    
    void setYears (double) ;
    
    double getYears () const ;
    int addBonus () const ;
    
    static const int bonusPay ;
} ;

#endif 
