#include <iostream>
#include <memory>
using namespace std ;

int main () 
{
    // dynamically allocate memory using new 
    
    unique_ptr<int> ptr1 (new int) ;
    int num ;
    cout << "Enter a number: " << endl ;
    cin >> num ;
    
    *ptr1 = num ;
    
    cout << endl << "Your number was " << *ptr1 << "." << endl << endl ;
    
    return 0 ;
}