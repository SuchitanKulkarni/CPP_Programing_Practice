/*
Q9.WAP to understand constructor execution in multiple and multilevel inheritance.
Use private and protected keywords for inheritance.
Check the destructor execution also.
*/

#include<iostream>
using namespace std;

class Grand
{
	public : 
	
	 Grand()
	 {
	 	cout<<"in grand"<<endl;
	 }
	 
	 ~Grand()
	 {
	 	cout<<"destroy Grand"<<endl;
	 }
};

class parent1 : public Grand
{
	public:
		
		parent1()
		{
			cout<<"in parent1"<<endl;
		}
		~parent1()
		{
			cout<<"destory parent1 "<<endl;
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
			cout<<"destory parent2"<<endl;
		}
};
class parent3 
{
	public:
		parent3()
	     {
			cout<<"in parent3"<<endl;
		}
		~parent3()
		{
			cout<<"destory parent3"<<endl;
		}
};

class child : protected parent1,private parent2,protected parent3
{
	public:
			child()
	     {
			cout<<"in child"<<endl;
		}
		~child()
		{
			cout<<"destory child"<<endl;
		}
 } ;
 
 int main()
 {
 	child obj;
 	
 	return 0 ;
 }
