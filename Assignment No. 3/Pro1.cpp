/* 1.Scan array of 10 integers.Copy it in another array.
Print both arrays.
([ ] notation) */

#include<iostream>
using namespace std;

int main()
{
	int num[10];
	int i;
	cout<<"Enter 10 integer : "<<endl;
	for(i=0;i<10;i++)
	{
		cin>>num[i];
	}
	int num1[10];
	for(i=0;i<10;i++)
	{
		num1[i]=num[i];
	}
	cout<<"First array is : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<endl;
	cout<<"Second array is : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<num1[i]<<" ";
	}
	
	return 0;
}
