/*
Q13.
class number
{
	int x;
	int y;
};
Create 3 runtime objects.Scan their data using constructor.
Print their data using destructor.
*/

#include<iostream>
using namespace std;

class number
{
	int x;
	int y;
	
  public:
  	
	number()
	{
		cout<<"Enter the x and y : "<<endl;
		cin>>x>>y;
	}
	~number()
	{
	    cout<<"x = "<<x<<" y = "<<y<<endl;
	}
};

int main()
{
	number *p,*q,*r;
	
	p  = new number();
	q = new number();
	r = new number();
	
		delete p;
		delete q;
		delete r;
}
