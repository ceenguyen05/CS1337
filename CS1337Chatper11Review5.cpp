#include <iostream>
using namespace std ;

// create a program that calculates sales with the use of enumerators 

// enum of all the days in the week 
enum workDays { MONDAY , TUESDAY , WEDNESDAY , THURSDAY , FRIDAY , SATURDAY , SUNDAY } ;

int main ()
{
    int arrayDays [SUNDAY+1] ; // array declaration 
    workDays count ; // count of data type workDays (enumerator)
    int total = 0 ; // accumulator 
    
    // for loop to to display the day and get the amount earned each day 
    // static cast to convert day type to int type 
    for (count = MONDAY ; count <= SUNDAY ; count = static_cast <workDays> (count + 1))
    {
        cout << "Enter the amount of money earned on " ;
        switch (count)
        {
            case MONDAY : cout << "Monday: $" ;
            break ;
            case TUESDAY : cout << "Tuesday: $" ;
            break ;
            case WEDNESDAY : cout << "Wednesday: $" ;
            break ;
            case THURSDAY : cout << "Thursday: $" ;
            break ;
            case FRIDAY : cout << "Friday: $" ;
            break ;
            case SATURDAY : cout << "Saturday: $" ;
            break ;
            case SUNDAY : cout << "Sunday: $" ;
            break ;
        }
        cin >> arrayDays[count] ;
        total +=  arrayDays [count] ;
    }
    
    // displays to the user 
    cout << "The total amount of money earned this week is $" << total << "." << endl << endl ;
    
    return 0 ;
}