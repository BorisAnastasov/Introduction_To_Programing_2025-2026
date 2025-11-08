#include <iostream>
using namespace std;

void func(int* arr, size_t sizeOfArray, int& minValue, int& maxValue) 
{
	for (size_t i = 0; i < sizeOfArray	; i++)
	{
		if (minValue > arr[i]) 
		{
			minValue = arr[i];
		}
		else if (minValue < arr[i])
		{
			maxValue = arr[i];
		}
	}
}

int main()
{
	const int SIZE_OF_ARRAY = 1000;

	size_t N;
	int minValue = INT_MAX, maxValue = INT_MIN;
	cin >> N;
	int arr[SIZE_OF_ARRAY];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	func(arr, N, minValue, maxValue);

	cout << minValue << endl;
	cout << maxValue << endl;
}