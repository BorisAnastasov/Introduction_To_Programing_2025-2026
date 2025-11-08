#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	const double PI = 3.14159265;

	double radius, perimeter, area;
	cin >> radius;

	perimeter = 2 * PI * radius;
	area = PI * radius * radius;

	cout << "The perimeter is: " << setprecision(3) << perimeter << endl
		<< "The area is: " << setprecision(3)<< area << endl;
}