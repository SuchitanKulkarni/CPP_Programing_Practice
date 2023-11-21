/*
4.
WAP to create an array of n fraction values.Sort this array in ascending order.
(new operator)
*/

#include<iostream>
using namespace std;

int main()
{
	int n ;
	
	cout<<"Enter the value of n : "<<endl;
	cin>>n;
	
	float * p = new float[n];
	
	int i;
	
	cout<<"Enter the Fraction values : "<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	
	int j;
	float temp;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i) > *(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	
	cout<<"\n\n sorted array is : "<<endl<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	
	return 0;
}
