//ΕΌΚύΤυΓ΄°μ£Ώ

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void square();
void diamond();
void triangle();

void diamond()
{
	string character;
	int size;
	cout << "\nEnter a charecter and size:";
	cin >> character >> size;

	int top, bottom;
	top = size / 2 + 1;
	bottom = size / 2;

	int counter1=1;
	for (int a = 1, b = top; counter1 <= top; ++counter1, a += 2, --b)
	{
		cout << setw(b) << " ";
		for (int c = 1; c <= a; ++c)
			cout << character;
		cout << endl;
	}

	int counter2 = 1;
	for (int a = bottom * 2 - 1, b = 2; counter2 <= bottom; ++counter2, a -= 2, ++b)
	{
		cout << setw(b) << " ";
		for (int c = 1; c <= a; ++c)
			cout << character;
		cout << endl;
	}
}

void squire()
{
	string character;
	int size;
	cout << "\nEnter a charecter and size:";
	cin >> character >> size;

	int counter=1;
	for (; counter <= size; ++counter)
	{
		for (int b = 1; b <= size; ++b)
			cout << character;
		cout << endl;
	}
}

void triangle()
{
	string character;
	int size;
	cout << "\nEnter a charecter and size:";
	cin >> character >> size;

	int counter = 1;
	for (int a=size; counter <= size; ++counter,--a)
	{
		cout << setw(a) << " ";
		for (int b = 1; b <= counter * 2 - 1; ++b)
			cout << character;
		cout << endl;
	}
}

void main()
{
	string judge;
	do
	{
		int num;
	    cout << "Choose the shape to graph\n" << "1 for squire\n" << "2 for diamond\n" << "3 for triangle\n" << "?";
    	cin >> num;

		switch (num)
		{
		case 1:
			squire();
			break;
		case 2:
			diamond();
			break;
		case 3:
			triangle();
			break;
		default:
			break;
		}
		cout << "Do you want to continue ( y or n )?:";
		cin >> judge;
	} while (judge == "y");

	system("pause");
}
