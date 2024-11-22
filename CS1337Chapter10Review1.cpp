#include <iostream>
#include <string> // allows for use of strings 
#include <cctype> // allows for use of checking character literals 
using namespace std ;

int main () 
{
    // try and use the is- fuctions
    char character ;
    cout << "Enter a character: " << endl ;
    cin.get (character);
    if (isupper(character))
    {
        cout << "You entered a upper case letter. " << endl << endl ;
    }
    else if (islower(character))
    {
        cout << "You entered a lower case letter. " << endl << endl ;
    }
    else if (isdigit(character))
    {
        cout << "You entered a digit. " << endl << endl ;
    }
    else if (isspace(character))
    {
        cout << "You entered a whitespace character. " << endl << endl ;
    }
    else 
    {
        cout << "Character not identified. " << endl << endl ;
    }
    
    cin.ignore (20, '\n') ;
    
    // change the letter to lower or uppercase 
    char letter ;
    cout << "Enter a letter. " << endl ;
    cin.get (letter) ;
    if (isupper(letter))
    {
        letter = tolower(letter) ;
        cout << "You entered a uppercase letter, the lowercase version would be " << letter << ". "
             << endl << endl ;
    }
    else if (islower(letter))
    {
        letter = toupper(letter) ;
        cout << "You entered a lowercase letter, the uppercase version would be " << letter << ". "
             << endl << endl ;
    }
    else 
    {
        cout << "You did not enter a letter. " << endl << endl ;
    }
    
    return 0 ;
}