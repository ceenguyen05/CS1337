#include <iostream>
#include <string>
using namespace std ;

// create a structure array for getting a employees wages 

struct Work // structure containing the name , hourly wage and hours worked 
{
    string name ;
    int hourly  ;
    int hours ;
} ;

// function prototypes
int fillInfo (Work * , int ) ; // returns an int , 2 arguements , pointer to the Work structures , int 
void displayTotal (int ) ; // displays the total , has an int arguement 

int main () 
{
    // get the number of employees in your store
    int employees ;
    cout << "How many people work at your store? " << endl ;
    cin >> employees ;
    cin.ignore (20 , '\n') ; // clears the newline 
    
    // create the structure array 
    Work * store1 = new Work[employees] ; 
    // created a structure array and assigned it to store1 which points to the Work structure 
    // new data type , allows it to be stacked on the heap and can be dynamically allocated 
    
    int total = fillInfo (store1 , employees) ; // pass store1 which gives access to the Work structure 
    displayTotal (total) ;
    
    delete[] store1; // Free the dynamically allocated memory
    return 0 ;
    
} 

int fillInfo (Work *store1 , int employees)
{
    int total = 0 ;
    for (int count = 0 ; count < employees ; count++)
    {
        cout << "What is the employee " << count + 1 << " name? " << endl ;
        getline(cin , store1[count].name ) ;
        cout << "How much does " << store1[count].name << " make per hour? " << endl ;
        cin >> store1[count].hourly ;
        cout << "How many hours did " << store1[count].name << " work this week? " << endl ;
        cin >> store1[count].hours ;
        cin.ignore (20 , '\n') ;
        
        total += store1[count].hourly * store1[count].hours ;
    }
    return total ;
}

void displayTotal (int total)
{
    cout << endl << "The total you paid this week for wages is " << total << "." << endl << endl ;
}