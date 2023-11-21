/*
8.Scan array of n integers from user.Sort it in descending order.
*/

#include<iostream>
using namespace std;

int main()
{
	int * p;
	int n;
	
	cout<<"Enter the n : "<<endl;
	cin>>n;
	
	p = new int[n];
	
	int i,j,temp;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter an integer : "<<endl;
		cin>>*(p+i);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i) < *(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	return 0;
	
}
