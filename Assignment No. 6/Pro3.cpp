/* 3.
	int main()
	{
		Number T1,T2;
		T1.scan(T2);
		T1.print(T2);
	}
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		
		int x,y;
		
		void scan(Number &p)
		{
			cout<<" enter the x and y :"<<endl;
			cin>>p.x>>p.y;
		}
		void print(Number &p)
		{
			cout<<" T1.x = "<<p.x<<" T1.y = "<<p.y;
		}
};
int main()
	{
		Number T1,T2;
		T1.scan(T2);
		T1.print(T2);
	}
