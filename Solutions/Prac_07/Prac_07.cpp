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

bool containsChar(const char* str, char ch) {
	int i = 0;
	while (str[i]!='\0')
	{
		if (str[i] == ch) {
			return true;
		}
		i++;
	}
	return false;
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

//5
char* longestCommonPrefix(const char* str1, const char* str2, const char* str3) {
	if (!str1 || !str2 || !str3) return nullptr;

	int len1 = getLength(str1);
	int len2 = getLength(str2);
	int len3 = getLength(str3);

	if (len1 == 0 || len2 == 0 || len3 == 0) return nullptr;

	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0'&& str3[i] != '\0'&&
			str1[i] == str2[i] && str1[i] == str3[i])
	{
		i++;
	}

	char* prefix = new char[i + 1];

	for (int j = 0; j < i; j++)
	{
		prefix[j] = str1[j];
	}
	prefix[i] = '\0';

	return prefix;

}

//6
int compareStrings(const char* s1, const char* s2) {
	if (!s1 || !s2) return -1;

	int i = 0;
	while (s1[i]!='\0' && s2[i]!='\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return 0;
	}
	else if (s1[i] < s2[i]) {
		return -1;
	}
	else
	{
		return 1;
	}

}

//7
char* removeDuplicates(const char* str) {
	if (!str) return nullptr;

	int len = getLength(str);
	if (len == 0) {
		char* empty = new char[1];
		empty[0] = '\0';
		return empty;
	}

	char* result = new char[len + 1];
	int j = 0;
	for (int i = 0; i <= len; i++)
	{
		if (!containsChar(result, str[i]))
		{
			result[j] = str[i];
			j++;
		}
	}
	result[j] = '\0';
	return result;
}

//8
int findFirstOccurrence(const char* text, const char* word) {
	if (!text || !word) return -1;

	int lenText = getLength(text);
	int lenWord = getLength(word);
	if (lenText == 0 || lenWord == 0 || lenWord > lenText) return -1;

	for (int i = 0; i < lenText; i++)
	{
		if (text[i] == word[0])
		{
			if (lenText - (i + 1) < lenWord) return -1;
			int index = i;
			int found = true;
			for (int j = 0; j < lenWord; j++)
			{
				if (word[j] != text[index]) {
					found = false;
					break;
				}
				index++;
			}
			if (found)
			{
				return i;
			}
		}
	}
	return -1;
}


int main()
{
	char* arr = removeDuplicates("cbacdcbc");

	int result = findFirstOccurrence("Hello my friend!", "my");

	cout << result << endl;

	delete[] arr;
}