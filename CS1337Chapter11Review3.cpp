#include <iostream>
#include <string>
using namespace std ;

struct StudentInfo // structure 
{
    string id ;
    string name ;
    char csGrade ;
} ;

StudentInfo fillInfo () ; // function protoype with a return to the struct 
void displayInfo (StudentInfo) ; // function prototype to display the info 

int main () 
{
    StudentInfo show ; // creates an instance of struct StudentInfo
    show = fillInfo () ; // show instance receives the info from fillInfo 
    displayInfo (show) ; // displays the info 
    
    return 0 ;
}

StudentInfo fillInfo () 
{
    StudentInfo show ;
    cout << "What is your student id? " << endl ; 
    getline (cin , show.id) ;
    cout << "What is your name? " << endl ;
    getline (cin , show.name) ;
    cout << "What is your current grade in computer science? (Letter Grade)" << endl ;
    cin >> show.csGrade ;
    return show ;
}

void displayInfo (StudentInfo show) 
{
    cout << endl << "Your information is: " << endl ;
    cout << "ID: " << show.id << endl ;
    cout << "Name: " << show.name << endl ;
    cout << "Grade: " << show.csGrade << endl ;
}