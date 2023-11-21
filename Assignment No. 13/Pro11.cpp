/*
Q5.
Scan 6 city names from user.Sort them alphabetically in ascending order.
Use inbuilt string data type.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string a[6];
	
	cout<<"Enter the 6 cities : "<<endl;
	
	int i;
	
	for(i=0;i<6;i++)
	{
		getline(cin,a[i]);
	}
	
	int j;
	
	string p;
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				p = a[i];
				a[i] = a[j];
				a[j] = p;
			}
		}
	}
	
	cout<<"sortted cities : "<<endl;
	
	for(i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}

