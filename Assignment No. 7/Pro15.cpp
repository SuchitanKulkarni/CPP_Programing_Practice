/* 10.
	class Number	
	{
		public:
			int x,y;
	};
	class Digit	
	{
	};
	int main()
	{
		Number T1,T2;
		Digit::scan(T1);
		Digit::scan(T2);
		print(T1);
		Digit::print(T2);
	}
*/

#include<iostream>
using namespace std;

class Number	
	{
		public:
			int x,y;
	};
	class Digit	
	{
		public:
			
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
	
	void print(Number p)
	{
		cout<<"x = "<<p.x<<" y = "<<p.y;
	}
	int main()
	{
		Number T1,T2;
		Digit::scan(T1);
		Digit::scan(T2);
		print(T1);
		Digit::print(T2);
	}
