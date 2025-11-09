#include <iostream>
using namespace std;

void reverseArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
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

	reverseArr(arr, SIZE_OF_ARRAY);

	printArr(arr, SIZE_OF_ARRAY);
}