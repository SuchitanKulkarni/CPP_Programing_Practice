/*

4.
class Parent
{
	protected:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : protected Parent
{
	public:
		void myfun();
};
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Do not change access specifier of any member.Do not add any member to child.
Write path you have used to access each member in your program in Comment.
*/

#include<iostream>
using namespace std;

class Parent
{
	protected:
		int y;
		void disp();
	public:
		int z;
		void show();
};
void Parent :: disp()
{
	cout<<"in parent disp"<<endl;
	y = 30;
}
void Parent :: show()
{
	cout<<"in parent show"<<endl;
	z = 34;
	disp();
	cout<<" y = "<<y<<" z = "<<z<<endl;
}
class Child : protected Parent
{
	public:
		void myfun()
		{
			show();
		}
};

int main()
{
	Child obj;
	
	obj.myfun();
	
	
	return 0;
}
