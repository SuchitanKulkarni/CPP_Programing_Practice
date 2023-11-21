/*
7.
class Number
{
	private:
		int x,y;
};
class Digit
{
	public:
		void scan()
		{
			//create object of Number
			//Scan and print data for that object
		}
};
int main()
{
	Digit obj;
}
*/

#include<iostream>
using namespace std;

class Digit;

class Number
{
	private:
		int x,y;
		
		friend class Digit;
};
class Digit
{
	public:
		void scan()
		{
			Number p;
			
			cout<<"Enter the x and y : "<<endl;
			cin>>p.x>>p.y;
			
			cout<<" x = "<<p.x<<" y =  "<<p.y<<endl;
		}
		
};
int main()
{
	Digit obj;
	
	obj.scan();
	
	return 0;
}
