/* 7.
	class Base
	{
		private:
			int b;
		public:
			void scanbase();
			int getbase();
	};
	class Power
	{
		private:
			int p;
		public:
			void scanpower();
			int getpower();
	};
	int main()
	{
		Base base;
		Power power;
		calc(base,power);
	}
	*/
	
	
#include<iostream>
using namespace std;


class Base
	{
		private:
			int b;
		public:
			void scanbase();
			int getbase();
	};
	
	void Base :: scanbase()
	{
		cout<<"enter the base : "<<endl;
		cin>>b;
	}
	int Base :: getbase()
	{
		return b;
	}
	class Power
	{
		private:
			int p;
		public:
			void scanpower();
			int getpower();
	};
	void Power::scanpower()
	{
		cout<<"enter the power : "<<endl;
		cin>>p;
	}
	
	int Power :: getpower()
	{
		return p;
	}
	
	void calc(Base base , Power power)
	{
		base.scanbase();
		int B;
		B = base.getbase();
		
		power.scanpower();
		int P;
		P = power.getpower();
		
		int i,ans=1;
		
		for(i=1;i<=P;i++)
		{
			ans = ans *B ;
		}
		
		cout<<" ans = "<<ans;
	}
	int main()
	{
		Base base;
		Power power;
		calc(base,power);
	}
