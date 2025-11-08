#include <iostream>
using namespace std;

int main() 
{
	int applesCount, pearsCount, bananasCount;

	cout << "Apples: ";
	cin >> applesCount;
	cout << "Pears: ";
	cin >> pearsCount;
	cout << "Bananas: ";
	cin >> bananasCount;

	cout << "Pesho, don’t forget to buy "
		<< applesCount<< " apples, "
		<<pearsCount<< " pears and "
		<<bananasCount<< " bananas!" << endl;
}