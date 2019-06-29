/************************************************* 
Author: MaIUR
Date:2017-11-20
**************************************************/ 

/*定义一个account类
定义成员函数：displaymessage、
定义数据成员：账户account、月初欠款balance、消费额charges、存入金额credits、允许的信用额度creditLimit
标记值循环while
if else双选结构

*/

//#include<string>
using namespace std;

class Account
{
	int account;
	double balance;
	//double charges;
	//double credits;
	double creditlimit;
public:
	Account(int);
	void calculate();
};
