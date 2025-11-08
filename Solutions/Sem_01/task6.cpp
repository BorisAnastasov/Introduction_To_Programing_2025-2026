#include <iostream>
using namespace std;

int main()
{
	int a, b, result;
	cin >> a >> b;

	//(a + b)^4 - (a-b)^2
	result = (a + b) * (a + b) 
			* (a + b) * (a + b)
			- (a - b) * (a - b);

	cout << result << endl;
}