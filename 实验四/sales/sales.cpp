#include<iostream>
#include<iomanip>
using namespace std;

const int persons = 4;
const int products = 5;

int main()
{
	double sales[persons][products] = {};
	double row[persons] = {};
	double column[products] = {};
	int i, j;
	cout << "Enter the salesperson (1-4),product number(1-5),and total sales.\n" << "Enter -1 for the salesperson to end input.\n";

	for (int n = 0; n >= 0; ++n)
	{
		cin >> i;
		if (i != -1)
		{
			cin >> j;
			cin >> sales[i-1][j-1];
		}
		else
			break;
	}

	for (int n = 0; n <= persons - 1; ++n)
	{
		for (int m = 0; m <= products - 1; ++m)
			row[n] += sales[n][m];
	}

	for (int n = 0; n <= products - 1; ++n)
	{
		for (int m = 0; m <= persons - 1; ++m)
			column[n] += sales[m][n];
	}

	cout << "\nThe total sales of each salesperson are dispaleyed at the end of each row, and the total sales of each product arre displayed at the bottom of each column.\n\n";
	//±íÍ·
	cout << "      ";
	for (int pro = 0; pro <= products - 1; ++pro)
		cout << setw(10) << right << "product" << pro + 1;
	cout << setw(10) << right << "Total" << endl;
	//ÄÚÈÝ
	for (int peo = 0; peo <= persons - 1; ++peo)
	{
		cout << setw(6) << left << peo + 1;
		for (int n = 0; n <= 4; ++n)
			cout << setprecision(2) << fixed << setw(11) << right << sales[peo][n];
		cout << setw(10) << right << row[peo] << endl;
	}
	cout << setw(6) << right << "Total";
	for (int n = 0; n <= products - 1; ++n)
		cout << setw(11) << right << column[n];

	cout << endl;
	system("pause");
	return 0;
}
