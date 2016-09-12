#include <iostream>
#include <string.h>
#include <math.h>
#include <string.h>
#include "Main1.h"
#include "simpleCalc.h"

int main1()
{
	using namespace std;
	cout << "More Menu" << endl;
	cout << "Please choose your mathematical operation:" << endl;
	cout << "1.Simple Calculator" << endl;
	int n;
	cin >> n;
	
	if(n == 1)
	{
		simpleCalc::simpleCalculator();
	}
	
	namespace simpleCalc {
		static void simpleCalculator()
		{
			string x;
			cout << "Please input a simple mathematical function" << endl;
			cout << "such as 1+1 or 5/7, use keyboard operators like" << endl;
			cout << "+, -, *, /, %, etc." << endl;
			cout << "No equations, only mathematical problems." << endl;
			cin >> x;
			
			int i = stoi(x);
			cout << "The result is: " << i << " please put any issues on the github page." << endl;
		}
	}
	return 0;
}
