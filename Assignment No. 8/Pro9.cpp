/* Q10.
class Number
{
	public:
		int x,y;
};
For 3 objects of Number in main(),scan and print their data using pointer to object only.

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
	Number T1,T2,T3;
	Number * p =&T1;
	Number *q = &T2;
	Number *r = &T3;
	
	
	cout<<"enter the x and y : "<<endl;
	cin>>p->x>>p->y;
	
	cout<<"enter the x and y : "<<endl;
	cin>>q->x>>q->y;
	
	cout<<"enter the x and y : "<<endl;
	cin>>r->x>>r->y;
	
	cout<<" T1.x = "<<p->x<<" T1.y = "<<p->y<<endl;
	cout<<" T2.x = "<<q->x<<" T2.y = "<<q->y<<endl;
	cout<<" T3.x = "<<r->x<<" T3.y = "<<r->y<<endl;
	
	return 0;
}
