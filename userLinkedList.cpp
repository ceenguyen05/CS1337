#include <iostream>
using namespace std ;

// Objective : Create a linked list for a hour log 

struct Node 
{
    float number ; // to handle the value from user 
    Node* next ; // to point to the next node 
} ;

void displayLinkedList (Node* head)
{
    cout << endl << "Hours worked this month: " << endl ;
    while (head != nullptr)
    {
        cout << head -> number << " " ;
        head = head -> next ;
    }
    cout << endl ;
}

void deleteLinkedList (Node* head)
{
    Node* deleteNode ;
    while (head != nullptr) 
    {
        deleteNode = head ; 
        head = head->next ;
        delete deleteNode ;
    }
}

int main () 
{
    // initialize pointers 
    Node* head = nullptr ; // creates a pointer to head 
    Node* tail = nullptr ; // pointer for the next node in the linked list 
    
    // ask the user to enter the hours the worked this month 
    // ask them to put -1 to stop the loop 
    cout << "Enter the amount of hours you worked this month (-1 to exit): " << endl ;
    cout << "Hour Log: " << endl ;
    int count = 1 ;
    float hours = 0 ;
    
    // breaks if -1 is entered 
    while (true)
    {
        cout << "Day " << count++ << ": " ;
        cin >> hours ;
        
        if (hours == -1)
        {
            break ;
        }
        
        Node* newNode = new Node () ;
        newNode -> number = hours ;
        newNode -> next = nullptr ;
        
        // If the list is empty, newNode becomes the head
        if (head == nullptr) 
        {
            head = newNode;
        } 
        else 
        {
            // Append the new node to the end of the list
            tail -> next = newNode;
        }
        // Update the tail to the new node
        tail = newNode;
    }
    
    // call fucntion to display the linked list 
    displayLinkedList (head) ;
    // call function to delete the linked list
    deleteLinkedList (head) ;
    
    return 0 ;
}