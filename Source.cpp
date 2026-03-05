#include <iostream>
using namespace std;
int main()
{
	int quantity;
	float price;
	float extprice;

	cout<< "Enter the quantity: ";
	cin>> quantity;

	cout<< "Enter the price: ";
	cin>> price;

	extprice = quantity * price;

	cout<< "The extended price is: " << extprice << endl;

	return 0;
}