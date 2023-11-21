/*
Q16.
class Employee
{
	public:
		int salary;
		char name[20];
		char hometown[15];
};
Create a database of 6 Employees.Scan a name from user.Search if database contains Employee
having name given by user.If yes,print all info of Employee.Do not add any member function.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
		int salary;
		char name[20];
		char hometown[15];
};

int main()
{
	Employee e[6];
	
	int i;
	
	for(i=0;i<6;i++)
	{
		cout<<"Enter the name : "<<endl;
	    cin.getline(e[i].name,20);
		
		cout<<"Enter the salary : "<<endl;
		cin>>e[i].salary;
		cin.ignore(1);
		
		cout<<"Enter the Hometown : "<<endl;
		cin.getline(e[i].hometown,15);
		
	}
	
	char str[30];
	cout<<"Enter the name to compair : "<<endl;
	cin.getline(str,20);
	
	for(i=0;i<6;i++)
	{
		if(strcmp(e[i].name,str))
		{
			cout<<e[i].name<<" "<<e[i].salary<<" "<<e[i].hometown<<endl;
		}
	}
}
