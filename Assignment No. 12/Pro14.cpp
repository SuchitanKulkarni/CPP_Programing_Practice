/*
14.
WAP to understand working of initialization list.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		
		int x, y;
		
		number(int a, int b) : x(5),y(9+x)
		{
			x = a;
			y = b;
		}
		
		void show()
		{
			cout<<" x = "<<x<<" y =  "<<y;
		}
};

int main()
{
	number obj(8,9);
	
	obj.show();
	
	return 0;
}
