#include<iostream>
#include"Factorial.h"
using namespace std;

int main()
{
	Factorial num;
	int n;
	cout << "Please input a nonnegative integer:";
	cin >> n;
	//num.factorial(n);
	cout << "The factorial of " << n << " is:" << num.factorial(n) << endl;

	num.getE();
	num.getEx();
	system("pause");
	return 0;
}