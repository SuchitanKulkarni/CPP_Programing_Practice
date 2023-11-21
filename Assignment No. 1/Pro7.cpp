/* 7.Scan year from user.Check if it is a leap year or not.
Condition for leap year.
-If year is multiple of 100 then it must be multiple of 400.Then it is a leap year.
-If year is not multiple of 100 then it must be multiple of 4.Then it is leap year.
-Otherwise it is not a leap year.. */

#include<iostream>
using namespace std;

int main()
{
	int year;
	cout<<"Enter the Year ";
	cin>>year;
	
	if(year%100==0 && year%400==0)
	{
		cout<<"\n It is an Leap Year";
	}
	else if(year%100!==0 && year%4==0)
	{
		cout<<"\nIt is an leap Year";
	}
	else
	{
		cout<<"\n It is not leap year";
	}
	
	return 0;
}
