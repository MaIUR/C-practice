#include<iostream>
#include<cmath>
#include"Factorial.h"
using namespace std;

double Factorial::factorial(int n)
{
	double fac = 1;
	double a = 1;
	while (a <= n)
	{
		fac = fac * a;
		a += 1;
	}

	return fac;
}

void Factorial::getE()
{
	int num1;
	double e = 1;
	cout << "Please input the number of terms used to calculate e:";
	cin >> num1;

	int b = 1;
	while (b <= num1)
	{
		e = e + 1 / factorial(b);
		b += 1;
	}


	cout << "The value of e is:" << e << endl;
}

void Factorial::getEx()
{
	int num2;
	int x;
	cout << "Please input the number of terms used to calculate ex:";
	cin >> num2;
	cout << "Please input the x:";
	cin >> x;

	int c = 1;
	double ex = 1;
	while (c <= num2)
	{
		ex = ex + pow(x + 0.0, c) / factorial(c);
		c += 1;
	}

	cout << "The value of ex is:" << ex;
}