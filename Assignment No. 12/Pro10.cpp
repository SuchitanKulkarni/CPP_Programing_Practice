/*
10.WAP to solve diamond problem using virtual class.
*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		
		void show()
		{
			cout<<"in Grand "<<endl;
		}
};

class Parent1 : public virtual Grand 
{
	
};

class Parent2 : public virtual Grand
{
	
};

class Child : public Parent1 , public  Parent2
{	
    public:
    	
};

int main()
{
	Child obj;
	
	obj.show();
	
	return 0;
}
 

