
/************************************************* 
Author: MaIUR
Date:2018-11-5 
**************************************************/ 

#include<string>
using namespace std;

class Account
{
public:
	Account(int);
	void credit(int);
	void debit(int);
	void setBalance(int);
	int getBalance();

private:
	int balance;
};
