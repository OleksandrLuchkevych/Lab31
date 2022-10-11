#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double y;
	double x;

	cout << "x = " ; cin >> x;

	// 1 sposib
	if (x < 0)
		y = fabs(4 * x - 1) + pow(x, 7) - 2 * x;
	else
		if (x >= 0 && x < 3)
			y = fabs(4 * x - 1) + atan((exp(x) + 1) / 8);
		else
			y = fabs(4 * x - 1) + pow(x, 4) + exp(x * x + 3);


	cout << "1) y = " << y << endl;

	// 2 sposib 
	if (x < 0)
		y = fabs(4 * x - 1) + pow(x, 7) - 2 * x;

	if (x >= 0 && x < 3)
		y = fabs(4 * x - 1) + atan((exp(x) + 1) / 8);

	if (x >= 3)
		y = fabs(4 * x - 1) + pow(x, 4) + exp(x * x + 3);

	cout << "2) y = " << y << endl;


	return 0;

}