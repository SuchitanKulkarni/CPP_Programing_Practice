/* 5.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T3 = add(T1,T2);
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
			cout<<" enter the x and y : "<<endl;
			cin>>x>>y;
		}
		void print()
		{
			cout<<" T3.x = "<<x<<" T3.y = "<<y;
		}
};

    void scan(Number &p)
	{
		cout<<" enter the x and y : "<<endl;
		cin>>p.x>>p.y;
	}

Number add(Number p1,Number p2)
{
	Number p;
	p.x = p1.x + p2.x;
	p.y = p1.y + p2.y;
	
	return p;
}
		
int main()
{
	Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T3 = add(T1,T2);
		T3.print();
	
}
