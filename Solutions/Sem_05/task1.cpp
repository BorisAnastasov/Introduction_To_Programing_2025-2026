#include <iostream>
using namespace std;

void inputArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void printArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	const int SIZE_OF_ARRAY = 10;

	int arr[SIZE_OF_ARRAY] = { 1,2,3,4,5,6,7,8,9,10 };

	printArr(arr, SIZE_OF_ARRAY);
}