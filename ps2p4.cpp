#include<iostream>
using namespace std;
int main()
{
	string lname;
	float credits;
	float tuition;

	cout << "Enter last name: ";
	cin >> lname;

	cout << "Enter credits taken: ";
	cin >> credits;

	tuition = credits * 250 + 100;

	cout << "Student: " << lname << endl;
	cout << "Total Tuition: $" << tuition << endl;

	return 0;
}