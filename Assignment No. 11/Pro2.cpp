/*
Q2.WAP to explain copy constructor while passing parameter by value
*/

#include<iostream>
using namespace std;

class number
{
	public:
		
		number(int a , int b)
		{
			cout<<"In parameterized";
		}
		number(number &p)
		{
			cout<<"In copy "<<endl;
		}
};

void myfun(number p)
{
	cout<<"in myfun(by value) "<<endl<<endl<<endl;// here copy will call automatically as we are passing by values
}

void fun(number &p)
{
	cout<<"in fun(by reference ) "<<endl;
}

int main()
{
	number T1(3,5);
	number T2(T1);
	
	myfun(T1);
	fun(T1);
	
	return 0;

}
