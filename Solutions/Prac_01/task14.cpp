#include <iostream>

using namespace std;

int main()
{
	long long iban;
	cin >> iban;

	long long lastdigits = iban % 10000;

	cout << "XXXXXXXXXXXX" << lastdigits << endl;
}