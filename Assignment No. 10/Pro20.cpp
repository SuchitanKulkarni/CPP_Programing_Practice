/*
19.WAP to understand static members.(static member functions and static data members)
*/

#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		static int y;
		
		void show()
		{
			cout<<"\nIn show";
		}
		static void print(number & p)
		{
			p.x = 34;
			y = 23;
			
			cout<<"x = "<<p.x;
			cout<<"\n y = "<<y;
		}
};

 int number :: y;

int main()
{
	number obj;
	
	number::print(obj);
	obj.show();
	obj.number::y;
	
	return 0;
}
