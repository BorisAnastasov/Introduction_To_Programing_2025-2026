#include <iostream>
using namespace std;

//Решето на Ератостен
void sieveOfEratosthenes(int n) 
{
	const int size = 10000;
	bool isPrime[size];
	for (int i = 2; i <= n; i++)
	{
		isPrime[i] = true;
	}

	for (int i = 2; i*i <= n; i++)
	{
		for (int j = 2; j <= n; j++)
		{
			isPrime[j*i] = false;
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i]) 
		{
			cout << i << " ";
		}
	}
	cout << endl;
}
	
int main()
{
	int n;
	cin >> n;

	sieveOfEratosthenes(n);
}