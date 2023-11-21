/* Q5.Scan year from user.Check if it is leap or not.Check the condition of leap in first assignment. */

#include<iostream>
using namespace std;

int main()
{
	int year;
	cout<<"Enter the Year : "<<endl;
	cin>>year;
	
	if(year%100==0 && year%400==0)
	{
		cout<<"It is leap year";
	}
	else if(year%100!=0 && year%4==0)
	{
		cout<<"It is leap year";
	}
	else
	{
		cout<<"It is not an leap year";
	}
	
	return 0;
	
}

