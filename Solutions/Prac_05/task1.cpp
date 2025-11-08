#include <iostream>
#include <iomanip>
using namespace std;

double absolute(double value) 
{
	return (value < 0) ? -value : value;
}


void func(int* arr, size_t sizeOfArray, double& averageValue, double& averageElement)
{
	double sum = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		sum += arr[i];
	}
	averageValue = sum / sizeOfArray;

	int minDiff = INT_MAX;

	for (int i = 0; i < sizeOfArray; i++)
	{
		if (absolute(averageValue - arr[i]) < minDiff)
		{
			minDiff = absolute(averageValue-arr[i]);
			averageElement = arr[i];
		}
	}
}

int main()
{
	const int SIZE_OF_ARRAY = 1000;

	size_t N;
	double averageValue = 0, averageElement = 0;
    cin >> N;
	int arr[SIZE_OF_ARRAY];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	func(arr, N, averageValue, averageElement);

	cout << setprecision(3);
	cout << averageValue << endl;
	cout << setprecision(2);
	cout << averageElement << endl;
}