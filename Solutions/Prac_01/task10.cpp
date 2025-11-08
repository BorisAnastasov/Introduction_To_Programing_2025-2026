#include <iostream>
using namespace std;

int main() 
{
	int number1, number2;
	cin >> number1 >> number2;

	//1
	/*int temp = number1;
	number1 = number2;
	number2 = temp;*/

	//2
	number1 += number2;
	number2 = number1 - number2;
	number1 = number1 - number2;

	cout << number1 << " " << number2 << endl;
}