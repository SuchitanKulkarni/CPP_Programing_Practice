/* 1.WAP to explain static members in class. */

#include<iostream>
using namespace std;

class number
{
	public:
		static int y;
		int x;
		
		static void scan(number &p)
		{
			cout<<" enter the x and y :"<<endl;
			cin>>p.x>>y;
		}
		
		void show()
		{
			cout<<" x = "<<x<<" y = "<<number::y;
		}
		
};

int number :: y =7;

int main()
{
	number t1;
	t1.scan(t1);
	t1.show();
	
	return 0;
}
