/* 
Program Purpose: 
Implement a linked list to get numbers 
Display the linked list 
*/

#include <iostream>
#include <cctype>
using namespace std ;

class Node 
{
    public :
    
    float value ;
    Node* next ;
} ;

int main ()
{
    Node* headNode ; // for the head , stays put to access the start and rest of the linked list 
    Node* tempNode ; // tempNode is used to connect each node 
    Node* nextNode ; // nextNode is used to move and assign values to new nodes created 
    
    float number ;
    char moreNodes ;
    
    // ask the user to enter a number 
    cout << "Enter a value to be in the linked list: " ;
    cin >> number ;
        
    // create and add into the linked list 
    nextNode = new Node ; // creates a new node 
    nextNode -> value = number ; // assigns the user entered value into the value variable in the node 
    tempNode = nextNode ; // temp node points to nextNode 
    headNode = nextNode ; // assgins the head of the linked list to the first value 
    
    cout << "Would you like to enter another value to the linked list? (Y or N): " ;
    cin >> moreNodes ;
    
    while (toupper(moreNodes) == 'Y') 
    {
        cout << "\nEnter a value to be in the linked list: " ;
        cin >> number ;
        
        // create and add into the linked list 
        nextNode = new Node ;  
        nextNode -> value = number ; 
        tempNode -> next = nextNode ; 
        tempNode = nextNode ; 
        
        cout << "Would you like to enter another value to the linked list? (Y or N): " ;
        cin >> moreNodes ;
    }
    
    nextNode -> next = NULL ; // end of the linked list so have the last node point to NULL 
    
    // display the linked list 
    // make a new node to transverse the linked list to perseve the original head of the linked list 
    Node* transverseNode = headNode ;
    int count = 1;
    cout << endl << "Current Linked List: " << endl ;
    while (transverseNode != NULL)
    {
        cout << "Node " << count++ << ": " << transverseNode -> value << endl ;
        transverseNode = transverseNode -> next ;
    }
    cout << endl ;
    
    // delete the linked list when done to free memory and prevent memory leaks 
    transverseNode = headNode ;
    while (transverseNode != NULL)
    {
        Node* deleteNodes = transverseNode ;
        transverseNode = transverseNode -> next ;
        delete deleteNodes ;
        
    }
    return 0 ;
}