/*
8.
class Grand
{
	public:
		void show();
};
class Parent : public Grand
{
	public:
		void show();
};
class Child : public Parent
{
	public:
		void show();
};
int main()
{
	Child obj;
}
Using object obj,try to access all 3 show() functions.
Try this code by changing access specifiers of membbers.
*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		void show()
		{
			cout<<"in grand"<<endl;
		}
};
class Parent : public Grand
{
	public:
		void show()
		{
			cout<<"in parent"<<endl;
		}
};
class Child : public Parent
{
	public:
		void show()
		{
			cout<<"in child"<<endl;
		}
};
int main()
{
	Child obj;
	
	obj.show();
	
	obj.Parent::show();
	obj.Grand :: show();
	
	return 0;
}
