/*
1.
WAP to explain static members concept of class.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		
		static int y;
		
		static void set()
		{
			cout<<" y = "<<y<<endl;
		}
};

int number :: y = 67;

int main()
{
	number::set();
	
	number obj;
	
	obj.set();
	
	return 0;
}
