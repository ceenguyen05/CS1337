/* 
Program Purpose: 
Implement STL Stack
You are a teacher, add kid's names to a stack 
*/

#include <iostream> // duh 
#include <stack> // to use deque 
#include <string> // to use strings 
#include <cctype> // to use toupper function (converts lowercase to uppercase)
using namespace std ;

int main ()
{
    // create a stack, using deque
    stack < string > studentNames ;
    
    int size ; // how many students to enter 
    string name ; // name of student 
    char continueAdding ; // while condition variable 
    // do while loop , asks the user for the studet names and if they want to continue 
    do 
    {
        cout << endl ;
        // push names onto the stack 
        cout << "How many students would you like to add to the stack?  " ;
        cin >> size ;
        
        while (size < 0)
        {
            
            cout << "Cannot have a stack less than 0. \n" ;
            cout << "How many students would you like to add to the stack? " ;
            cin >> size ;
            
        }
        cin.ignore () ; // consume newline left by cin >> size 
        
        for (int count = 0 ; count < size ; count++)
        {
            cout << "Enter Student " << count + 1 << "'s name: " ;
            getline (cin , name) ;
            studentNames.push(name) ;
        }
        cout << endl << "Would you like to add more names? (Y/N) " ;
        cin >> continueAdding ;
        cin.ignore() ; // consume newline after using cin >> continueAdding
    }
    while (toupper(continueAdding) == 'Y') ; // case sensative , accepts Y and y 
    
    // create another stack to copy the names , this is done so you can display them 
    stack <string> copyStack ;
    
    // a while loop to copy the stack 
    // also displays the stack to the user 
    cout << endl << "Class Stack: \n" ;
    while (!studentNames.empty())
    {
        cout << studentNames.top() << " " ;
        copyStack.push (studentNames.top()) ;
        studentNames.pop() ;
    }
    cout << endl ;
    
    // copy the stack back to studentNames 
    while (!copyStack.empty())
    {
        studentNames.push(copyStack.top()) ;
        copyStack.pop() ;
    }
    
    int popped ;
    // pop some names off the stack and display the remaining stack 
    cout << endl << "How many students left the Stack? " ;
    cin >> popped ;
    
    // make sure the popped amount entered is in the stack
    while (popped < 0 || popped > studentNames.size()) 
    {
        cout << "Invalid number. Please enter a value between 0 and " << studentNames.size() << ": ";
        cin >> popped;
    }
    
    for (int count = 0 ; count < popped ; count++)
    {
        studentNames.pop() ;
    }
    
    if (studentNames.empty())
    {
        cout << endl << "All students have left the stack.\n" ;
    }
    else 
    {
        // display the remianing stack 
        cout << endl << "Current Class Stack: " << endl ;
        while (!studentNames.empty())
        {
            cout << studentNames.top() << " " ;
            studentNames.pop() ;
        }
    }
    
    return 0 ;
}