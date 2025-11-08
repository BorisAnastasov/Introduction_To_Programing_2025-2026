#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int a, b, c, D, x1, x2 = 0;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	D = sqrt(b * b - 4 * a * c);
	x1 = (-b - D) / 2 * a;
	x2 = (-b + D) / 2 * a;

	cout << "x1 = " << x1<< endl
		<< "x2 = " << x2<< endl;
	
}