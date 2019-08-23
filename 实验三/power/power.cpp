#include<iostream>
using namespace std;

int power(int base, int exponent)
{
	int num;
	if(exponent!=1)
		num = base*power(base, exponent-1);
	else
		num=base;
	return num;
}

void main()
{
	int base1, exponent1;
	cout << "Enter a base and an exponent:";
	cin >> base1 >> exponent1;
	cout << base1 << " raised to the " << exponent1 << " is " << power(base1, exponent1)<<endl;

	system("pause");
}
