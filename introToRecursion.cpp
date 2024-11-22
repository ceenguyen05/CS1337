// introduction to recursion 
// recursion is when a fuction contains a call to itself 

#include <iostream>
using namespace std ;


void blastOff (int countdown)
{
    if (countdown == 0)
    {
        cout << "Blastoff!!!\n" ;
    }
    else 
    {
        cout << countdown << endl ;
        blastOff (--countdown) ;
    }
}

int main () 
{
    int number = 3 ;
    blastOff (number) ;
}