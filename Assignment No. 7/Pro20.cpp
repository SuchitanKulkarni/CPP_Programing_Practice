/* 5.
	class Base
	{
		private:
			int b;
		public;
			//You can add your own member functions
	};
	class Power
	{
		private:
			int p;
		public:
			//You can add your own member functions
	};
	int main()
	{
		Base base,power;
		//Calculate base^power in independannt function calc().
		//Print result in main().
		//Do not use friend function.
	}
	
*/

#include<iostream>
using namespace std;


	class Base
	{
		private:
			int b;
		public:
		     void getbase();
		     int setbase();
	};
	void Base :: getbase()
	{
		cout<<"Enter the base : "<<endl;
		cin>>b;
	}
	int Base :: setbase()
	{
		return b;
	}

	class Power
	{
		private:
			int p;
		public:
			void getpower();
			int setpower();
	};
	
	void Power :: getpower()
	{
		cout<<"enter the power : "<<endl;
		cin>>p;
	}
	int Power :: setpower()
	{
		return p;
	 } 
	 
	int calc(Base base,Power power)
	 {
	 	int B = base.setbase();
	 	int P = power.setpower();
	 	
	 	int i,ans = 1;
	 	
	 	for(i=1;i<=P;i++)
	 	{
	 		ans = ans *B;
		 }
		 
		 return ans;
	 }
	
	int main()
	{
		Base base;
		Power power;
		base.getbase();
		power.getpower();
		
		int val = calc(base,power);
		
		cout<<" \nans = "<<val;
		
		return 0;
	}
