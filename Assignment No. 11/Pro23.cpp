/*
Q19.
Create class Employee having private name , salary and hometown.
Print all employee belonging to "pune".
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)
*/

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private :
		
		char name[30];
		int salary;
		char hometown[90];
		
	public:
		
		friend int operator == (Employee c , char *p);
		
		void scan()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,20);
			
			cout<<"Enter the salary : "<<endl;
			cin>>salary;
			cin.ignore(1);
			
			cout<<"Enter the Hometown : "<<endl;
			cin.getline(hometown,50);
			
		}
		
		void show()
		{
			cout<<name<<" "<<salary<<" "<<hometown<<endl;
		}
};

    int operator == (Employee c , char *p)
		{
			if(strcmp(&c.hometown[0],p)==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

int main()
{
	Employee e[3];
	
	int i;
	
	char str[90] = "pune";
	
	for(i=0;i<3;i++)
	{
		e[i].scan();
	}
	
	for(i=0;i<3;i++)
	{
		if(e[i]== str)
		{
			e[i].show();
		}
	}
	
	return 0;
}

