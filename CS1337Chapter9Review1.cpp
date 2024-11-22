#include <iostream>
#include <string>
using namespace std ;

int main () 
{
    // get the address of the variables 
    int num = 100 ;
    string word = "clash of clans" ;
    
    // create pointers for the variables 
    int * intptr = nullptr ;
    string * stringptr = nullptr ;
    
    cout << "The value for num is " << num << "." << endl ;
    cout << "The string for word is " << word << "." << endl << endl ;
    
    // assign the address of num and word to the ptrs 
    intptr = &num ;
    stringptr = &word ;
    
    cout << "The address of " << num << " is " << intptr << "." << endl ;
    cout << "The address of \"" << word << "\" is " << stringptr << "." << endl << endl ;
    
    // derefernce the pointer and display the value of the address the ptr points to 
    cout << "The vaule of num is " << *intptr << "." << endl ;
    cout << "The string for word is " << *stringptr << "." << endl << endl ;
    
    // assign a value to int and string ptr , then display both ways 
    cout << "Enter a whole number. " << endl ;
    cin >> *intptr ;
    cin.ignore (20, '\n') ;
    cout << endl << "Enter a word / words. " << endl ;
    getline (cin , *stringptr) ;
    
    cout << endl << "Here is the number displayed twice " << num << " & " << *intptr << "." << endl ;
    cout <<"Here is the word(s) displayed twice " << word << " & " << *stringptr << "." << endl << endl ;
    
    // display the addresses and values of an array using ptr
    int array1 [] = { 21 , 9 , 5 } ;
    int * intptr1 = nullptr ;
    
    int sizeBytes = sizeof(array1) ; // get the size in bytes of the array
    int oneSize = sizeof(array1[0]) ; // size of a single int byte
    sizeBytes = sizeBytes / oneSize ;
    
    cout << "The address of the array is " << array1 << "." << endl ;
    // for loop cycles thorugh array and displays values and address with the ptr of the int 
    for (int count = 0 ; count < sizeBytes ; count++)
    {
        intptr1 = &array1[count] ;
        cout << "Number " << count + 1 << " is " << *intptr1 << " and the address is " << intptr1 << "." << endl ;
    }
    
    cout << endl ;
    intptr1 = array1 ;
    // pointer arithmictic 
    cout << (array1) << " " << (array1 + 1) << " " << (array1 + 2) << " " << endl ;
    // pointer offset notation
    cout << *(array1) << " " << *(array1 + 1) << " " << *(array1 + 2) << " " << endl ; 
    cout << intptr1[0] << " " << intptr1[1] << " " << intptr1[2] << " " << endl ;
    cout << *(intptr1) << " " << *(intptr1 + 1) << " " << *(intptr1 + 2) << " " << endl ; 
    
    // for loop to display the array backwards 
    intptr1 = &array1[2] ;
    for (int count = 0 ; count < sizeBytes ; count++)
    {
        cout << *intptr1 << " " ;
        intptr1-- ;
    }
    
    return 0 ;
}