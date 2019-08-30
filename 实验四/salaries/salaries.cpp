#include<iostream>
#include<iomanip>
using namespace std;

int calculate(int);

void main()
{
	int gross;
	int s[9] = {};
	for (int n = 0; n >= 0;++n)
	{
		cout << "Enter employee gross sales (-1 to end):";
		cin >> gross;
		if (gross != -1)
		{
			double all;
			all = calculate(gross);
			cout << "Employee commission is:$" << setprecision(2) << fixed << all << endl << endl;
			int i = all / 100 - 2;
			if (i > 7)
				i = 8;
			s[i]++;
		}
		else
			break;
	}
	cout << "Employees in the range:\n";
	int n1 = 200, n2 = 299;
	for (int counter = 0; counter <= 7; ++counter)
	{
		cout << "$" << n1 << "-$" << n2 << " : " << s[counter] << endl;
		n1 += 100;
		n2 += 100;
	}
	cout << "Over $1000: " << s[8]<<endl;

	system("pause");
}

int calculate(int money)
{
	return 200 + 0.09*money;
}
