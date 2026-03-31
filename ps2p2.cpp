#include<iostream>
using namespace std;
int main()
{
	string lname;
	float hrs;
	float Rate;
	float pay;

	cout << "Enter last name: ";
	cin >> lname;

	cout << "Enter hours worked: ";
	cin >> hrs;

	cout << "Enter pay rate: ";
	cin >> Rate;

	pay = hrs * Rate;

	cout << "Emplayee: " << lname << endl;
	cout << "Gross pay: $" << pay << endl;

	return 0;
}