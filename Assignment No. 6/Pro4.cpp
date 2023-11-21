/* 4.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3.add(T1,T2);
		T3.show();
	} */
	
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void scan()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		void show()
		{
			cout<<"T3.x = "<<x<<" T3.y = "<<y;
		}
		
		void add(Number p1,Number p2)
		{
			x = p1.x + p2.x;
			y = p1.y + p2.y;
		}
};
int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3.add(T1,T2);
		T3.show();
	} 
