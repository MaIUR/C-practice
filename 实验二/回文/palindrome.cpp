#include<iostream>
#include"palindrome.h"
using namespace std;

Palindrome::Palindrome(int number)
{
	cout << "The 5-digits integer is:";
	cin >> this->number;
}

void Palindrome::division()
{
	n1 = number / 10000;
	n2 = (number % 10000) / 1000;
	n3 = (number % 10000 % 1000) / 100;
	n4 = (number % 10000 % 1000 % 100) / 10;
	n5 = number % 10000 % 1000 % 100 % 10;
	cout << "Each digit of the 5-digits integer is:" << n1 << "  " << n2 << "  " << n3 << "  " << n4 << "  " << n5 << endl;
}

void Palindrome::compare()
{
	if (n1==n5)
	if (n2 == n4)
		cout << "This integer is a palindrome!"<<endl;
}