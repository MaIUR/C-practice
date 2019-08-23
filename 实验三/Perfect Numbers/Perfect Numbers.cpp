#include<iostream>
using namespace std;

bool perfect(int num)
{
	int a = 1;
	int sum = 0;
	for (; a < num; ++a)
	{
		if (0 == num % a)
			sum = sum + a;
	}
	
	if (num == sum)
		return true;
	else
		return false;
}

void main()
{
	cout << "Perfect integers between 1 and 1000:" << endl;
	for (int n = 2; n <= 1000; ++n)
	{
		if (true == perfect(n))
		{
			int a = 1;
			cout << n << " = 1";
			for (; a < n; ++a)
			{
				if (0 == n % a && a > 1)
					cout << " + " << a;
			}
			cout << endl;
		}

	}

	system("pause");
}
