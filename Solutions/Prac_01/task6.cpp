#include <iostream>
using namespace std;

int main() 
{
	int dividend, divisor;

	cout << "Dividend: ";
	cin >> dividend;
	cout << "Divisor: ";
	cin >> divisor;

	cout << "The quotient of the division is : " << (dividend / divisor) << endl;
	cout << "The remainder of the division is : " << (dividend % divisor) << endl;

}