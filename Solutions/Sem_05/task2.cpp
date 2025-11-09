#include <iostream>
using namespace std;

int linearSearch(int* arr, int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			return i;
		}
	}
	return -1;
}

int main() 
{
	const int SIZE_OF_ARRAY = 10;
	int arr[SIZE_OF_ARRAY] = { 1,2,3,4,5,6,7,8,9,10 };

	int target, result;
	cin >> target;

	result = linearSearch(arr, SIZE_OF_ARRAY, target);

	cout << result << endl;
}