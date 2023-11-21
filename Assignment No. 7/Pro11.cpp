/* 6.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		scan(T1);
		T2=scan();
		T3.add(T1,T2);
		T3.print();
	}
	*/
	
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void add(Number p, Number q)
		{
			x = p.x + q.x;
			y = p.y + q.y;
		}
		
		void print()
		{
			cout<<"  x = "<<x<<" y = "<<y;
		}
};

void scan(Number &p)
{
	cout<<"enter the x and y : "<<endl;
	cin>>p.x>>p.y;
}

Number scan()
{
	Number p;
	cout<<"enter the x and y : "<<endl;
	cin>>p.x>>p.y;
	
	return p;
}

	int main()
	{
		Number T1,T2,T3;
		scan(T1);
		T2=scan();
		T3.add(T1,T2);
		T3.print();
	}
