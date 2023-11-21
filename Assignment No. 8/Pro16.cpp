/*
Q16.
class Number
{
	public:
		int x,y;
};
Create 2 runtime objects of Number.Scan and print their data in main() only.
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

int main()
{
	Number T1,T2;
	Number *p = &T1;
	Number *q = &T2;
	
	p = new Number();
	q = new Number();
	
	cout<<"Enter the x1 nd y1 : "<<endl;
	cin>>p->x>>p->y;
	
	cout<<"Enter the x2 and y2 : "<<endl;
	cin>>q->x>>q->y;
	
	cout<<"x1 = "<<p->x<<" y1 = "<<p->y<<endl;
	cout<<" x2 = "<<q->x<<" y2 = "<<q->y<<endl;
	
	return 0;
}
