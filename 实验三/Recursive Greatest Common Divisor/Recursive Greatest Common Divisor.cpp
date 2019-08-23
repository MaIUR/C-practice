#include<iostream>
using namespace std;

int Gcd( int x, int y)
{
	/*int min;
	if(x<=y)
		min=x;
	else
		min=y;*/

	int gcd;
	if( y==0)
		return x;
	else
		gcd=Gcd( y, x%y);
}

void main()
{
	int n1,n2;
	cout<<"Enter two integers:";
	cin>> n1 >> n2 ;
	cout<<"Greatest common divisor of "<<n1<<" and "<<n2<<" is:"<<Gcd(n1,n2)<<endl;
}
