/*
Q5.WAP to check working of initialization list.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		number(int a,int b) : x(a) , y(b+2)
		{
			cout<<"x = "<<x<<" y = "<<y<<endl;
		}
		
};

int main()
{
	number obj(1,2);
	
	return 0;
}
