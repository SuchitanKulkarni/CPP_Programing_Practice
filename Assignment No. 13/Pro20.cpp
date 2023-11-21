/*
Q14.
class Employee
{
	char name[30];
	char hometown[20];
};
Create a database of 6 employees.
-Print only those employees whose name starts with 'A'.
-Print only those employees who belong to pune.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	char name[30];
	char hometown[20];
	
	public:
		
		Employee()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,30);
			
			cout<<"Enter the home town : "<<endl;
			cin.getline(hometown,20);
		}
		
		int operator == ( string p)
		{
			if( hometown == p)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
			int operator == (char *p)
		{
			int res = strcmp(&name[0],p);
			if(res == 0)
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
	cout<<p.name<<" "<<p.hometown<<endl;
}

int main()
{
	Employee e[6];
	int i;
	char a[2] = {'A'};
	string b = "pune" ;
	
	for(i=0;i<5;i++)
	{
		if(e[i] == a)
		{
			cout<<e[i];
		}
		
		if(e[i]== b)
		{
			cout<<e[i];
		}
	}
	
	return 0;
}
