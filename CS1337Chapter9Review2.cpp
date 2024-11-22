#include <iostream>
using namespace std ;

int getNumber () ; // function prototype for ptr
void displayNumber (int*) ; // function prototype for ptr

int main ()
{
    int number = getNumber() ; // calls to get the number from user
    int * numptr = &number ; // creates a pointer and assigns the address to number 
    displayNumber (numptr) ; // calls to display the number 
}

int getNumber ()
{
    int number ;
    cout << "Enter in a whole number. " ;
    cin >> number ;
    return number ;
}

void displayNumber (int * numptr)
{
    cout << endl << endl ;
    cout << "The number you chose was " << *numptr << "." << endl ;
    cout << "The address was " << numptr << "." << endl << endl ;
}

