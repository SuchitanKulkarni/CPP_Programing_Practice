/*
Q15.WAP to make constructor and destructor of one class a friend of another class.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		char name[80];
		number()
		{
			cout<<"enter the name : "<<endl;
			cin.getline(name,80);
			
		};
		~number()
		{
			cout<<name;
		}
			friend class student;
};

class student
{
	public:
		
		number obj;
		
};

int main()
{
	student s1;
	
	return 0;
}
