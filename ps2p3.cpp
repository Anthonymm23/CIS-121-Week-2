#include<iostream>
using namespace std;
int main()
{
	float length;
	float width;
	float area;
	float perimeter;

	cout << "Enter the rectangles length: ";
	cin >> length;

	cout << "Enter the rectangles width: ";
	cin >> width;

	area = length * width;
	perimeter = (2 * length + 2 * width);

	cout << "The rectangles area is: " << area << endl;
	cout << "The rectangles perimeter is: " << perimeter << endl;

	return 0;
}