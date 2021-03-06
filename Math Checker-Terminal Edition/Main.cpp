#include <iostream>
#include <string.h>
#include <sstream>
#include <math.h>
#include "quadCalc.h"
#include "add.h"

int main()
{
	using namespace std;
	cout << "Choose your operation:" << endl;
	cout << "1.Quadratic Solver" << endl;
	cout << "2.Adding Machine" << endl;
	int n;
	cin >> n;

	if (n == 1)
	{
		quadratic::quadCalc();
	}
	else if (n == 2)
	{
		add::add();
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
		cout << "Input a value for a: ";
		cin >> a;
		cout << "Input a value for b: ";
		cin >> b;
		cout << "Input a value for c: ";
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
		else if (B1 == NULL || B2 == NULL)
		{
			goto M1;
		}

		if (B1 < B2)
		{
			cout << "x = " << B1 << ", " << B2 << endl;
		}
		else if (B2 < B1)
		{
			cout << "x = " << B2 << ", " << B1 << endl;
		}
	M3:
		system("PAUSE");
	}
}

namespace add {
	using namespace std;
	void add() 
	{
		cout << "Input a number: ";
		cin >> a;
		system("cls");
		cout << "Input the next number to be added to the first: ";
		cin >> b;
		system("cls");
		while (cin)
		{
			a += b;
			cout << "Input the next number to be added or / to add the given numbers: ";
			cin >> b;
			system("cls");
		}
		cout << "The final result is: " << a << endl;
		system("PAUSE");
	}
}