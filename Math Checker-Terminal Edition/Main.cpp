#include <iostream>
#include <string.h>
#include <math.h>
#include "Main.h"
#include "quadCalc.h"

int main()
{
	using namespace std;
	cout << "Choose your operation:" << endl;
	cout << "1.Quadratic solver" << endl;
	int n;
	cin >> n;

	if (n == 1)
	{
		double a;
		double b;
		double c;
		double result1;
		double result2;
		cout << "Input a value for a:" << endl;
		cin >> a;
		cout << "Input a value for b:" << endl;
		cin >> b;
		cout << "Input a value fpr c:" << endl;
		cin >> c;
		result1, result2 = quadratic::quadCalc(a, b, c);
	}

	return 0;
}

namespace quadratic {
	using namespace std;
	double quadCalc(double a, double b, double c)
	{

		if (a == NULL || b == NULL || c == NULL)
		{
			cout << "You must input a value!" << endl;
		}

		double A1 = (b*b) - 4 * a*c;
		double A2 = sqrt(A1);
		double B1 = ((-b) + A2) / (2 * a);
		double B2 = ((-b) - A2) / (2 * a);

		if (B1 != B1 || B2 != B2)
		{
			cout << "The result is an imaginary number." << endl;
			goto M3;
		}

		return B1, B2;
	M3:
		system("PAUSE");
	}
}