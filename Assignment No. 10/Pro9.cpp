/* 
9.
class Number
{
	public:
		int *p;
};
For given class,scan data for 2 objects and print them.
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int *p;
		
		void scan()
		{
			cout<<"Enter the data : "<<endl;
			p = new int[1];
			cin>>*(p+0);
		}
		void print()
		{
			cout<<" Data = "<<*(p+0);
		}
};
int main()
{
	Number T1,T2;
	
	T1.scan();
	T2.scan();
	T1.print();
	T2.print();
	
	return 0;
}
