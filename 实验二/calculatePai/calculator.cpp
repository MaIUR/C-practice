#include<iostream>
#include<iomanip>
#include<cmath>
#include"Calculator.h"
using namespace std;

double Calculator::calculator()
{
	cout <<setw(12)<<left<< "term" <<  "pi" << endl;

	double x = 0;
	for (int n = 1; n <= 1000; ++n)
	{
		int a = 2 * n - 1;
		x += pow(-1, n + 1.0)*(4.0 / a);
		cout << setw(12) <<left<< n << fixed << setprecision(8) << x<<endl;
	}

	return x;
}