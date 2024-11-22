#include <iostream>
#include <string>
using namespace std ;

class Code // defines a class named Code 
{
    private : // private variable member 
    int codeHours ;
    
    public : // public function headers 
    void getHours (double) ;
    int displayHours () const ;
} ;


int main ()
{
    int hours ;
    Code class1 ;
    cout << "How many hours of code did you do today? " ;
    cin >> hours ;
    
    class1.getHours (hours) ; // class the function 
    // displays the number 
    cout << "Total code hours for today: " << class1.displayHours() << " hours" << endl << endl ;
    return 0 ;
}

// assigns the number from user into the privite variable in code Class 
void Code :: getHours (double hours)
{
    codeHours = hours ;
}

// returns the number to the function holding a int 
int Code :: displayHours () const 
{
    return codeHours ;
}

