
#include <iostream>
using namespace std;

int main()
{
	double candyCost, candySold, candyTotal;

	// Get the cost of a candy bar
	cout << "How much does a bar of candy cost? ";
	cin >> candyCost;

	// Get the amount of candy sold
	cout << "How many candy bars was sold? ";
	cin >> candySold;

	//Calculate total money earned
	candyTotal = candyCost * candySold;

	//Display the total money earned
	cout << "The Film Club earned $" << candyTotal << endl;
	return 0;
}