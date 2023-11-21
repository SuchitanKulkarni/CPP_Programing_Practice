/*
3.
WAP to create array of n integers.Scan these n integers from user.
Print the largest value from n integers.(use new operator)
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the n value : "<<endl;
	cin>>n;
	
	int * p = new int[n];
	
	int i;
	
	cout<<"Enter the integers : "<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	
	int max = *(p+0);
	
	for(i=0;i<n;i++)
	{
		if(max < *(p+i))
		{
			max = *(p+i);
		}
	}
	
	cout<<"Largest values : "<<max;
	
	return 0;
}
