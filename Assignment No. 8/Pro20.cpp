/*
Q20.Scan a range from user.Print all prime numbers in range.
*/

#include<iostream>
using namespace std;
int isprime(int a);

int main()
{
	int a,b;
	
	cout<<"Enter the range : "<<endl;
	cin>>a>>b;
	
	int max,min;
	
	if(a>b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	int i,count=0;
	
	for(i=min;i<=max;i++)
	{
		if(isprime(i))
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
