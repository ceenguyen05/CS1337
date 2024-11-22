#include <iostream>
using namespace std ;

// use pointers and structures 

struct StudentInfo 
{
    string id ;
    string name ;
    char csGrade ;
} ;

void getInfo (StudentInfo * ) ;
void displayInfo (StudentInfo * ) ;

int main () 
{
    StudentInfo * showptr = nullptr ;
    showptr = new StudentInfo ;
    getInfo (showptr) ;
    displayInfo (showptr) ;
    
    delete showptr ;
    return 0 ;
}

void getInfo (StudentInfo * showptr)
{
    cout << "What is your ID? " << endl ;
    getline (cin , showptr->id) ;
    cout << "What is your name? " << endl ;
    getline (cin , showptr->name) ;
    cout << "What is your letter grade in CS? " << endl ;
    cin >> showptr->csGrade ;
    cin.ignore () ;
}

void displayInfo (StudentInfo * showptr)
{
    cout << endl ;
    cout << "Your ID is: " << showptr->id << endl ;
    cout << "Your name is:  " << showptr->name << endl ;
    cout << "Your grade in CS is: " << showptr->csGrade << endl ;
}