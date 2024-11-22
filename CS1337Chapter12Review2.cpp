#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

// use binary files 

int main () 
{
    string fileName ;
    cout << "What is the file name? " ;
    getline (cin , fileName) ;
    
    fstream file ;
    file.open (fileName , ios :: in | ios :: binary) ;
    
    if (file)
    {
        char letter ;
        cout << "The characters in this file are: " ;
        while (file.read (&letter , sizeof(letter))) 
        {
            cout << letter << " " ;
        }
        cout << endl << endl ;
        file.close () ;
    }
    else 
    {
        cout << "The file does not exist or has been corrupted. " ;
    }
    
    fstream outFile ;
    string outName ;
    cout << "Enter in the output fie name. " ;
    getline (cin , outName) ;
    int number ;
    char y_n ;
    
    outFile.open (outName , ios :: out | ios :: binary) ;
    
    if (outFile)
    {
        do 
        {
            cout << "Write in a number to the outfile: " ;
            cin >> number ;
            outFile.write (reinterpret_cast <char *> (&number) , sizeof(number)) ;
            cout << "Would you like to enter in anymore numbers? (Y or N) " ;
            cin >> y_n ;
            cin.ignore (2 , '\n') ;
        }
        while (y_n == 'Y' || y_n == 'y') ;
        outFile.close () ;
    }
    else 
    {
        cout << "The file does not exist or has been corrupted. " ;
    }
    
    outFile.open (outName, ios :: in | ios :: app | ios :: binary) ;
    
    if (outFile)
    {
        cout << "The numbers you entered are: " ;
        while (outFile.read (reinterpret_cast <char *> (&number) , sizeof(number)))
        {
            cout  << number << " " ;
        }
        outFile.close () ;
    }
    else 
    {
        cout << "The file does not exist or has been corrupted. " ;
    }
    
    return 0 ;
}