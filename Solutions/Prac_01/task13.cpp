#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() 
{
	double x1, x2, y1, y2, distance;

	cin >> x1 >> y1 >> x2 >> y2;

	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	cout << "The distance is: " << setprecision(4) << distance << endl;
}