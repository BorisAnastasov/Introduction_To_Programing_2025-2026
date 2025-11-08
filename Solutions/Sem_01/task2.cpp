#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	int hundreds, tens, units, result;

	units = number % 10;
	number /= 10;

	tens = number % 10;
	number /= 10;

	hundreds = number % 10;

	result = units * 100 + tens * 10 + hundreds + 1;

	cout << result << endl;
}