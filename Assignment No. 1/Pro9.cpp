/* 9.Scan arry of 6 integers from user.Print addition of all elements in array.*/

#include<iostream>
using namespace std;

int main()
{
	int num[6];
	cout<<"Enter the 6 integers";
	int i;
	for(i=0;i<6;i++)
	{
		cin>>num[i];
	}
	int sum=0;
	for(i=0;i<6;i++)
	{
		cout<<num[i]<<" ";
		sum = sum+num[i];
	}
	cout<<"\nAddition = "<<sum;
	
	return 0;
	
}
