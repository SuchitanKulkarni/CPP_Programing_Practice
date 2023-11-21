/* Q4.Write a program to check how private and public work. */

#include<iostream>
using namespace std;

class dist
{
	private :
		int x;
		
	public :
		int y;
		
		void set()
		{
			x= y;
			cout<<"x = "<<x;
		}
};

int main()
{
	dist d1;
	d1.y = 20;
	//d1.x = 15  error;
	d1.set();
	
	return 0;
	
}
