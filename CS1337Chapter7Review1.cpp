#include <iostream>
#include <vector>
using namespace std ;

int main () 
{
    // try a range based for loop 
    auto size = 0 ;
    cout << "Enter in the size of an array." << endl ;
    cin >> size ;
    
    int array[size] ; // created an array with the size entered by the user 
    auto counter = 1 ; // counter to display what number is in the array
    
    cout << endl << "Enter numbers in to your array." << endl ;
    
    // ranged based for loop to collect contents for the array 
    // passed by reference
    for (auto &count : array)
    {
        cout << "Number " << counter++ << " is? " << endl ;
        cin >> count ;
    }

    cout << endl ;
    counter = 1 ; // resets the counter back to one to use in the next ranged based for loop
    
    // ranged based for loop to display
    for (auto count : array)
    {
        cout << "Number " << counter++ << " was " << count << "." << endl ;
    }
    
    // copy the array to another array 
    
    int array1[size] ; // new array
    for (int count = 0 ; count < size ; count ++)
    {
        array1[count] = array[count] ;
    }
    
    auto count = 0 ; // counter to access first array
    cout << endl ;
    
    // display the copied array plus 1 
    for (int display : array1)
    {
        cout << array[count] << " plus one is " << ++display << "." << endl ;
        count++ ;
    }
    
    cout << endl << endl ;
    
    // created and display the contents, size , and memory used of a vector array 
    
    vector<int> expansion ; // created a vector array with type int 
    int input ; // variable to get the int number from user 
    
    cout << "Enter in numbers to the vector " << endl ;
    
    // while loop to get numbers from user , terminated when 0 is entered 
    while (cin >> input)
    {
        if (input != 0)
        {
            expansion.push_back(input) ; // this adds the number into the vector and grows the vector by 1
        }
        else
        {
            break ; // break used to get out of the loop
        }
    }
    
    cout << endl << "The numbers entered were: " ;
    
    for (int count : expansion) // range based for loop to display the vector 
    {
        cout << count << " " ;
    }
    
    // .size() and .capacity() is used to get the size and memory used of the vector 
    cout << endl << "The total amount of numbers in the vector was " << expansion.size() << "." << endl ;
    cout << "The total amount of memory used in the vector was " << expansion.capacity() << "." << endl ;
    return 0 ;
}