#include <iostream>
using namespace std;

int main()
{
	const double BGN_TO_USD = 0.5914905;
	const double BGN_TO_EUR = 0.51129188;

	double moneyBGN, moneyUSD, moneyEUR;
	cin >> moneyBGN;

	moneyEUR = moneyBGN * BGN_TO_EUR;
	moneyUSD = moneyBGN * BGN_TO_USD;

	cout << "To dollars: " << moneyUSD << endl
		<< "To euros: " << moneyEUR << endl;
}