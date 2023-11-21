/*
11.WAP to check constructor execution in multilevel inheritance.
Both default and parameterized constructors expected.
*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		
		Grand()
		{
			cout<<"in default grand"<<endl;
		}
		
		Grand(int a)
		{
			cout<<"in parameterized grand"<<endl;
		}
};

class Parent : public Grand
{
	public:
		
		Parent() :  Grand(8)
		{
			cout<<"in default parent "<<endl;
		}
		
		Parent (int a)
		{
			cout<<"in parameterized parent "<<endl;
		}
};

class child : public Parent
{
	public:
		
		child() : Parent(4)
		{
			cout<<"in default child"<<endl;
		}
		
		child(int a)
		{
			cout<<"in parameterized child"<<endl;
		}
};

int main()
{
	child obj;
	cout<<" --------------------------------->"<<endl;
	child var(6);
	
	return 0;
}
