#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std ;

void getNumbers (vector<int> * , int) ; // function assigns random numbers and fills vector 
int displayNumbers (vector<int> * , int) ; // displays current numbers in the vector ptr 

int main ()
{
    // get the size of the vector and create a vector 
    int size ;
    cout << "Enter size of the vector: " << endl ;
    cin >> size ;
    vector <int> vector1 ;
    vector1.resize(size) ;
    
    // create a pointer to the vector 
    // fill the vector with numbers 
    vector<int> * vectorPTR = nullptr ;
    vectorPTR = &vector1 ;
    getNumbers (vectorPTR ,  size) ; // fucntion call to get the numbers 
    
    // display the numbers in the vector 
    int total = displayNumbers (vectorPTR , size) ;
    
    cout << "The total in the vector is " << total << "." << endl << endl ;
    
    return 0 ;
}

void getNumbers (vector<int> * vectorPTR , int size)
{
    unsigned int seed = time (0) ;
    srand (seed) ;
    for (int count = 0 ; count < size ; count++)
    {
        (*vectorPTR)[count] = rand () % 100 + 1 ; // assigns a number 1-100 to the ptr 
    }
}

int displayNumbers (vector<int> * vectorPTR , int size)
{
    cout << endl << "The current numbers in the vector are: " << endl ;
    int total = 0 ;
    for (int count = 0 ; count < size ; count++)
    {
        if (count < size - 1)
        {
            cout << (*vectorPTR)[count] << " " ;
        }
        else 
        {
            cout << (*vectorPTR)[count] << "." << endl << endl ;
        }
        total += (*vectorPTR)[count] ;
    }
    return total ;
}