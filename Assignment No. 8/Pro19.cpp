/*
Q19.WAP to check all the rules of constant object and constant functions.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		
		number()
		{
			x=0;
		}
		number(int a)
		{
			x = a;
		}
		void set() const
		{
			//x = 10; it will generates error
			cout<<" x = "<<x<<endl;
		}
};

int main()
{
	number T1;
	number T2(2);
	
	T1.set();
	T2.set();
	
	return 0;
	
}
