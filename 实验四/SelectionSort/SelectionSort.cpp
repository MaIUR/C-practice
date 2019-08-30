#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

void selectionSort(int [], int);
//int min(int[], int);

int main()
{
	int s[10] = {};
	srand(time(0));
	for (int n = 0; n <= 9; ++n)
		s[n] = rand()%1000;

	cout << "Unsorted array is:\n";
	for (int n = 0; n <= 9; ++n)
		cout << setw(5) << right << s[n];

	selectionSort(s, 10);

	cout << "\nSorted array is:\n";
	for (int n = 0; n <= 9; ++n)
		cout << setw(5) << right << s[n];
	cout << endl;

	system("pause");
	return 0 ;
}

void selectionSort(int t[], int arraysize)
{
	if (arraysize != 1)
	{
		int i = 10 - arraysize;
		int min = 1000, counter = 0;
		for (; i <= 9; ++i)
		{
			if (t[i] <= min)
			{
				min = t[i];
				counter = i;
			}
		}
		t[counter] = t[10 - arraysize];
		t[10 - arraysize] = min;

		selectionSort(t, arraysize - 1);
	}
}
