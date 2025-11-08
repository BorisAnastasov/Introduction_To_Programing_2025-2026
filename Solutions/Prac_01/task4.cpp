#include <iostream>
using namespace std;

int main()
{
	double a, b, perimeter, area;

	cout << "Please enter the length of the first side: ";
	cin >> a;
	cout << "Please enter the length of the second side: ";
	cin >> b;

	perimeter = 2 * (a + b);
	area = a * b;

	cout << "The perimeter is: " << perimeter << endl;
	cout << "The area is: " << area << endl;
}