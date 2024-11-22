#include <iostream>
#include <string>
#include <cstring>
using namespace std ;

int main () 
{
    // try the strlen () function 
    char array1[] = "Hello Little One." ;
    size_t length = strlen (array1) ;
    cout << length << endl << endl ;
    
    // try the strcat () function 
    char first[100] ;
    char second [100] ;
    cout << "Enter in a sentence. " << endl ;
    cin.getline (first , 100) ;
    cin.ignore (100 , '\n') ;
    cout << "Enter in another word. " ;
    cin.getline (second , 100) ;
    strcat (first , second) ;
    cout << first ;
    
    // try the strcpy () function 
    char array2 [] = "Hello Boy" ;
    char array3 [] = "Hello Girl" ;
    strcpy (array3 , array2) ;
    cout << array3 ;
    
    // try the strcmp () function 
    int result = strcmp (array2 , array3) ;
    cout << endl << result ;
    
    return 0 ;
}