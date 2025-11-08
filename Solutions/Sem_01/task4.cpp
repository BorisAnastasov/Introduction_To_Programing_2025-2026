#include <iostream>
using namespace std;

int main() 
{
	int grade;
	cin >> grade;

	bool isGrade = (2<=grade && grade <=6);

	cout << isGrade << endl;
}