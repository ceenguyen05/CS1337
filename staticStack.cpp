#include <iostream>
using namespace std ;

// static stack 

class Stack 
{
    private :
    
    int *arrayStack ; // pointer to array 
    int top ; // top of the stack 
    int stackSize ; // stackSize 
    
    public :
    
    Stack (int size) // constructor to create the arrayStack 
    {
        stackSize = size ;
        arrayStack = new int[stackSize] ;
        top = -1 ; // initializes the top of the stack , -1 means stack is empty 
    }
    
    ~ Stack () // destructor to delete dynamic memory 
    {
        delete[] arrayStack ;
    }
    
    void push (int push) 
    {
        if (top < stackSize - 1) // top is less than -1 the size of the stack , tells to keep pushing data
        {
            arrayStack[++top] = push ; // increments the index to add the value
        }
        else // if not display that the stack cannot hold more data
        {
            cout << "Stack overflow. " << endl ;
        }
    }
    
    void pop (int numPop) // gets passed the number of times a pop needs to happen
    {
        for (int count = 0 ; count < numPop ; count++) // loops for the numbers of pops
        {
            if (top >= 0) // if the stack is not at the bottom 
            {
                top-- ; // removes the top 
            }
            else // underflow message if no more numbers to be popped
            {
                cout << "Stack underflow. " << endl ;
                break ;
            }
        }
    }
    
    // for loop runs throught the stack and displays for the user 
    void displayStack () const
    {
        cout << endl << "Stack Numbers: " << endl ;
        for (int count = 0 ; count <= top ; count++ ) // loops for the amount of elements in the stack
        {
            cout << arrayStack[count] << endl ;
        }
        cout << endl ;
    }
} ;

int main () 
{
    // get the stack size from the user 
    int size ;
    cout << "What is the size of your stack? " ;
    cin >> size ;
    
    // call the class and create an instance 
    // call the constructor to pass the size of the array and create the array
    Stack stackClass(size) ;
    
    // push some numbers on a stack 
    int number ;
    cout << endl << "Push some numbers in the stack: " << endl ;
    for (int count = 0 ; count < size ; count++)
    {
        cin >> number ;
        stackClass.push(number) ;
    }
    
    // display the numbers in your stack 
    stackClass.displayStack() ;
    
    // ask how many times the user wants to pop
    int pop ;
    cout << endl << "How many times would you like to pop your stack? " ;
    cin >> pop ;
    stackClass.pop(pop) ;
    
    // display remianing numbers in stack 
    stackClass.displayStack() ;
    
    return 0 ;
}


