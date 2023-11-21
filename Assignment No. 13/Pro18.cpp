/*
Q12.
class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate();
		void showdate();
};

class Person
{
	public:
		string name;
		int age;
		//birthdate
		void scanperson();
		void showperson();
};

class Employee
{
	public:
		string name;
		int age;
		string companyname;
		//joining date
};
Use inheritance and composition wisely.
*/

#include<iostream>
using namespace std;

class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate()
		{
			cin>>day>>month>>year;
		}
		void showdate()
		{
			cout<<day<<"/"<<month<<"/"<<year<<" ";
		}
};

class Person
{
	public:
		string name;
		int age;
		Date birth;
		void scanperson()
		{
			cout<<"Enter the name : "<<endl;
			getline(cin,name);
			
			cout<<"Enter the age : "<<endl;
			cin>>age;
			
			cout<<"Enter the birthday : "<<endl;
			birth.getdate();
		}
		void showperson()
		{
			cout<<name<<" "<<age<<" ";
			birth.showdate();
		}
};

class Employee : public Person
{
	public:
		Date joining;
		string companyname;
		
		void scan()
		{
			scanperson();
			cin.ignore(1);
			cout<<"Enter the company name : "<<endl;
			getline(cin,companyname);
			
			cout<<"Enter the joining : "<<endl;
			joining.getdate();
		}
		
		void show()
		{
			showperson();
			
			cout<<companyname<<" ";
			
			joining.showdate();
		}
		
};

int main()
{
	Employee e;
	
	e.scan();
	e.show();
	
	return 0;
}
