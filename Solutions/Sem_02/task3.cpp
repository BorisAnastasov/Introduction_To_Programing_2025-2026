#include <iostream>
using namespace std;

int main()
{
	int speed;
	cin >> speed;

	if (speed <= 10) 
	{
		cout << "slow" << endl;
	}
	else if (speed <= 50) 
	{
		cout << "average" << endl;
	}
	else if (speed <= 150) 
	{
		cout << "fast" << endl;
	}
	else if (speed <= 1000) 
	{
		cout << "ultra fast" << endl;
	}
	else 
	{
		cout << "extremly fast" << endl;
	}
}