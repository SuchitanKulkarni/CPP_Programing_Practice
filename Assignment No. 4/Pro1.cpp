/* Q1.Scan array of 5 integers from user.Find the largest and smallest value in array.*/

#include<iostream>
using namespace std;

int main()
{
	int num[5];
	cout<<"enter the 5 intergers : "<<endl;
	int i;
	
	for(i=0;i<5;i++)
	{
		cin>>num[i];
	}
	int min,max;
	
	min = num[0];
	max = num[0];
	
	for(i=0;i<5;i++)
	{
		if(min>num[i])
		{
			min=num[i];
		}
		
		if(max <num[i])
		{
			max = num[i];
		}
	}
	
	cout<<"Largest value = "<<max<<endl;
	
	cout<<"smallest value = "<<min<<endl;
	
	return 0;
}

