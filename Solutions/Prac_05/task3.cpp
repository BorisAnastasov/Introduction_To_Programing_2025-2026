#include <iostream>
using namespace std;

void func(int* arr, size_t sizeOfArray)
{
	
}

void inputArr(int* arr, size_t N) 
{
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	const int SIZE_OF_ARRAY = 1000;

	size_t N;
	cin >> N;
	int arr[SIZE_OF_ARRAY];

	inputArr(arr, N);

	int number;
	cin >> number;

	func(arr, N);

	cout << minValue << endl;
	cout << maxValue << endl;
}