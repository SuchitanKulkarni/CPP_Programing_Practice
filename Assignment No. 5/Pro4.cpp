/* Q4.Write a program to check how private and public work. */

#include<iostream>
using namespace std;

class number
{
	int p;
	
	public:
		int q;
		
		void display()
		{
			cout<<"enter the values : ";
			cin>>p;
			
			cout<<" p = "<<p<<" q = "<<q;
		}
};

int main()
{
	number num;
	
	num.q = 29;
	
	num.display();
	return 0;
}

