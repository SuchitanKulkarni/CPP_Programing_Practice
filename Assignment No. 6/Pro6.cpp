/* 6.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T1.add(T2,T3);
		T3.show();
	} */
	
	
#include<iostream>
using namespace std;

class Number
{
	public:
		int x ,y ;
		
		void scan()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		void add (Number p,Number q)
		{
			q.x = p.x + x;
			q.y = p.y + y;
		}
		void show()
		{
			cout<<" T3.x = "<<x<<" T3.y = "<<y;
		}
};

void scan(Number &p)
{
	cout<<"Enter the x and y : "<<endl;
	cin>>p.x>>p.y;
}

int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T1.add(T2,T3);
		T3.show();
	} 

