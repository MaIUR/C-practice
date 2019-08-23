#include<iostream>
using namespace std;

void Gcd(int a,int b, int &gcdref)
{
	int min;
	if (a >= b)
		min = b;
	else
		min = a;

	for (int n = 1; n <= min; ++n)
	{
		if (0 == a%n && 0 == b%n)
			gcdref = n;
	}

	//return gcd;
}

void main()
{
	int c = 1;
	while (c >= 1)
	{
		int a, b,gcd=0;
		cout << "Enter two integers:";
		cin >> a >> b;
		Gcd(a,b,gcd);
		cout << "The greatest common divisor of " << a << " and " << b << " is " << gcd << endl << endl;
	}
}
