/* Q7.Scan array of 8 integers from user.Copy it in another array in reverse order. */

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	int i;
	cout<<"Enter the 8 integers : "<<endl;
	for(i=0;i<8;i++)
	{
		cin>>num[i];
	}
	
	int num1[8];
	for(i=0;i<8;i++)
	{
		num1[7-i] = num[i];
	}
	
	for(i=0;i<8;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<"\n Reversed array\n ";
	for(i=0;i<8;i++)
	{
		cout<<num1[i]<<" ";
	}
	
	return 0 ;
}

