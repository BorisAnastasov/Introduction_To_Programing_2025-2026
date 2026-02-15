#include <iostream>
using namespace std;

#pragma region HelperFunctions
int getLength(const char* arr) {
	if (!arr) return 0;

	int length = 0;
	while (*arr != '\0')
	{
		length++;
		arr++;
	}
	return length;
}

bool isLower(char ch) {
	return 'a' <= ch && ch <= 'z';
}
#pragma endregion

//1
char* getLowerChars(const char* arr) {
	if (!arr) return nullptr;
	int length = getLength(arr);

	char* result = new char[length + 1];
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		if (isLower(arr[i])) {
			result[j] = arr[i];
			j++;
		}
	}

	result[j] = '\0';

	return result;
}

//2
char* getSubstring(const char* str, int beg, int end) {
	if (!str) return nullptr;

	int length = getLength(str);
	if (beg > length) return nullptr;

	if (end > length) {
		end = length;
	}

	char* result = new char[end - beg + 2];
	for (int i = beg; i <= end; i++)
	{
		result[i - beg] = str[i];
	}
	result[end - beg + 1] = '\0';

	return result;
}

//3
char* replaceAlternating(const char* str, char x, char a, char b) {
	if (!str) return nullptr;

	int counter = 0;
	int length = getLength(str);
	if (length == 0) return nullptr;
	char* result = new char[length + 1];

	for (int i = 0; i < length + 1; i++) {
		result[i] = str[i];
		if (str[i] == x) {
			counter++;
			if (counter % 2 == 0) {
				result[i] = b;
			}
			else {
				result[i] = a;
			}
		}
	}
	result[length] = '\0';

	return result;

}

//4
int countOccurrences(const char* str, char target) {
	if (!str) return -1;
	
	int count = 0;
	while (*str != '\0')
	{
		if (*str == target)
		{
			count++;
		}
		str++;
	}

	return count;
}


int main()
{
	//char* arr = replaceAlternating("H_ll_ my fri_nd", '_', 'e', 'o');

	int occurances = countOccurrences("aabbabc", 'a');

	cout << occurances << endl;

	//delete[] arr;
}