//¸ùºÅn£¿


#include<iostream>
#include<iomanip>
using namespace std;

bool Prime(int num)
{
	int a = 1;
	int judge=1;
	for (; a <= num/2; ++a)
	{
		if (0 == num%a && a!=1)
			judge = 0;
	}
	if (judge == 0)
		return false;
	else
		return true;
}

void main()
{
	cout << "The prime numbers between 1 and 10000 are:"<<endl;
	int counter=0;
	for (int n = 2; n <= 10000; ++n)
	{
		if (Prime(n) == true)
		{
			++counter;
			cout << setw(5) << right << n << "   ";
		}
	}
	cout<<"\nTotal of "<<counter<<" prime numbers between 1 and 10000.\n";

	system("pause");
}
