/*
Q20.
class Employee
{
	private:
		int salary;
		char name[20];
		char hometown[15];
};
Create a database of 6 Employees.Scan a cityname from user.
Print all those students from database who belong to city mentioned by user.
Read three inbuilt functions of string we have seen.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		int salary;
		char name[20];
		char hometown[15];
		
	public:
		
		void scan()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,20);
			
			cout<<"Enter the salary  : "<<endl;
			cin>>salary;
			cin.ignore(1);
			
			cout<<"enter the hometown : "<<endl;
			cin.getline(hometown,15);
		}
		
		int compare(char * p)
		{
			int res = strcmp(name,p);
			
			if(res == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		void print()
		{
			cout<<name<<" "<<salary<<" "<<hometown<<endl;
		}
};

int main()
{
	Employee e[6];
	
	int i;
	
	for(i=0;i<6;i++)
	{
		e[i].scan();
	}
	
	char str[90];
	
	cout<<"\n\nEnter the name which want to compare : "<<endl;
	cin.getline(str,80);
	
	for(i=0;i<6;i++)
	{
		if(	e[i].compare(str))
		{
			e[i].print();
		}
	}
	
	return 0;
}
