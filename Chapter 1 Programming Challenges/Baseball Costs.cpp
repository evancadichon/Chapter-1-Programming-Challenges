
#include <iostream>
using namespace std;

int main()
{
	double baseballBought, baseballCost, baseballTotal;

	//Get the number of baseball bought
	cout << "How many baseballs were bought? ";
	cin >> baseballBought;

	//Get the cost of a baseball
	cout << "How much does a baseball cost? ";
	cin >> baseballCost;

	//Calculate the total money spent
	baseballTotal = baseballBought * baseballCost;

	//Display the amount spent
	cout << "The little league spent $" << baseballTotal << " on baseballs " << endl;
	return 0;
}
	
