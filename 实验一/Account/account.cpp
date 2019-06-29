#include<iostream>
#include"account.h"
using namespace std;

Account::Account(int Balance)
{
	//setBalance(Balance);
	if (Balance >= 0)
		balance = Balance;
	else
	{
		balance = 0;
		cout << "the initial balance was invalid" << endl;
	}
}

/*void Account::setBalance(int Balance)
{
	if (Balance >= 0)
		balance = Balance;
	else
	{
		balance = 0;
		cout << "the initial balance was invalid" << endl;
	}
}*/

int Account::getBalance()
{
	return balance;
}

void Account::credit(int a)
{
	balance = balance + a;

}

void Account::debit(int b)
{
	if (balance >= b)
		balance = balance - b;
	else
		cout << "Debit amount exceeded account balance" << endl;
}