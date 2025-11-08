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

void search(int* arr, int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			cout << "The index is: " << i << endl;
			break;
		}
	}
	cout << "No element found." << endl;
}

void reverseArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}

void binarySearch(int* arr, int size) 
{
	
}

int main()
{
	const int SIZE_OF_ARRAY = 10;

	int arr[SIZE_OF_ARRAY] = {1,2,3,4,5,6,7,8,9,10};

	//inputArr(arr, SIZE_OF_ARRAY);

	//reverseArr(arr, SIZE_OF_ARRAY);

	printArr(arr, SIZE_OF_ARRAY);
}