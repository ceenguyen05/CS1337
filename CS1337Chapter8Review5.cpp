#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std ;

// create a program that uses a selection sort to sort the vector

int main ()
{
	// get the size of the vector from the user
	int size ;
	cout << "What is the desired vector size? " << endl ;
	cin >> size ;
	cout << endl ;

	// create and assign the size of the vector
	vector<int> vector1 ;
	vector1.resize(size) ;

	// assign random values to the vector
	unsigned int seed = time(0) ; // randomly assigns a number based on the current time
	srand (seed) ; // randomizes the time
	for (int count = 0 ; count < size ; count++) // for loop , cycles through the size of the vector
	{
		vector1[count] = rand () % 100 + 1 ; // assigns a number 1-100 to the vector
	}

	// display the current order of the vector
	cout << "The current order of the vector is: " ;
	for (int count = 0 ; count < size ; count++) // for loop to cycle through contents
	{
		cout << vector1[count] ;
		if (count < (size - 1)) // if else condtion to change grammer when dealing with the last value
		{
			cout << " " ;
		}
		else
		{
			cout << "." << endl << endl ;
		}
	}

	// use a selection sort to sort the vector out
	int firstIndex, lastIndex, lastValue  ;   // creates local variables
	for (firstIndex = 0 ; firstIndex < size - 1 ; firstIndex++) // cycles thorugh the index besides last
	{
		lastIndex = firstIndex ; // gives the lastIndex the current index position
		lastValue = vector1[firstIndex] ; // gives the value of the current position
		for (int index = (firstIndex + 1) ; index < size ; index++) // loops thorugh the next positon
		{
			if (vector1[index] < lastValue) // if the next position is greater than the number in the previous postion
			{
				lastValue = vector1[index] ; // assign the next position value in lastValue
				lastIndex = index ; // assign the current index number with the next position
			}
		}
		vector1[lastIndex] = vector1[firstIndex]; // assigns the next position the great number
		vector1[firstIndex] = lastValue ; // assigns the previous position with the smaller number
	}

	// display the sorted vector
	cout << "This is the sorted vector: " ;
	for (int count = 0 ; count < size ; count++) // for loop to cycle through contents
	{
		cout << vector1[count] ;
		if (count < (size - 1)) // if else condtion to change grammer when dealing with the last value
		{
			cout << " " ;
		}
		else
		{
			cout << "." << endl << endl ;
		}
	}

	return 0 ;
}