//MUHIRE STEVEN NIYOYITA
//september 15th 2020
// Engr-1405-001
#include <iostream>
using namespace std;

// This program will ask the user to input the number of gallons used and the number of miles traveled by a car and then calculate the the miles per gallon the car gets.

 int main()


{int gallons, miles, result;

	cout << "Hello" << endl;
	cout << "Miles per gallon calculator" << endl;

	// get the number of gallons.
	cout << "write the number of gallons" << endl;
	cin >> gallons;

	// get the number of miles.
	cout << "write the number of miles" << endl;
	cin >> miles;

	// calculate the miles per gallon the car gets.
	result = miles / gallons;

	// the result of miles per gallon.;
	cout << "The result is  " << result << endl;

	return 0;

	
}
