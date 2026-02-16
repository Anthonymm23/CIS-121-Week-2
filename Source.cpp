#include<iostream>
using namespace std;
int main()
{
	float price;
	float discountpercent;
	// Enter discount percent in decimal form;
	float discountamount;
	float discountprice;

cout << "Enter the price of the item: ";
cin >> price;

cout << "Enter the discount percent: ";
cin >> discountpercent;

discountamount = price * discountpercent;
discountprice = price - discountamount;

cout << "Discounted Price: $" << discountprice << endl;
cout << "Discount Amount: $" << discountamount << endl;

return 0;
}