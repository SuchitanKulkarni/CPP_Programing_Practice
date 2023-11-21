/*
10)Scan details of 3 employees and print them.It should contain name,salary and address of an employee.
*/

#include<iostream>
using namespace std;

class employee
{
	char name[90];
	int salary;
	char address[90];
	
	public:
		
		void scan()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,90);
			
			cout<<"Enter the salary : "<<endl;
			cin>>salary;
			cin.ignore(1);
			
			cout<<"Enter the address : "<<endl;
			cin.getline(address,80);
		}
		void show()
		{
			cout<<name<<" "<<salary<<" "<<address<<endl;
		}
};
int main()
{
	employee d[3];
	
	int i;
	
	for(i=0;i<3;i++)
	{
		d[i].scan();
	}
	for(i=0;i<3;i++)
	{
		d[i].show();
	}
	
	return 0;
}
