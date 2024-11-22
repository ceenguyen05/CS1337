#include <iostream>
#include <stdexcept> // new library , this is used for exceptions 
#include <iomanip> // for formatting 
using namespace std ;

// program that uses basic functions
// checks if the number is multiplied by 0
// throws if it is 
// try catch block to handle it 

// fucntion headers 
void getNumbers (double & , double &) ;
double letsTimes (double , double) ;

int main ()
{
    double num1 , num2 ;
    getNumbers (num1 , num2) ; // calls function to get the value of the numbers 
    
    // try catch block
    // trys to put out the value times the value if it is not 0 
    try 
    {
        double times = letsTimes (num1 , num2) ;
        cout << endl << fixed << setprecision(2) << num1 << " times " << num2 << " = " << times ;
    }
    // catches exception if the result is 0 (user entered in a 0)
    catch (const runtime_error &exceptionError)
    {
        cout << exceptionError.what() ; // displays the exception that was thown
    }
    return 0 ;
}

// gets two numbers from user 
void getNumbers (double &num1 , double &num2)
{
    cout << "Enter in two numbers seperated by a space. " ;
    cin >> num1 >> num2 ;
}
// checks to see if the result is 0
// throws if it is 
// if not returns the value of the two numbers multiplied 
double letsTimes (double num1 , double num2)
{
    if (num1 * num2 == 0)
    {
        throw runtime_error("\nYOU CANT TIMES BY 0") ;
    }
    return num1 * num2 ;
}
