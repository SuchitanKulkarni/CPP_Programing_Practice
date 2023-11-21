/* Q1.

class Number
{
	public:
		int x,y;
}
Create 2 objects of Number.Scan and print thir data using pointer to object.
Do not add any member function.
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
	Number * p = &T1;
	Number * q = &T2;
	
	cout<<"Enter the values to x1 and y1 : "<<endl;
	cin>>p->x>>p->y;
	
	cout<<"Enter the value to x2 and y2 :  "<<endl;
	cin>>q->x>>q->y;
	
	cout<<"T1.x = "<<p->x<<" "<<"T1.y = "<<p->y<<endl;
	cout<<"T2.x = "<<q->x<<" "<<" T2.y = "<<q->y<<endl;
	
	return 0;
	
}
