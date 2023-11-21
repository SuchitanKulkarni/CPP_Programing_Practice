/* 3.
	class Base
	{
		int b;
	};
	class Power
	{
		int p;
	};
	void calc(parameter list)
	{
		//calculate base^power here using objects created in main.
	}
	int main()
	{
		Base base;
		Power power;
	}
	
	*/
	
#include<iostream>
using namespace std;

class Power;

	class Base
	{
		int b;
		friend int main();
		friend void scan(Base &base);
		friend 	void calc(Base base,Power power);
	};
	class Power
	{
		int p;
		friend int main();
		friend void scan(Power &power);
		friend void calc(Base base,Power power);
	};
	void calc(Base base,Power power)
	{
		int i,ans=1;
		for(i=1;i<=power.p;i++)
		{
			ans = ans *base.b;
		}
		
		cout<<" ans = "<<ans;
	}
	void scan (Base &base)
	{
		cout<<"enter the base : "<<endl;
		cin>>base.b;
	}
	void scan(Power &power)
	{
		cout<<"enter the power : "<<endl;
		cin>>power.p;
	}
	int main()
	{
		Base base;
		Power power;
		
		scan(base);
		scan(power);
		calc(base,power);
		
		return 0;
	}
