/* Q1.Scan array of 5 integers from user.Find the largest and smallest value in array. */

#include<iostream>
using namespace std;

int main()
{
	int num[5];
	
	cout<<"enter the 5 integers : "<<endl;
	int i;
	
	for(i-0;i<5;i++)
	{
		cin>>num[i];
	}
	
	int max,min;
	
	max = num[0];
	min = num[0];
	
	for(i=0;i<5;i++)
	{
		if(max <num[i])
		{
			max = num[i];
		}
		
		if(min>num[i])
		{
			min = num[i];
		}
	}
	
	cout<<"Largest = "<<max<<"  "<<"Smallest = "<<min;
	
	return 0;
}

