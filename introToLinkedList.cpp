#include <iostream>
using namespace std ;

// Objective : Create a linked list for 5 values and display to the user 

// declare a struct for a link list 
struct Node 
{
    float number ; // gets the number for the linked list
    Node* next ; // points to the next node 

} ;

// function to display the linked list
void displayLinkedList (Node* head ) ;

// function to delete the linked list after displaying 
void deleteLinkedList(Node* head) ;

int main () 
{
    // creates a pointer to the head of the linked list , the start of the linked list
    Node* head = new Node () ; 
    // create more nodes for the linked list 
    Node* second = new Node () ; 
    Node* third = new Node () ; 
    Node* fourth = new Node () ; 
    Node* last = new Node () ; 
    
    // set the value of the node variables with the number variable in the struct
    head -> number = 10 ; 
    // link the list together by calling on the next variable in the struct 
    head -> next = second ;
    second -> number = 20 ; 
    second -> next = third ;
    third -> number = 30 ; 
    third -> next = fourth ;
    fourth -> number = 40 ; 
    fourth -> next = last ;
    last -> number = 50 ; 
    // last element points to nullptr 
    last -> next = nullptr ;
    
    // pass the head of the linked list to the function 
    // head is passed because it contains a pointer to the next node 
    displayLinkedList (head) ;
    deleteLinkedList (head) ;
    return 0 ;
}

void displayLinkedList (Node* head)
{
    int count = 0 ;
    // while loop to print the linked list until the last node which should be nullptr
    while (head != nullptr)
    {
        // displays the head pointer , pointed to the value in the struct 
        cout << "Number " << count++ << ": " << head -> number << endl ; 
        head = head -> next ; 
        // assigns head the value of the pointer directed at next (next in linked list)
    }
}

void deleteLinkedList(Node* head) 
{
    // creates a variable to get the pointer to the node and delete 
    Node* deleteNode ;
    // whle loop until the end of the linked list 
    while (head != nullptr) 
    {
        // assigns the current value to the next variable 
        // points to the next node 
        // deletes current node 
        deleteNode = head ; 
        head = head->next ;
        delete deleteNode ;
    }
}