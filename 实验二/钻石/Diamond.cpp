#include<iostream>
#include<iomanip>
#include"Diamond.h"
using namespace std;

void Diamond::top()
{
	int a=1,b=1,c=5,d=1;
	for (; a <= 5; ++a,b+=2,--c,d=1)
	{
		cout << setw(c) << " ";
		for (; d <= b;++d)
			cout << "*";
		cout << endl;
	}
}

void Diamond::bottom()
{
	int a = 1, b = 7, c = 2, d = 1;
	for (; a <= 4; ++a, b -= 2,++c, d = 1)
	{
		cout << setw(c) << " ";
		for (; d <= b; ++d)
			cout << "*";
		cout << endl;
	}
}