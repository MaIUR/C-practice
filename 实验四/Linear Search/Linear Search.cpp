#include<iostream>
using namespace std;

int linearSearch(const int [], int,int);

int main()
{
	const int arraysize = 50;
	int s[arraysize] = {};
	int searchkey;

	for(int i=0;i<arraysize;++i)
		s[i]=3*i;

	cout<<"Enter integer search key:";
	cin>>searchkey;

	int element=linearSearch(s,searchkey,arraysize);

	if(element!=-1)
		cout<<"Found value in element "<<element<<endl;
	else
		cout<<"Value not found."<<endl;

	system("pause");
	return 0;
}

int linearSearch(const int array[],int key,int size)
{
	if(size>0)
	{
		if(array[size-1]==key)
			return size-1;
		else
			linearSearch(array,key,size-1);
	}
	else
		return -1;
}
