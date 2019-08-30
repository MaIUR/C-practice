#include<iostream>
#include<iomanip>
using namespace std;

void main()
{
	int counter;
	int s[10] = { 6, 4, 2, 8, 10, 12, 37, 45, 68, 89 };//0-9
	cout << "Data items in original order\n";
	for (int n = 0; n <= 9; ++n)
		cout << setw(4) << right << s[n];
	cout << endl;
	
	for (counter = 8; counter >= 0; --counter)//从0开始比较9次最后是8
	{
		bool flag = false;
		for (int n = 0; n <= counter; ++n)
		{
			if (s[n] >= s[n + 1])
			{
				swap(s[n], s[n + 1]);
				flag = true;
			}
		}
		cout << "After pass " << 8 - counter << ":";
		for (int n = 0; n <= counter + 1; ++n)
			cout << setw(4) << right << s[n];
		cout << endl;
		if (flag == false)
			break;
	}

	cout << "Data items in ascending order\n";
	for (int n = 0; n <= 9; ++n)
		cout << setw(4) << right << s[n];
	cout << endl;

	system("pause");
}
