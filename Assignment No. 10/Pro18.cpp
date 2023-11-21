/*

17.
class Base
{
	public:
		int b;
};

class Power
{
	public:
		int p;
};

class Calc
{
	public:
		Base base;
		Power power;
};
Add member functions in class Calc to scan bas and power.
Find base raised to power.(This is composition)
*/

#include<iostream>
using namespace std;

class Base
{
	public:
		int b;
};

class Power
{
	public:
		int p;
};

class Calc
{
	public:
		Base base;
		Power power;
		
		void scan()
		{
			int i,sum=1;
			cout<<"enter the base and power : "<<endl;
			cin>>base.b>>power.p;
	
		for(i=1;i<=power.p;i++)
		{
			sum = sum * base.b;
		}
		cout<<"Answer = "<<sum;
		}
	
};

int main()
{
	Calc T1;
	
	T1.scan();
	
	
	return 0;
}
