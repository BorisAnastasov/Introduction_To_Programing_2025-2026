#include <iostream>
using namespace std;

int main() 
{
	int number1, number2;
	cin >> number1>> number2;

	bool firstBigger = number1 > number2;

	cout << (firstBigger * number1 + !firstBigger * number2) << endl;
}