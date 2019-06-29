#include<iostream>
#include"Date.h"
using namespace std;

int main()
{
	Date date(11, 2, 2017);

	cout << date.getDateMonth() << "/" << date.getDateDay() << "/" << date.getDateYear() << endl;
	
	system("pause");
	return 0;
}