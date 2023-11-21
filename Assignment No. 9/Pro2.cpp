/* Q2.
class Number
{
	private:
		int x,y;
}
Create 2 objects of Number.Scan and print thir data using pointer to object.
You can add your own member function.
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
			cout<<"enter the values for x and y : "<<endl;
			cin>>x>>y;
		}
		
		void show()
		{
			cout<<" x = "<<x<<" y =  "<<y<<endl;
		}
};

int main()
{
	Number T1,T2;
	Number *p = &T1;
	Number *q = &T2;
	
	p->scan();
	q->scan();
	p->show();
	q->show();
	
	return 0;
}
