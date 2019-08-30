#include<iostream>
#include<string>
using namespace std;

void stringReverse(char[], int);

int main()
{
	char s[9];

	cout << "Please enter a word within 8 letters:";
	cin.getline(s, 9);

	/*if (word.length() > 8)
	{
	cin.getline(s, 9);
	cout << "The word " << word << "exceeds maximum length(8).\nLimit it to first 8 letters.";
	}
	else
	{
	cin.getline(s, 9);
	}*/

	stringReverse(s, 0);

	system("pause");
	return 0;
}

void stringReverse(char t[], int x)
{
	if (t[x] == NULL)
		return;
	stringReverse(t, x + 1);
	cout << t[x];
}
