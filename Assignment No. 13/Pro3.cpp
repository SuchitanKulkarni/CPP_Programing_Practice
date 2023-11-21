/*
Q3.WAP to understand working of abstract classes.Perform experiments.
*/

#include<iostream>
using namespace std;

class parent
{
	public:
		
		virtual void show() = 0;
		
		void print()
		{
			cout<<"in parent print"<<endl;
		}
};

class child : public parent
{
	public:
		
		void show()
		{
			cout<<"in show()"<<endl;
		}
};

int main()
{
	child obj;
	//parent var;---------- cant difine the object;
	obj.print();
	obj.show();
	
	return 0;
}
