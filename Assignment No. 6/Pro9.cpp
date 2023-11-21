/* 
3)class Number contains 2 private datamembers.x and y.
	int main()
	{
		Number T1,T2;
		T1 = Number::getdata();
		T2 = Number::getdata();
		T1.print();
		T2.print();
	}
	*/
	
#include<iostream>
using namespace std;

class Number
{
	int x,y;
	public:
		
		static Number getdata()
		{
			Number obj; 
			cout<<"enter the x and y : "<<endl;
			cin>>obj.x>>obj.y;
			
			return obj;
		}
		void print()
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
		}
		
};
	int main()
	{
		Number T1,T2;
		T1 = Number::getdata();
		T2 = Number::getdata();
		T1.print();
		T2.print();
	}
