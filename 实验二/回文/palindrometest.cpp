#include<iostream>
#include"palindrome.h"
using namespace std;

int main()
{
	Palindrome integer(12345);

	integer.division();
	integer.compare();

	system("pause");
	return 0;
}