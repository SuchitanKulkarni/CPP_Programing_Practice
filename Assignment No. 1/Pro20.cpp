/* 20.Create an array of 3 integers at runtime.Scan those 3 values from user and print them. */

#include<iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[3];
	
	cout<<"Enter the 3 integers"<<endl;
	int i;
	for(i=0;i<3;i++)
	{
		cin>>*(p+i);
	}
	for(i=0;i<3;i++)
	{
		cout<<*(p+i)<<" ";
	}
	
	return 0;
}

