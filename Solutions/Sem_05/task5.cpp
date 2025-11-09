#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
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
	int arr[SIZE_OF_ARRAY] = { 10,7,8,4,1,5,4,2,2,6 };//not sorted

	bubbleSort(arr, SIZE_OF_ARRAY);

	printArr(arr, SIZE_OF_ARRAY);

}