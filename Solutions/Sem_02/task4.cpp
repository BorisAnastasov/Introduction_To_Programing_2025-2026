#include <iostream>
using namespace std;

int main() 
{
	char figure;
	cin >> figure;
	double a, b=0, area;

	if (figure == 's') 
	{
		cin >> a;
		area = a * a;
	}
	else if (figure == 'r')
	{
		cin >> a >> b;
		area = a * b;
	}
	else if (figure == 'c')
	{
		cin >> a;
		area = 3.14 * a * a;
	}
	else //t
	{
		cin >> a >> b;
		area = a * b / 2;
	}
	cout << "The area is: " << area << endl;
}