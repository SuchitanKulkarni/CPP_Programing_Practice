/* 
5.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T3 = T1.add(T1,T2);
		T3.print();
	}
	*/
	
	
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void scan()
		{
			cout<<"enter the x and y :"<<endl;
			cin>>x>>y;
			
		}
		
		Number add(Number p,Number q)
		{
			Number r;
			
			r.x = p.x + q.x;
			r.y = p.y + q.y;
			
			return r;
		}
		
		void print()
		{
			cout<<" x = "<<x<<" y = "<<y;
		}
};

	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3 = T1.add(T1,T2);
		T3.print();
	}
