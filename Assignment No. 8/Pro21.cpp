/*
Q20-1.WAP to find nth prime number.
*/

#include<iostream>
using namespace std;

int isprime(int a);

int main()
{
	int n;
	cout<<"Enter the nth integer :  "<<endl;
	cin>>n;
	
	int i;
	
	for(i=0;i<=n;i++)
	{
		if(isprime(i)==1)
		{
			cout<<i<<" ";
		}
	}
	
	return 0;
}
int isprime(int a)
{
	int i;
	
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	if(i==a)
	{
		return 1;
	}
}
