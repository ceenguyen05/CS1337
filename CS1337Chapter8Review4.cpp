#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std ;

// create a program that bubble sorts a vector filled with random numbers and puts it into a file 

void fillVector (vector<int> & , int) ; // fill the vector with random numbers 
void displayVector (vector<int> , int) ; // displays the vector before sorting 
void bubbleSort (vector<int> & , int) ; // sort the vector filled with random numbers 
void displaySorted (vector<int> , int) ; // displays the sorted vector
void writeFile (vector<int> , int , ofstream & , string) ; // sends the sorted vector to a output file 

int main ()
{
    // get the size of the vector from the user and create the vector 
    
    int size ;
    cout << "Enter the size of your desired vector. " << endl ;
    cin >> size ;
    cout << endl ;
    vector<int> vector1 ;
    vector1.resize(size) ; // resized the vector to desired size 
    
    fillVector (vector1 , size) ; // calls on the function for the vector to be filled 
    displayVector (vector1 , size) ; // calls function to display the unsorted vector
    bubbleSort (vector1 , size) ; // calls on the fucntion for the vetcor to be sorted 
    displaySorted (vector1 , size) ; // calls function to display the sorted vector 
    
    // create the output file , open it and call the fuction 
    
    ofstream outputFile ;
    string fileName ;
    
    cout << "What is the name of the file you wish to create? " ;
    cin >> fileName ;
    cout << endl ;
    
    writeFile (vector1 , size , outputFile , fileName) ; // calls fucntion to create the output file 
    
    return 0 ;
}

void fillVector (vector<int> &vector1 , int size)
{
    // randomize the numbers and put them in the vector , numbers are between 1-100
    
    unsigned int seed = time(0) ;
    srand (seed) ;
    
    for (int count = 0 ; count < size ; count++) // for loop to assign random numbers into vector 
    {
        vector1[count] = rand() % 100 + 1 ;
    }
}

void displayVector (vector<int> vector1 , int size)
{
    cout << "The numbers in the vector are " ;
    for (int count = 0 ; count < size ; count++)
    {
        cout << vector1[count] << " " ;
    }
    cout << "." << endl << endl ;
}


void bubbleSort (vector<int> &vector1 , int size)
{
    // sort the numbers using do while loop 
    
    bool swap ; // flag variable 
    int switch1 ; // will contain the value of the current number when a swap is needed 
    
    do 
    {
        swap = false ;
        for (int count = 0 ; count < (size - 1) ; count++)
        {
            if (vector1[count] > vector1[count + 1]) // checks if the number in first postion is greater 
            {
                switch1 = vector1[count] ; // assigns switch1 the value of the greater number in the less position
                vector1[count] = vector1[count + 1] ; // gives the position to the next position
                vector1[count + 1] = switch1 ; // gives the next position the previous positon value 
                swap = true ; // switches flag to true to keep going 
            }
        }
    }
    while (swap) ;
}

void displaySorted (vector<int> vector1 , int size)
{
    // runs a for loop to cycle through vector contents 
    cout << "This is the sorted vector : " ;
    for (int count = 0 ; count < size ; count++)
    {
        cout << vector1[count] << " " ;
    }
    cout << "." << endl << endl ;
}

void writeFile (vector<int> vector1 , int size , ofstream &outputFile , string fileName)
{
    // opens and closes the file 
    // checks if file opens before proceeding 
    // cycles vector contents into outputFile 
    // has error handling 
    outputFile.open(fileName) ;
    
    if (outputFile)
    {
        for (int count = 0 ; count < size ; count++)
        {
            outputFile << vector1[count] << " " ;
        }
        outputFile.close() ;
        cout << "The file has been successfuly written into. "<< endl << endl ;
    }
    else 
    {
        cout << "ERROR ; The file cannot be opened. " << endl << endl ;
    }
}