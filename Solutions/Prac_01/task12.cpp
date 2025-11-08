#include <iostream>
using namespace std;

int main() 
{
	int seconds, days, minutes, hours;
	cout << "Seconds: ";
	cin >> seconds;
	days = seconds / 86400;
	seconds -= days * 86400;

	hours = seconds / 3600;
	seconds -= hours * 3600;

	minutes = seconds / 60;
	seconds -= minutes * 60;

	cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds" << endl;

}