/*
12.
WAP to check constructor execution in multiple inheritance.
Only default constructor expected.
*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		
		Grand()
		{
			cout<<"in def grand "<<endl;
		}
};

class Parent : public Grand
{
	public:
		
		Parent()
		{
			cout<<"in def parent"<<endl;
		}
};

class child : public Parent
{
	public:
		
		child()
		{
			cout<<"in def child"<<endl;
		}
};

int main()
{
	child obj;
	
	return 0;
}
