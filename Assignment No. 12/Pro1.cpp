/*
1.WAP to check how multilevel inheritance works.
Try to access members of Parent from Child class.
*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		
		Grand()
		{
			cout<<"in grand default"<<endl;
		}
		
		void set()
		{
			cout<<"hello all"<<endl;
		}
};

class Parent : public Grand
{
	public:
		
		Parent()
		{
			cout<<"in parent default"<<endl;
		}
		
};

class child : public Parent
{
	public:
		
		child()
		{
			cout<<"in child default"<<endl;
		}
		
};

int main()
{
	child obj;
	
	obj.set();
	
	return 0;
}
