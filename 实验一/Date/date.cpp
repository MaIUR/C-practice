#include<iostream>
#include"Date.h"
using namespace std;

Date::Date(int datemonth, int dateday, int dateyear)
{
	setDateMonth(datemonth);
	setDateDay(dateday);
	setDateYear(dateyear);
}

void Date::setDateDay(int dateday)
{
	day = dateday;

}

void Date::setDateMonth(int datemonth)
{

	if (0 < datemonth && datemonth< 13)
		month = datemonth;
	else
		month = 1;
}
void Date::setDateYear(int dateyear)
{

	year = dateyear;

}

int Date::getDateDay()
{
	return day;
}
int Date::getDateMonth()
{
	return month;
}
int Date::getDateYear()
{
	return year;
}

void Date::displayDate()
{
	cout << getDateMonth() << "/" << getDateDay() << "/" << getDateYear() << endl;
}