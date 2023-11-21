/*
Q11.
class Date
{
	public:
		int day;
		int month;
		int year;
		void getdate();
		void showdate();
};

class Employee
{
	public:
		//name
		//birth date
		//joining date
		//company name
};
Scan data for 3 employees and print it.
Think how can you relate Date and Employee clases.(is-a OR has-a).
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
			cout<<day<<"/"<<month<<"/"<<year<<"  ";
		}
};

class Employee
{
	public:
		char name[20];
		char companyname[90];
		
		Date birth;
		Date joining;
		
		void scan()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,20);
			
			cout<<"enter the campany name : "<<endl;
			cin.getline(companyname,60);
			cout<<"enter the birthday : "<<endl;
			birth.getdate();
			cout<<"enter the joining : "<<endl;
			joining.getdate();
		}
		void show()
		{
			cout<<name<<" "<<companyname<<" ";
			birth.showdate();
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
