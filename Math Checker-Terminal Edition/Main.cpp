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
		quadratic::quadCalc();
	}

	return 0;
}

namespace quadratic {
	using namespace std;
	void quadCalc()
	{
		goto M2;
	M1:
		cout << "You must input a value!" << endl;
	M2:
		cout << "Input a value for a:" << endl;
		cin >> a;
		cout << "Input a value for b:" << endl;
		cin >> b;
		cout << "Input a value fpr c:" << endl;
		cin >> c;

		if (a == NULL || b == NULL || c == NULL)
		{
			goto M1;
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

		cout << "x = " << B1 << ", " << B2 << endl;
	M3:
		system("PAUSE");
	}
}