/*
Q10.
class Person
{
	public:
		string name;
		int age;
		void scanperson();
		void showperson();
};
class Employee
{
	public:
		string name;
		int age;
		string companyname;
};
class Teacher
{
	public:
		string name;
		int age;
		string schoolname;
};

Scan data for 2 employees and 2 Teachers.
Implement inheritance to solve this program.
You can make changes in class to implement inheritance.
*/

#include<iostream>
using namespace std;

class Person
{
	public:
		string name;
		int age;
		void scanperson()
		{
			cout<<"enter the name : "<<endl;
			getline(cin,name);
			
			cout<<"enter the age : "<<endl;
			cin>>age;
			cin.ignore(1);
		}
		void showperson()
		{
			cout<<name<< " "<<age<<" ";
		}
};
class Employee : public Person
{
	public:
		string companyname;
		
		void scanemployee()
		{
			scanperson();
			
			cout<<"enter the company name : "<<endl;
			getline(cin,companyname);
		}
		
		void showemployee()
		{
			showperson();
			cout<<companyname<<" ";
		}
};

class Teacher : public Person
{
	public:
		string schoolname;
		
		void scanteacher()
		{
			scanperson();
			cout<<"enter the school name : "<<endl;
			getline(cin,schoolname);
		}
		
		void showteacher()
		{
			showperson();
			cout<<schoolname;
		}
};

int main()
{
	Employee e[2];
	Teacher T[2];
	
	e[0].scanemployee();
	e[1].scanemployee();
	
	T[0].scanteacher();
	T[1].scanteacher();
	
	e[0].showemployee();
	e[1].showemployee();
	
	T[0].showteacher();
	T[1].showteacher();
	
	return 0;
}
