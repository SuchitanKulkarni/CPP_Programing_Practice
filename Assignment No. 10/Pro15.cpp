/*
15.
class Number
{
	public:
		int x,y;
};
Create an array of 4 objects at runtime.Scan data for those objects
and print the data.
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void scan()
		{
			cout<<"enter the x and y : "<<endl;
			cin>>x>>y;
		}
		void print()
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
		}
};

int main()
{
	Number *std,*arr,*temp,*t;
	std = new Number[4];
	arr = new Number[4];
	temp = new Number[4];
	t = new Number[4];
	
	std->scan();
	arr->scan();
	temp->scan();
	t->scan();
	std->print();
	arr->print();
	temp->print();
	t->print();
	
	return 0;
	return 0;
}

