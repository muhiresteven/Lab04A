//MUHIRE STEVEN NIYOYITA
//Engr-1405-001
//september 15 2020

#include <iostream>
using namespace std;

int main()
{
	int square_feet, acres;

	cout << "Hello" << endl;
	cout << "This program calculates the number of acres in the tract" << endl;

	// get the number of square feet.
	cout << "write the number in square_feet" << endl;
	cin >> square_feet;

	// calculate the acres.
	acres = square_feet * 0.000022956841138659;

	// the result of miles per gallon.;
	cout << "The result in acres is  " << acres << endl;

	return 0;
}