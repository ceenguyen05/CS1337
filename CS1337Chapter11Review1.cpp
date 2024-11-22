#include <iostream>
#include <string>
using namespace std ;

// create a struc and use it in main 

struct Music // structure name 
{
    string artist , genre , hitSingle ; // string variables 
    int debut ; // int vairable 
    
    void display () // display function 
    {
        cout << "The artist is " << artist << ". He debuted in " << debut << ". His hit single is " 
             << hitSingle << ". His genre is " << genre << ". " << endl << endl ;
    }
} ;

int main () 
{
    // use the . operator to access the structire tag 
    // give a tag / create an instance of the structure 
    Music keshi ;
    cout << "What is your favorite artist? " << endl ;
    getline(cin , keshi.artist) ;
    cout << endl << "What year did they debut officially? " << endl ;
    cin >> keshi.debut ;
    cin.ignore(20 , '\n') ; // used to clear the buffer after using cin >> 
    cout << endl << "What genre do they produce? " << endl ;
    getline (cin , keshi.genre) ;
    cout << endl << "What is there best single? " << endl ;
    getline (cin , keshi.hitSingle) ;
    cout << endl << endl ;
    
    keshi.display () ; // calls the display function in the tag structure 
    
    return 0 ;
}