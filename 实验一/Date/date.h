/************************************************* 
Author: MaIUR
Date:2018-11-5 
**************************************************/  

#include<string>
using namespace std;

class Date
{
public:
	Date(int, int, int);
	void setDateDay(int);
	int getDateDay();
	void setDateMonth(int);
	int getDateMonth();
	void setDateYear(int);
	int getDateYear();
	void displayDate();
private:
	int month, day, year;
};
