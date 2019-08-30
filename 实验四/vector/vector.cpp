#include<iostream>
#include<vector>
#include<ctime>
#include<iomanip>
using namespace std;

int recursiveMiniMum(const vector<int>&,int Size);

int main()
{
	const int s=10;
	vector<int>v1(s);
	size_t i;

	srand(time(0));
	for(i=0;i<v1.size();++i)
		v1[i]=rand()%100;
	for(int n=0;n<s;++n)
		cout<<setw(4)<<v1[n];
	cout<<endl;

	int min=recursiveMiniMum(v1,s);
	cout<<"The minium is "<<min<<endl;

	system("pause");
	return 0;
}

int recursiveMiniMum(const vector<int>&array,int size)
{
	static int m=101;
	if(array[size-1]<m)
		m=array[size-1];
	if(size==1)
		return m;
	recursiveMiniMum(array,size-1);
}
