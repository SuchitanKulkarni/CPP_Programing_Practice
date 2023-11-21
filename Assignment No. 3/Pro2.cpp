/* 2.Scan array of 6 integers from user.Find the largest value from array.
(pointer notation) */

#include<iostream>
using namespace std;

int main()
{
	int num[6];
	int *p = &num[0];
	
	int i;
	cout<<"Enter the 6 integers : "<<endl;
	for(i=0;i<6;i++)
	{
		cin>>*(p+i);
	}
	int max = *(p+0);
	
	for(i=0;i<6;i++)
	{
		if(max<*(p+i))
		{
			max = *(p+i);
		}
	}
	
	cout<<"Largest number = "<<max;
	
	return 0;
}
