/*unsigned int Fibonacci(unsigned int n)
{
	unsigned int fibonacci;
	if ((n == 0)||(n==1))
		return n;
	else
	{
	for (int a = 0, b = 1, counter = 2; counter <= n; ++counter)
	{
		fibonacci = a + b;
		a = b;
		b = fibonacci;
	}
	return fibonacci;
	}
}

/*double Fibonacci(int n)
{
	double fibonacci;
	if ((n == 0)||(n==1))
		return n;
	else
	{
	for (double a = 0.0, b = 1.0, counter = 2; counter <= n; ++counter)
	{
		fibonacci = a + b;
		a = b;
		b = fibonacci;
	}
	return fibonacci;
	}
}*/
#include<iostream>
#include"Fibonacci Series.h"
using namespace std;

void main()
{
	int intfib = 0;
	double doufib = 0;

	Fibonacci(intfib);
	cout << endl;

	Fibonacci(doufib);

	system("pause");
}
