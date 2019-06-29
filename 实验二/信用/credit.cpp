#include<iostream>
#include<iomanip>
#include"credit.h"
using namespace std;

Account::Account(int account)
{
	cout << "Enter account number ( -1 to end ) :";
	cin >>this->account;
}

void Account::calculate()
{
	double charges;
	double credits;
	while (account != -1)
	{
		cout << "Enter beginning balance:";
		cin >> balance;
		cout << "Enter total charges:";
		cin >> charges;
		cout << "Enter total credits:";
		cin >> credits;
		cout << "Enter credit limit:";
		cin >> creditlimit;

		balance = balance + charges - credits;

		if (balance <= creditlimit)
			cout << "\nNew balance is£º" << setprecision(2) << fixed << balance;
		else
		{
			cout << "\nAccount:" << account;
			cout << "\nCredit limit:" << setprecision(2) << fixed << creditlimit;
			cout << "\nBalance:" << balance;
			cout << "\nCredit limit Exceeded.";
		}

		cout << "\nEnter account number ( -1 to end ) :";
		cin >> account;
	}
}

