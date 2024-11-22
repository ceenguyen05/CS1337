#include <iostream>
#include <vector>
using namespace std ;

int binarySearch (const vector<int> &, int ) ; // fucntion prototype , searches for the number binaryly 

int main () 
{
    // create a program that uses a binary search
    
    int size ; 
    cout << "Enter the size of the vector. " ; // asks the user for size of the vector 
    cin >> size ;
    
    vector<int> vector1 ; // creates vector 
    vector1.resize(size) ; // resizes the vector with input from user 
    
    cout << "Enter in numbers into your vector IN ORDER. " ;
    
    for (int count = 0 ; count < size ; count++) // for loop to cycle thorugh numbers in vector 
    {
        cin >> vector1[count] ;
    }
    
    int target ; 
    
    cout << "Enter in your target number. " ;
    cin >> target ;
    
    int position = binarySearch (vector1 , target) ; // calls on the function to perform the search 
    
    if (position != -1) // displays options if target number was found or not 
    {
        cout << "The target number " << target << " was found in position " << position << " ." << endl << endl ;
    }
    else 
    {
        cout << "The target number " << target << " was not found. " << endl << endl ;
    }
    
    return 0 ;
}

int binarySearch (const vector<int> & vector1 ,  int target )
{
    int first = 0 ; // first number in search 
    int last = vector1.size() - 1 ; // last number in search 
    bool found = false ; // fla variable to see if target number is found
    int position = -1 ; // current position when not found 
    
    while (!found && first <= last) // while loop for binary search 
    {
        int middle = first + (last - first) / 2 ; // creates the middle index
        if (vector1[middle] == target)
        {
            found = true ;
            position = middle ;
        }
        else if (vector1[middle] > target)
        {
            last = middle - 1 ;
        }
        else 
        {
            first = middle + 1 ;
        }
    }
    return position ;
}

