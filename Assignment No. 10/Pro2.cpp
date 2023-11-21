/* 2.WAP to understand how copy constructor gets executed when we perform parameter passing by reference.
*/

#include<iostream>
using namespace std;


class number
{
	public:
		
		number(int a )
		{
			cout<<"in parameterized"<<endl;
		}
		number(number & temp )
		{
			cout<<"in copy"<<endl;
		}
};

void myfun(number t)
{
	cout<<"in myfun "<<endl;
}

int main()
{
	number T1(3);
	
	myfun(T1);
	
	return 0;
}
