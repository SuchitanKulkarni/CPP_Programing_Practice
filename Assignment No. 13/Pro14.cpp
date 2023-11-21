/*
Q8.WAP to understand the diamond problem.
*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		
	void show()
	{
		cout<<"in grant show()"<<endl;
	}
};

class parent1 : public virtual Grand
{
		
};

class parent2 : public virtual Grand
{
	
};

class child : public parent1, public parent2
{
	
};

int main()
{
	child obj;
	
	obj.show();
	
	return 0;
}
