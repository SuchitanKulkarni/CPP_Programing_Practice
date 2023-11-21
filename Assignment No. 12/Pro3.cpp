/*
3.
class Parent
{
	protected:
		int y;
		void disp();
	public:
		int z;
		void show();
};
class Child : public Parent
{
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
}
void Parent :: show()
{
	disp();
	y = 0;
	z = 7;
	cout<<"y = "<<y <<" z = "<<z<<endl;
	cout<<"in parent show"<<endl;
}
class Child : public Parent
{
};

int main()
{
	Child obj;
	
	obj.show();
	obj.z;
	
}
