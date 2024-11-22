#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

// try and use the new ios :: functions you learned 

int main ()
{
    string fileName ;
    cout << "What is the file name? " ;
    getline (cin, fileName) ;
    
    int numbers ;
    char condition ;
    
    ifstream inputFile ;
    inputFile.open(fileName , ios :: in) ;
    
    cout << "The numbers in the file are: " ;
    if (inputFile)
    {
        while (inputFile >> numbers)
        {
            cout << numbers << " " ;
        }
        cout << endl << endl ;
        inputFile.close () ;
    }
    
    fstream file ;
    file.open (fileName , ios :: out | ios :: app) ;
    
    if (file)
    {
        do 
        {
            cout << "Enter in a numbers. " ;
            cin >> numbers ;
            cin.ignore() ;
            file << numbers << " " ;
            cout << "Do you want to add more numbers to the file? (Y or N) " ;
            cin >> condition ;
            cin.ignore () ;
        }
        while (condition == 'Y' || condition == 'y') ;
        cout << endl ;
        file.close () ;
    }
    else 
    {
        cout << "File not found. " ;
    }
    
    inputFile.open(fileName , ios :: in) ;
    
    cout << "The numbers in the file now are: " ;
    if (inputFile)
    {
        while (inputFile >> numbers)
        {
            cout << numbers << " " ;
        }
        inputFile.close () ;
    }
    else 
    {
        cout << "File not found. " << endl << endl ;
    }
    
    cout << endl << endl << "The file was closed successfully, all data wrriten to " << fileName << " file. " ;
    
    return 0 ;
}