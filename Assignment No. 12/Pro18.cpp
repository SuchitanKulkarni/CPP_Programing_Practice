/*
2.
WAP to explain parameter passing by reference.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		
		void set(number&p)
		{
			p.x = 34; 
			
			x = p.x;
		}
		
		void show()
		{
			cout<<"x = "<<x;
		}
};

int main()
{
	number T1,T2;
	
	T1.set(T2);
	
	T1.show();
	
	return 0;
	
}
