// recursion program that calculates the factorial of a number 

#include <iostream>
using namespace std ;

int factorial (int value) ;

int main () 
{
    int value ;
    while (true)
    {
        cout << "Enter a integer value: " ;
        cin >> value ;
        if (value < 0)
        {
            cout << "Cannot have a negative number, Try Again. \n\n" ;
        }
        else 
        {
            break ;
        }
    }
    cout << "The factorial of " << value << " is " << factorial(value) ;
}

int factorial (int value)
{
    if (value == 0)
    {
        return 1 ;
    }
    else 
    {
        return value * factorial (value - 1) ;
    }
}
