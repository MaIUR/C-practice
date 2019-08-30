#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int s[1000] = {};
	for (int i = 0; i <= 999; ++i)
		s[i] = 1;

	for (int num = 2; num <= 999; ++num)
	{
		if(s[num]==1)
		{
			for (int k = 2; k*num <= 999; ++k)
				s[k*num] = 0;
		}
	}

	cout << "The prime numbers between 1 and 1000 are:\n";
	int counter = 0;
	for (int i = 2; i <= 999; ++i)
	{
		if (s[i] == 1)
		{
			cout << setw(5) << right << i;
			counter++;
		}
	}
	cout << "\nA total of " << counter << " prime numbers were found.\n";

	system("pause");
	return 0;
}
