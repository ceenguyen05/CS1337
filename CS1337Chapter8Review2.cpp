#include <iostream> 
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () 
{
    // try and use a random number generator and linearly search for it in the vector 
    
    int vectorSize ; // variable to hold the size of the vector 
    vector<int> vector1 ; // created the vector 
   
    cout << "Enter the size of the desired vector." << endl ;
    cin >> vectorSize ;
    
    vector1.resize(vectorSize) ; // resizes the vector to given size
    unsigned int seed = time(0) ; // seed the random number generator 
    srand (seed) ; // seed the random number generator 
    int goldenNumber ; // variable to hold the number we are trying to find 
    
    cout << endl << "What is the number you want to search for? " << endl ;
    cin >> goldenNumber ;
    
    bool flag = false ; // sets flag to false ;
    int index = -1 ; // index position ;
    
    for (int count = 0 ; count < vectorSize ; count++) // for loop to assign random numbers between 1-100 
    {
        vector1[count] = rand () % 100 + 1 ; 
    }
    
    for (int count = 0 ; count < vectorSize ; count++) // checks array for the golden number 
    {
        if (vector1[count] == goldenNumber)
        {
            flag = true ;
            index = count ;
            break ;
        }
    }
    
    if (flag) // displays the number and the index it was found
    {
        cout << endl << "The number " << goldenNumber << " was found in the vector. It was in position " 
        << (index + 1) << "." << endl ;
    }
    else // displays that the golden number wasn't found
    {
        cout << "The number " << goldenNumber << " was not found in the vector. " << endl << endl ;
    }
    
    cout << "The numbers in the vector were " ;
        for (int numbers : vector1)
        {
            cout << numbers << " " ;
        }
        
    return 0 ;
}