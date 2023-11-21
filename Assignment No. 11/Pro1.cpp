/*
Q1.WAP to explain constructor and destructor for runtime objects.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		number()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		~number()
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
			cout<<"Is destroyed"<<endl;
		}
};
int main()
{
	number * p;
	p = new number[2];
	
	delete [] p;
	
	
}
