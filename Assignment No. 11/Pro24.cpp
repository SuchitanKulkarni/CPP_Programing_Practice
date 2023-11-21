/*
Q20.
Create class Employee having private name , salary and hometown.
Print all employee having salary greater than 40000.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)
*/

#include<iostream>
using namespace std;

class Employee
{
	private : 
	
	        char name[90];
	        int salary;
	        char hometown[80];
	        
	public :
		
		int operator > (int p)
		{
			if(salary > p)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		void scan()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,20);
			
			cout<<"Enter the salary : "<<endl;
			cin>>salary;
			cin.ignore(1);
			
			cout<<"Enter the hometown : "<<endl;
			cin.getline(hometown,20);
			
		}
		
		void show()
		{
			cout<<name<<" "<<salary<<" "<<hometown<<endl;
		}
};

int main()
{
	Employee e[3];
	
	int i;
	
	for(i=0;i<3;i++)
	{
		e[i].scan();
	}
	for(i=0;i<3;i++)
	{
		if(e[i] > 40000)
		{
			e[i].show();
		}
	}
	
	return 0;
}
