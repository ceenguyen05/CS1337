// program using a class template 

#include "templateclass.h"
#include <iostream>
#include <iomanip>
using namespace std ;

int main ()
{
    int number1 , number2 ;
    double number3 , number4 ;
    
    cout << "For Int: " << endl ;
    cout << "Enter two integers seperated by a space: " << endl ;
    cin >> number1 >> number2 ;
    cout << endl << "For Float: " << endl ;
    cout << "Enter two floats seperated by a space: " << endl ;
    cin >> number3 >> number4 ;
    
    // create an instance and define what data type in < > 
    Template<int> templateClass ;
    templateClass.setNumbers (number1 , number2) ;
    cout << endl << number1 << " * " << number2 << " = " << templateClass.getResult()<< endl ;
    
    Template<double> templateClass1 ;
    templateClass1.setNumbers (number3 , number4) ;
    cout << endl << number3 << " * " << number4 << " = " 
         << fixed << setprecision(2) << templateClass1.getResult() ;
}
