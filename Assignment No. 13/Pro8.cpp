/*
Q3.
Declare and initialize an array of 8 integers.
Scan a number from user.If that number is present in array,delete it.
Deletion of element will not change the size of array.
*/

#include<iostream>
using namespace std;

int main()
{
	int num[8] = {4,3,2,1,5,6,7,8};
	
	int n;
	cout<<"enter the number : "<<endl;
	cin>>n;
	
	for(int i=0;i<8;i++)
	{
		if(n == num[i])
		{
		    num[i]= 0;
		}
	}
	int j,temp;
	
	for(int i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(num[i]==0)
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	for(int i =0;i<8;i++)
	{
		cout<<num[i]<< " ";
	}
	
	return 0;
}
