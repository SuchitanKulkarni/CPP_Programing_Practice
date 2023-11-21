/*
16.
WAP to understand execution of destructor in inheritance(multiple inheritance).
*/

#include<iostream>
using namespace std;

class parent1
{
	public:
		
		parent1()
		{
			cout<<"in Parent1"<<endl;
		}
		~parent1()
		{
			cout<<"destroy parent1"<<endl;
		}
};

class parent2
{
	public:
		
		parent2()
		{
			cout<<"in parent2"<<endl;
		}
		~parent2()
		{
			cout<<"destroye parent2"<<endl;
		}
};

class child : public parent1 , private parent2
{
	public:
		
		child()
		{
			cout<<"in child"<<endl;
		}
		~child()
		{
			cout<<"destroyed child"<<endl;
		}
};

int main()
{
	child obj;
	
	return 0;
}
