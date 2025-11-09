#include <iostream>
using namespace std;

int binarySearch(int* arr, int size, int target) 
{
	int low = 0, high = size-1;
	while (low <= high) 
	{
		int mid = (high + low) / 2;
		if (arr[mid] == target)// - > found
		{
			return mid;
		}
		else if (target < arr[mid]) // - > left
		{
			high = mid-1;
		}
		else //arr[mid] < target - > right 
		{
			low = mid+1;
		}
	}

	return -1;
}


int main() 
{
	const int SIZE_OF_ARRAY = 10;
	int arr[SIZE_OF_ARRAY] = { 1,2,3,4,5,6,7,8,9, 10 };//sorted

	int target, result;
	cin >> target;

	result = binarySearch(arr, SIZE_OF_ARRAY, target);

	cout << result << endl;
}