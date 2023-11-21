/* 4.Scan array of 6 characters from user and print them.
([] notation) */

#include<iostream>
using namespace std;

int main()
{
	int num[6];
	int i;
	cout<<"Enter the 6 integers : "<<endl;
	for(i=0;i<6;i++)
	{
		cin>>num[i];
	}
	cout<<"Array is :"<<endl;
	for(i=0;i<6;i++)
	{
		cout<<num[i]<<" ";
	}
	
	return 0;
}
