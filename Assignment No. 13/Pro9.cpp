/*
Q2.
Scan n integers from user.Sort them in ascending order(runtime memory).
*/

#include<iostream>
using namespace std;

int main()
{
	int * a;
	int n;
	a = new int[n];
	
	
	cout<<"enter the number of integers to sort : "<<endl;
	cin>>n;
	
	int i;
	
	cout<<"enter "<<n<<" intergers : "<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int j, temp;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout<<"sortted array is "<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
