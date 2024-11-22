// simple demonstration of using exceptions for multiple data types 

#include <iostream>
#include <iomanip>
using namespace std ;

template <class math> 
math multiply (math number1 , math number2 )
{
    return number1 * number2 ;
}

int main ()
{
    int number1 = 0 ;
    int number2 = 0 ;
    cout << "For Int: " << endl ;
    cout << "Enter two integer numbers seperated by a space: " ;
    cin >> number1 >> number2 ;
    double result = multiply (number1 , number2) ;
    cout << number1 << " times " << number2 << " = " << result << endl << endl ;
    float number3 , number4 ;
    cout << "For Float: " << endl ;
    cout << "Enter two float numbers seperated by a space: " ;
    cin >> number3 >> number4 ;
    result = multiply (number3 , number4) ;
    cout << number3 << " times " << number4 << " = "<< fixed << setprecision(2) << result ;
    
    return 0 ;
}