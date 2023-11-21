/* Q24.Scan salary of a person.If salary is less than 5000,add 10% bonus in salary and print the final salary.
If salary is greater than or equal to 5000,add 8% bonus to salary.Print final salary. */

#include<iostream>
using namespace std;

int main()
{
	int salary;
	cout<<"Enter the salary :  "<<endl;
	cin>>salary;
	
	if(salary<5000)
	{
		salary = salary + (salary*0.01);
		cout<<"Final Salary = "<<salary;
	}
	else if(salary>5000)
	{
		salary = salary + (salary*0.8);
		cout<<"Final Salary = "<<salary;
	}
}

