/*
2.WAP to check how multiple inheritance works.
Try to access members of Parent from Child class.
Check ambiguity when multiple Parents contain same member.
*/

#include<iostream>
using namespace std;

class Parent1
{
	public:
		
		Parent1()
		{
			cout<<"In parent1 "<<endl;
		}
		
		void set()
		{
			cout<<"In parent1 set function"<<endl;
		}
};

class Parent2
{
	public:
		
		Parent2()
		{
			cout<<"in parent2"<<endl;
		}
		
		void set()
		{
			cout<<"in parent2 set function"<<endl;
		}
};

class child : public Parent1 , public Parent2
{
	public:
		
		child()
		{
			cout<<"in child "<<endl;
		}
};

int main()
{
	child obj;
	
 //	obj.set()----------it will generates ambiguty error
 
   obj.Parent1::set();
   obj.Parent2::set();
   
   return 0;
}
