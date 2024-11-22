/*
Program Purpose: 
Implement a deque for a shopping list , getting things done at the front of the list first 
Adding more things to the back of the list 
Use a menu 
*/

#include <iostream>
#include <deque>
#include <string>
#include <cctype>
using namespace std ;

// function to check if user entered a valid menu choice 
bool validMenuChoice (int selection)
{
    return selection == 1 || selection == 2 || selection == 3 ;
}

int main () 
{
    int selection ;
    string item ;
    char continueMenu ;
    
    deque <string> shoppingList ;
    
    // create a shopping list of things you need to get done first
    // display a menu with choices for the user to pick 
    do 
    {
        cout << "Shopping List Menu: \n" ;
        cout << "1. Display Current List \n" ;
        cout << "2. Add to shopping list \n" ;
        cout << "3. Remove item off list \n" ;
        cout << "Your Selection: " ;
        cin >> selection ;
        cin.ignore () ;
        
        // call on the validMenuChoice function and pass the selection from the user 
        // continues to loop until a valid menu choice is selected 
        // displays an error message to user 
        while (!(validMenuChoice(selection)))
        {
            cout << "Invalid Menu Chocie, Try Again. \n" ;
            cin >> selection ;
            cin.ignore () ;
        }
        
        // switch statement and its function for each menu choice 
        switch (selection)
        {
            case 1 :
                cout << endl << "Current Shopping List: \n" ; 
                for (int count = 0 ; count < shoppingList.size() ; count++)
                {
                    cout << "Item " << count + 1 << ": " << shoppingList[count] << endl ;
                }
            break ;
            
            case 2 :
                cout << endl << "Add an item to the shopping list. \n" ;
                getline (cin , item) ;
                shoppingList.push_back(item) ;
            break ;
            
            case 3 :
                cout << endl << "Removed front item from the shopping list. \n" ;
                shoppingList.pop_front() ;
            break ;
        }
        // ask them if they would like to access the menu again 
        cout << endl << "Would you like to modify the shopping list again? (Y or N) " ;
        cin >> continueMenu ;
        cout << endl ;
        cin.ignore() ;
    }
    while (toupper(continueMenu) == 'Y') ; // case sensative 
    
    cout << "End of Program \n" ;
    
    return 0 ;
}