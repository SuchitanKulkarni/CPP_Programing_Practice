/* 9.
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
		Digit D;
		D.scan(T1);
		D.scan(T2);
		D.print(T1,T2);		
}
	*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y ;
		
};
class Digit	

	{
		
		public:
			
		void scan(Number &p)
		{
			cout<<"enter the x and y : "<<endl;
			cin>>p.x>>p.y;
		}
		void print(Number p,Number q)
		{
			cout<<" x1 = "<<p.x<<" y1 = "<<p.y<<" x2 = "<<q.x<<" y2 = "<<q.y;
		}
	};

	int main()
	{
		Number T1,T2;
		Digit D;
		D.scan(T1);
		D.scan(T2);
		D.print(T1,T2);		
    }

