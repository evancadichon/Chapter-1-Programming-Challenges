
#include <iostream>
using namespace std;

int main()
{
	double soilCost, seedsCost, fenceCost, gardenTotal;

	//Get the cost of soil
	cout << "How much did the soil cost? ";
	cin >> soilCost;

	//Get the cost of the flower seeds
	cout << "How much did the flower seeds cost? ";
	cin >> seedsCost;

	//Get the cost of the fence
	cout << "How much did the fence cost? ";
	cin >> fenceCost;

	//Calculate the cost of the garden center
	gardenTotal = soilCost + seedsCost + fenceCost;

	//Display the cost of the garden center
	cout << "The garden center cost $" << gardenTotal << endl;
	return 0;
}