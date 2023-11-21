/*
Q2.Write code for following questions.

1)Complete the following code where calc() function calculates base raised to power.
Do not change access specifier of any member of class.
	class Base
	{
		public:
			int b;
			void getbase();
	};
	
	class Power
	{
		public:
			int p;
			void getpower();
	};
	
	---- calc(--- , ---)
	{

	} 
	
	int main()
	{
		Base objb;
		Power objp;
			
	}	
	*/
	
#include<iostream>
using namespace std;

class Base
	{
		public:
			int b;
			void getbase();
	};
	
	void Base :: getbase()
	{
		cout<<"Enter the base : "<<endl;
		cin>>b;
	}
	
	class Power
	{
		public:
			int p;
			void getpower();
	};
	
	void Power :: getpower()
	{
		cout<<"Enter the power : "<<endl;
		cin>>p;
	}
	
	int calc(Base base , Power power)
	{
		int i,sum = 1;
		
		for(i=1;i<=power.p;i++)
		{
			sum = sum*base.b;
		}
		
		return sum;
	} 
	
	int main()
	{
		Base objb;
		Power objp;
		
		objb.getbase();
		objp.getpower();
		
		int result;
		result = calc(objb,objp);
		
		cout<<" Result = "<<result<<endl;
		
		return 0 ;
	}	
