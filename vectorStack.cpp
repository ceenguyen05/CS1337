/* 
Program Purpose: 
make a stack of student names usig a vector 
display the names of the students without copying the stack to another stack like a deque 
*/

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <cctype>
using namespace std ;

int main () 
{
    // vector stack creation 
    stack < string , vector<string>> vectorStudentNames ;
    
    int size ;
    string name ;
    char continueAdding ;
    
    // do while loop while the user wants to add names 
    do 
    {
        cout << "How many students would you like to add to the stack? " ;
        cin >> size ;
        cin.ignore () ; // clears newline after cin >> size 
        
        while (size < 0)
        {
            cout << "Cannot add negative number to the stack, try again. \n" ;
            cout << "How many students would you like to add to the stack? " ;
            cin >> size ;
            cin.ignore () ;
        }
        
        // for loop to push names on vector stack
        for (int count = 0 ; count < size ; count++)
        {
            cout << "Enter Student " << count + 1 << "'s name: " ;
            getline (cin , name) ;
            vectorStudentNames.push(name) ;
        }
        cout << endl << "Woud you like to add more students?  (Y or N) " ;
        cin >> continueAdding ;
        cin.ignore () ;
    }
    while (toupper(continueAdding) == 'Y') ;
    
    // display the vector stack 
    cout << endl << "Current Stack: " << endl ;
    while (!vectorStudentNames.empty())
    {
        cout << vectorStudentNames.top() << " " ;
        vectorStudentNames.pop() ;
    }
    
    return 0 ;
}