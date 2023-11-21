/*
Q17.
class Number
{
	private:
		int x,y;
};
Scan and print data of 2 runtime objects.You can add member functions.
Do not use friend function.
*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		
	public:
		
		void scan()
		{
			cout<<"Enter the x and y :  "<<endl;
			cin>>x>>y;
		}
		void print()
		{
			cout<<" x  = "<<x<<" y = "<<y<<endl;
		}
};
int main()
{
	Number T1,T2;
	
	Number *p = &T1;
	Number *q = &T2;
	
	p->scan();
	q->scan();
	
	p->print();
	q->print();
	
	return 0;
}
