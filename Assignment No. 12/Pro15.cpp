/*
15.
WAP to understand execution of destructor in inheritance(multilevel inheritance).
*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		
		Grand()
		{
			cout<<"in Grand"<<endl;
		}
		~ Grand()
		{
			cout<<"the destroyed Grand "<<endl;
		}
};

class parent : public Grand
{
	public:
		
		parent()
		{
			cout<<"in parent "<<endl;
		}
		~parent()
		{
			cout<<"the destroyed parent "<<endl;
		}
};

class child : public parent
{
	public:
		
			child()
		{
			cout<<"in parent "<<endl;
		}
		~child()
		{
			cout<<"the destroyed parent "<<endl;
		}
};

int main()
{
	child obj;
	
	return 0;
}

