/*
Q17.
class Employee
{
	private:
		int salary;
		char name[20];
		char hometown[15];
};
Create a database of 6 Employees.Scan a name from user.Search if database contains Employee
having name given by user.You can add your own member functions.
*/

#include<iostream>
using namespace std;

class Employee
{
	private:
		int salary;
		char name[20];
		char hometown[15];
		
	public :
		
		Employee()
		{
		cout<<"Enter the name : "<<endl;
	    cin.getline(name,20);
		
		cout<<"Enter the salary : "<<endl;
		cin>>salary;
		cin.ignore(1);
		
		cout<<"Enter the Hometown : "<<endl;
		cin.getline(hometown,15);
		}
		
		int compair (char *p)
		{
			if(name == p)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend ostream& operator <<(ostream& dout,Employee p);
		
};

ostream& operator <<(ostream& dout,Employee p)
{
	cout<<p.name<<" "<<p.salary<<" "<<p.hometown<<endl;
	
	return dout;
}

int main()
{
	Employee e[6];
	
	char str[100];
	cout<<"Enter the name to compair : "<<endl;
	cin.getline(str,100);
	
	int i;
	
	for(i=0;i<6;i++)
	{
		if(e[i].compair(str)==1)
	{
		cout<<e[i];
	}
	}
	
}
