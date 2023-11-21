/*
4)class Number contains 2 private datamembers.x and y.
(x and y must be private in the class)

	int main()
	{
		Number T1,T2;
		cout<<"\nEnter 2 integers = ";
		cin>>T1.x>>T2.x;
		cout<<"\nT1.x = "<<T1.x<<" T2.x = "<<T2.x;
		return 0;
	}
*/

#include<iostream>
using namespace std;

class Number
{
	int x ,y;
	
	friend int main();
};

int main()
{
	Number T1,T2;
		cout<<"\nEnter 2 integers = ";
		cin>>T1.x>>T2.x;
		cout<<"\nT1.x = "<<T1.x<<" T2.x = "<<T2.x;
		return 0;
}
