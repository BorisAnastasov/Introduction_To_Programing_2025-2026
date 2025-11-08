#include <iostream>
using namespace std;

int main()
{
	int money, lv100, lv50, lv20, lv10,lv5, lv2, lv1;
	cin >> money;

	lv100 = money / 100;
	money -= lv100 * 100;

	lv50 = money / 50;
	money -= lv50 * 50;

	lv20 = money / 20;
	money -= lv20 * 20;

	lv10 = money / 10;
	money -= lv10 * 10;

	lv5 = money / 5;
	money -= lv5 * 5;

	lv2 = money / 2;
	money -= lv2 * 2;

	lv1 = money;

	cout << lv100 << "x100lv "
		<< lv50 << "x50lv "
		<< lv20 << "x20lv "
		<< lv10 << "x10lv "
		<< lv5 << "x5lv "
		<< lv2 << "x2lv "
		<< lv1 << "x1lv "
		<< endl;
}