/* 
3.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		scan(T1);
		scan(T2);
		T1.print();
		print(T2);
	}
	*/
	
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void print()
		{
			cout<<" x = "<<x<<" y = "<<y;
		}
};

void scan(Number &p)
{
	cout<<" enter the x and y : "<<endl;
	cin>>p.x>>p.y;
}
void print(Number p)
{
	cout<<" x = "<<p.x<<" y = "<<p.y;
}

	int main()
	{
		Number T1,T2;
		scan(T1);
		scan(T2);
		T1.print();
		print(T2);
	}
