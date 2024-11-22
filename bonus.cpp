#include "bonus.h"

const int Bonus :: bonusPay = 500 ;
Bonus :: Bonus ()
{
    years = 0 ;
}

void Bonus :: setYears (double years0)
{
    years = years0 ;
}

double Bonus :: getYears () const 
{
    return years ;
}

int Bonus :: addBonus () const 
{
    return bonusPay ;
}