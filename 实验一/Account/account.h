
/************************************************* 
Author: MaIUR
Date:2017-11-10 
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
