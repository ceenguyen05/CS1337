#include <iostream> 
#include <vector>
using namespace std ;

int main () 
{
    // try and linearly search for a number in an array 
    
    vector<int> vector1 ; // created a dynamic vector array
    vector1 = { 10 , 32 , 72 , 2 , 21 , 88 , 43 , 55 , 23 , 9  } ; // assigned 10 numbers to vector 
    int count = 0 ; // counter or position 
    bool flag = false ; // sets flag to see if number was found or not 
    
    for (count = 0 ; count < vector1.size() ; count++) // for loop to iterate through the vector 
    {
        // checks if the number is found , if is sets flag to true and breaks the program
        if (vector1[count] == 21) 
        {
            flag = true ;
            break ;
        }
    }
    
    if (flag)
    {
        // add one for due to off by one error when starting at 0 ;

        cout << "The number 21 was found in the vector array at position " << (count + 1) << " in the vector." 
             << endl << endl ;
    }
    else 
    {
        cout << "The number 21 was not found in the array. " << endl << endl ;
    }

    return 0 ;
}