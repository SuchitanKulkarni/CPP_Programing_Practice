/*

8)Understand the main() and define class Base and Power.
	int main()	
	{
		Base base;
		Power power;
		base.getbase();
		//getbase() function scans base value from user
		power.getpower();
		//getpower() function scans power value from user.
		calc(base,power);
		//calc() function calculates base raised to power.
		return 0;
	}
	*/
	
#include<iostream>
using namespace std;

class Base
{
	public:
		int b;
		void getbase()
		{
			cout<<"Enter the base : "<<endl;
			cin>>b;
		}
};

class Power
{
	public:
		int p;
		
		void getpower()
		{
			cout<<"Enter the power : "<<endl;
			cin>>p;
		}
};

void Calc(Base base,Power power)
{
	
	int i;
	int sum = 1;
	for(i=1;i<=power.p;i++)
	{
		sum = sum*base.b;
	}
	
	cout<<" Answer = "<<sum<<endl;
};
	int main()	
	{
		Base base;
		Power power;
		base.getbase();
		//getbase() function scans base value from user
		power.getpower();
		//getpower() function scans power value from user.
		Calc(base,power);
		//calc() function calculates base raised to power.
		return 0;
	}
