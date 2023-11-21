/* 17.Scan array of 6 integers from user in main().Copy this array in 
another array in reverse order. */

#include<iostream>
using namespace std;

int main()
{
	int num[6];
	cout<<"Enter the 6 integers"<<endl;
	int i;
	for(i=0;i<6;i++)
	{
		cin>>num[i];
	}
	int num1[6];
	
	for(i=0;i<=5;i++)
	{
		num1[5-i] = num[i];
	}
	for(i=0;i<6;i++)
	{
		cout<<num1[i]<<" ";
	}
	
	return 0;
}
