#include<iostream>
#include"account.h"
using namespace std;

int main()
{
	Account balance1(50);
	Account balance2(25);


	cout << "account1 balance:$" << balance1.getBalance() << endl << "account2 balance:$" << balance2.getBalance() << endl << endl;

	int a;
	cout << "Enter deposit amount for account1:";
	cin >> a;
	balance1.credit(a);
	cout << "attampting to add " << a << " to account1 balance" << endl << endl << endl;
	cout << "Now account1 balance is:$" << balance1.getBalance() << endl << endl;

	int b;
	cout << "Enter withdrawal amount for acount1:";
	cin >> b;
	balance1.debit(b);
	cout << "attampting to subtract " << b << " to account1 balance" << endl << endl << endl;

	cout << "account1 balance:$" << balance1.getBalance() << endl << "account2 balance:$" << balance2.getBalance() << endl << endl;

	cout << "Enter withdrawal amount for acount2:";
	cin >> b;
	cout << "attampting to add" << a << "to account2 balance" << endl << endl << endl;
	balance2.debit(b);


	cout << "account1 balance:$" << balance1.getBalance() << endl << "account2 balance:$" << balance2.getBalance() << endl << endl;

	system("pause");
	return 0;
}