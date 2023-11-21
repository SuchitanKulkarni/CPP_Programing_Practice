/*
13.
WAP to check constructor execution in multiple inheritance.
Both default and parameterized constructors expected.
Try virtual class also.
*/

#include<iostream>
using namespace std;

class parent1
{
	public:
		
		parent1()
		{
			cout<<"in def parent1"<<endl;
		}
		parent1(int a)
		{
			cout<<"in parameterized parent1 "<<endl;
		}
		
};

class parent2
{
	public:
		
		parent2()
		{
			cout<<"in def parent2 "<<endl;
		}
		parent2(int a)
		{
			cout<<"in parameterized parent2 "<<endl;
		}
};

class child : public parent1, virtual private parent2
{
	public:
		
		child() : parent1(9)
		{
			cout<<"in def child "<<endl;
		}
		
		child(int a) : parent2(4)
		{
			cout<<"in parameterized child "<<endl;
		}
};

int main()
{
	child e;
	child obj(4);
	
	return 0;
}
