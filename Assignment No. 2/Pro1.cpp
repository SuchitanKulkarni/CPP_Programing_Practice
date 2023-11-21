/* Q1.Scan 3 integers from user.Find the largest value using conditional operator. */

#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	cout<<"Enter 3 integers : ";
	cin>>num1>>num2>>num3;
	
	int max;
	if(num1>num2)
	{
		max = num1;
	}
	else
	{
		max = num2;
	}
	
	max = max > num3 ? max : num3 ; 
	
	cout<<"Largest = "<<max;
	
	return 0;
	
}

