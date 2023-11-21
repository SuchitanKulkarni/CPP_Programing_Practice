/* 8.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		Number::scan(T1);
		Number::scan(T2);
		Number::print(T1);
		Number::print(T2);
	}
	*/


#include<iostream>
using namespace std;

class Number 
{
	public:
		int x,y;
		
		static void scan(Number &p)
		{
			cout<<"enter the x and y : "<<endl;
			cin>>p.x>>p.y;
			
		}
		
		static void print(Number p)
		{
			cout<<" x = "<<p.x<<" y = "<<p.y;
		}
};

	int main()
	{
		Number T1,T2;
		Number::scan(T1);
		Number::scan(T2);
		Number::print(T1);
		Number::print(T2);
	}
